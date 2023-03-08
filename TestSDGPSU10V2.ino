#include <Bounce2.h>
#include "SD.h"
#include <SPI.h>
#include <TinyGPS++.h>
#include <SoftwareSerial.h>

File myFile;
int RXPin = 7;
int TXPin = 6;

int LedPin = A4;
const byte ButtonPin = 4;
Bounce button = Bounce();
bool LogFlag = false;

TinyGPSPlus gps;
SoftwareSerial SerialGPS(RXPin, TXPin);

String Latitude, Longitude, Altitude, day, month, year, hour, minute, second, Date, Time, Data;

void buttonCheck()
{
  button.update();
  if (button.fell())
  {
    if(LogFlag)
    {
      LogFlag = 0;      // Stop logging
    }
    else
    {
      LogFlag = 1;      // Start logging
    }
    digitalWrite(LedPin, LogFlag);
  }
}

void setup() {
  Serial.begin(9600);
    while (!Serial) {
    ; 
  }

  button.attach(4,INPUT_PULLUP);
  pinMode(LedPin,OUTPUT);
  
Serial.print("Initializing SD card...");


      if (!SD.begin(8)) {
    Serial.println("initialization failed!");
    while (1);
  }
  Serial.println("initialization done.");
  Serial.println("Creating GPSdata.txt...");

   SerialGPS.begin(9600);
  } 


void loop() {

  buttonCheck();
  if(LogFlag == 1)
  {
    digitalWrite(LedPin, HIGH);
    myFile = SD.open("GPSdata.txt", FILE_WRITE);
  if (myFile) {
    myFile.println( "Latitude, Longitude, Altitude, Date and Time \r\n");
    myFile.close();
  }
  else {
    Serial.println("error opening GPSdata.txt");
  }
    while (SerialGPS.available() > 0)
    if (gps.encode(SerialGPS.read()))
      obtain_data();
  if (millis() > 5000 && gps.charsProcessed() < 10)
  {
    Serial.println("GPS NOT DETECTED!");
    while(true);
  }
  }

}


void obtain_data()
{
  if (gps.location.isValid())
  {
    Latitude = gps.location.lat();
    Longitude = gps.location.lng();
    Altitude = gps.altitude.meters();
  }
  else
  {
    Serial.println("Location is not available");
  }
  
  if (gps.date.isValid())
  {
    month = gps.date.month();
    day = gps.date.day();
    year = gps.date.year();
    Date = day + "-" + month + "-" + year;
     Serial.println(Date);
  }
  else
  {
    Serial.print("Date Not Available");
  }
 
  Serial.print("Time: ");
  if (gps.time.isValid())
  {
    if (gps.time.hour() < 10) ;
    hour = gps.time.hour();
    if (gps.time.minute() < 10);
    minute = gps.time.minute();
    if (gps.time.second() < 10) ;
    second = gps.time.second();
    Time = hour + ":" + minute + ":" + second;
  Serial.println(Time);
  }
  else
  {
    Serial.print("Time Not Available");
  }
  
  Data = Latitude + "," + Longitude + "," + Altitude + "," + Date + "," + Time;
  Serial.print("Save data: ");
  Serial.println(Data);
  myFile = SD.open("GPSdata.txt", FILE_WRITE);

  if (myFile) {
    Serial.print("GPS logging to GPSdata.txt...");
    myFile.println(Data);
    myFile.close();
    Serial.println("done.");
  } else {
    Serial.println("error opening GPSdata.txt");
  } 
 Serial.println();
 delay(10000);
}
