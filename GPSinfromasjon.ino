/*
  
Denne filen logger GPS-data i NMEA format til en tekstfil på et SD-kort. 
Loggingen starter ved å trekke en byter. Det er per nå ingen måte å avslutte loggingen med den samme bryteren. 
Loggingen avsluttes ved å ta ut SD-kortet fra SD-kort modulen. 


Krav for opplastning/kjøring av programmet: 
SD-kort 
GPS-modul 
SD-kort-modul
Arduino UNO

Steg for å komme kjøre programmet: 
1. Last ned følgende biblioteker: 
    https://github.com/thomasfredericks/Bounce2
    https://www.arduino.cc/reference/en/libraries/sd/
    https://docs.arduino.cc/learn/built-in-libraries/software-serial
    http://arduiniana.org/libraries/tinygpsplus/

 */

#include <Bounce2.h>                      // Bibliotek som brukes for bryteren
#include <SoftwareSerial.h>               // Bibliotek som gjør det mulig med seriell kommunikasjon
#include <TinyGPS++.h>                    // Bibliotek for GPS
#include <SD.h>                           // Bibliotek for SD-kort
#include <SPI.h>

// Definerer variabler
SoftwareSerial gpsSerial(7, 6);           // RX og TX pinner for GPS-modulen
TinyGPSPlus gps;
File gpsFile;                             // Lager en fil

int LedPin = A4;                          // LED lampe
const byte ButtonPin = 2;                 // Pinne til bryteren
Bounce button = Bounce();
bool LogFlag = false;

const int chipSelect = 8;                 // Pinne for the SD-kortmodulen

void buttonCheck()                        // Metode for å sjekke statusen til bryteren
{
  button.update();
  if(button.fell())
  {
    if (LogFlag)
    {
      LogFlag = 0;                        // Stopp å logge
    }
    else
    {
      LogFlag = 1;                        // Start å logge
    }
    digitalWrite (LedPin, LogFlag);       // LED lyser avhengig av bryteren
  }
}

void setup()
{
  Serial.begin(9600);                     // Starter seriell kommunikasjon, 9600 bps er baudraten
  gpsSerial.begin(9600);                  // Starter GPS-en
  
  button.attach(2,INPUT_PULLUP);          // Bryter aktivert med pull-up motstand
  pinMode(LedPin, OUTPUT);
          
  // Initialiserer SD-kortet
  Serial.print ("Initialiserer SD kort...");
  if (!SD.begin(chipSelect))
  {
    Serial.println("SD-kort initialiseringen feilet!");
    return;
  }
  Serial.println("Initialisering ferdig.");
  Serial.println("Lager tekstfil...");
}

void loop()
{
  buttonCheck();                                      // Ser om bryteren er på
  if(LogFlag == 1){                                   // Start å logge
    digitalWrite(LedPin, HIGH);                       // LED lyser
    gpsFile = SD.open("nmeatest.txt", FILE_WRITE);    // Oppretter en ny fil for skriving

  if (gpsFile){                                       // Sjekker om filen blir åpnet riktig
    gpsFile.close();
  }
    else
  {
    Serial.println("Feil med åpning av fil!");
    return;
  }
  while (gpsSerial.available() > 0)                   // Sjekker om data på GPS er tilgjengelig
  {
    if (gps.encode(gpsSerial.read()))
    {
      if (gps.location.isUpdated())
      {
        gpsFile = SD.open("nmeatest.txt", FILE_WRITE);
        
        if (gpsFile){                                 // Hvis filen kan åpnes ...
        gpsFile.print("$GPGGA,");                     // Skriver GGA setningen til filen
        gpsFile.print(gps.time.hour());
        gpsFile.print(gps.time.minute());
        gpsFile.print(gps.time.second());
        gpsFile.print(",");
        gpsFile.print(gps.location.rawLat().deg);
        gpsFile.print(gps.location.rawLat().billionths);
        gpsFile.print(gps.location.rawLat().negative ? ",S," : ",N,");
        gpsFile.print(",");
        gpsFile.print(gps.location.rawLng().deg);
        gpsFile.print(gps.location.rawLng().billionths);
        gpsFile.print(gps.location.rawLng().negative ? ",W," : ",E,");
        gpsFile.print(",1,");
        gpsFile.print(gps.satellites.value());
        gpsFile.print(",");
        gpsFile.print(gps.hdop.hdop());
        gpsFile.print(",");
        gpsFile.print(gps.altitude.meters());
        gpsFile.print(",M,");
        gpsFile.print(gps.altitude.isValid() ? "M," : ",,");
        gpsFile.print(",M,");
        gpsFile.println();

        gpsFile.print("$GPRMC,");                       // Skriver RMC setningen til filen
        gpsFile.print(gps.time.hour());
        gpsFile.print(gps.time.minute());
        gpsFile.print(gps.time.second());
        gpsFile.print(",A,");
        gpsFile.print(gps.location.rawLat().deg);
        gpsFile.print(gps.location.rawLat().billionths);
        gpsFile.print(gps.location.rawLat().negative ? ",S," : ",N,");
        gpsFile.print(",");
        gpsFile.print(gps.location.rawLng().deg);
        gpsFile.print(gps.location.rawLng().billionths);
        gpsFile.print(gps.location.rawLng().negative ? ",W," : ",E,");
        gpsFile.print(",");
        gpsFile.print(gps.speed.knots());
        gpsFile.print(",");
        gpsFile.print(gps.course.deg());
        gpsFile.print(",");
        gpsFile.print(gps.date.day());
        gpsFile.print(gps.date.month());
        gpsFile.print(gps.date.year());
        gpsFile.println();
          gpsFile.close();
          
        
        }

      }
      
    }

   }
  
  }
  }
