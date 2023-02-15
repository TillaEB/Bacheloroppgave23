// Biblioteker
#include <SD.h>
#include <SPI.h>
#include <TMRpcm.h>
#include <TinyGPS++.h>      
#include <SoftwareSerial.h>

TMRpcm audio;     // Lager et objekt for bruk av opptaker
File myFile;

// Defineringer
// Opptaker
int count = 0;
int ss1 = 1;
bool started = false;
bool stopped = false;
int red = A4;
// GPS
int RXGPSPin = 7;
int TXGPSPin = 6;

TinyGPSPlus gps;
SoftwareSerial SerialGPS(RXGPSPin, TXGPSPin);
String Latitude, Longitude, Altitude, day, month, year, hour, minute, second, Date, Time, Data;

void setup() 
{
  Serial.begin(9600);
  // Opptaker
  pinMode (12, OUTPUT);
  pinMode (13, OUTPUT);
  pinMode (red, OUTPUT);

  Serial.print("Initializing SD card...");
  
  if (!SD.begin(8))
  {
    Serial.println("SD not found");
    digitalWrite (red, HIGH);
    delay(2000);
    digitalWrite (red, LOW);
    return;
  } 
  else 
  {
    Serial.println("SD OK");
  }
  
  // Audio-biblioteket må vite hvilken CS pin som skal brukes for opptak
  audio.CSPin = 8;  

  // GPS
  myFile = SD.open("GPS_data.txt", FILE_WRITE);
  if (myFile)
  {
    myFile.println("Latitude, Longitude, Altitude, Date and Time \r\n");
    myFile.close();
  } 
  else 
  {
    Serial.println("Error opening GPS_data.txt");
  }
  SerialGPS.begin(9600);
  
}
// Opptaker
unsigned long pv1 = 0;

void loop() 
{
  // Opptaker
  if (digitalRead(3) == 1)                            // Hvis man trykker på knappen ...
  {       
    if(millis()-pv1 > 200)
    {
      pv1 = millis();
      ss1++;
      started = true;                                 // ... starter/stopper opptaket.
    }
  }

  if (ss1%2 == 0 && started)                          // Når opptaket har startet ...
  {     
    Serial.println("Recording in progress");
    started = false;
    stopped = true;
    digitalWrite(red, HIGH);                          // ... lyser det røde lyset
    audio.startRecording("opptak.wav", 16000, A0);    // Opptaket lagres med f = 16000 Hz, med A0-signalet som referanse
  }
  else if (ss1%2 != 0 && stopped){                    // Når opptaker stopper ... 
    Serial.println("Recording stopped");
    digitalWrite(red,0);                              // ... går det røde lyset av
    audio.stopRecording("opptak.wav");                // Opptaket lagres
    started = true;
    stopped = false;
  }

  // GPS
  while (SerialGPS.available() > 0)
  if (gps.encode(SerialGPS.read()))
  obtain_data();
  if (millis() > 5000 && gps.charsProcessed() < 10){
    Serial.println("GPS not detected!");
    while (true);
  }
}

void obtain_data()                                    // Metode som brukes i hoved-loopen
{
  if (gps.location.isValid())                         // Hvis lokasjonen er tilgjengelig ...
  {                                                   // ... kommer breddegrad, lengdegrad og MOH ut.
    Latitude = gps.location.lat();
    Longitude = gps.location.lng();
    Altitude = gps.altitude.meters();
  }
  else
  {
    Serial.println("Location is not available");      // Hvis lokasjonen ikke er tilgjengelig
  }

  if (gps.date.isValid())                             // Hvis datoen er tilgjengelig ... 
  {
    month = gps.date.month();
    day = gps.date.day();
    year = gps.date.year();
    Date = day + "-" + month + "-" + year;
    Serial.println(Date);                             // ... skrives dag, måned og årstall ut
  }
  else
  {
    Serial.print("Date is not available");            // Hvis datoen ikke er tilgjengelig
  }

  Serial.print("Time : ");
  if (gps.time.isValid())                             // Hvis tidspunkt er tilgjengelig ...        
  {
    if (gps.time.hour () < 10);
    hour = gps.time.hour();
    if (gps.time.minute () < 10);
    minute = gps.time.minute();
    if (gps.time.second() < 10);
    second = gps.time.second();
    Time = hour + ":" + minute + ":" + second;
  Serial.println(Time);                               // ... skrives time, minutt og sekund ut
  }
  else
  {
    Serial.print ("Time not available");              // Hvis tidspunkt ikke er tilgjengelig
  }

  Data = Latitude + "," + Longitude + "," + Altitude + "," + Date + "," + Time;
  Serial.print ("Save data: ");
  Serial.println(Data);                               // Skriver ut lenge- og breddegrad, samt dato og tid.
  myFile = SD.open("GPS_data.txt", FILE_WRITE);       // Lagres i tillegg på en fil på SD-kortet

  if (myFile)
  {
    Serial.print("GPS logging to GPS_data.txt ... ");
    myFile.println(Data);
    myFile.close();
    Serial.println("Done. ");
  }
  else
  {
    Serial.println("Error opening GPS_data.txt");
  }
  Serial.println();
  delay(5000);
}
