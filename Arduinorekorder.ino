/*

Denne filen tar opptak av lyd som blir lagret i en Wav fil på et SD-kort. 
Opptaket bruker et inngangssignal som er koblet til en av det analoge input pinnene. 
Opptaket starter ved å trekke en bryter og avsluttes på samme måte. Under opptaket vil en LED lampe lyse. 
LED lampen samt seriell overvåker kan gi informasjon om SD-kortet. Dersom LED lampen lyser med en gang når 
strømforsyningen er koblet til, er det ikke kontakt med SD-kortet. Sjekk da om SD-kort modulen er satt i rikitg
eller om SD-kortet mangler. Hvis LED-lampen blinker med en gang strømforsyning er koblet til betyr dette at bryteren ikke er kobelt til.

Krav for opplastning/kjøring av programmet: 
SD-kort
SD-kort modul
Lydinngangsenhet - i vårt tilfelle en hydrofon (mikrofon)
Arduino Uno
 

Steg for å kunne kjøre programmet: 
1. Last ned biblioteker gitt ved: 
    https://github.com/TMRh20/TMRpcm (må dobbeltsjekke at det er den rette linken) 
    https://www.arduino.cc/reference/en/libraries/sd/

2. Åpne pcmConfig.h i en teskt editor (?) (eller var det åpne rett fra nedlastinger?)
  2.1: Ved bruk av en Ardunio Uno eller ikke-Mega brett: #define buffSize 128
  2.2: Fjern kommentar ved #define ENABLE_RECORDING og #define BLOCK_COUNT 10000UL

For mer informasjon om bruken av biblioteket: https://github.com/TMRh20/TMRpcm/wiki/Advanced-Features#wiki-recording-audio

Bemerkninger: 
Ytelsen er avhengig av SD kortets skrivefart og minne som er brukt. 
Bruken av batteri eller filtrert strømforsyning til Arduinoen vil redusere støy. 
*/

#include <SD.h>                                                                     //Bibliotek for SD-kort 
#include <SPI.h>            
#include <TMRpcm.h>                                                                 //Bibliotek for audio-opptak

TMRpcm audio;   //Lager et objekt som blir tatt i bruk i denne koden

// Definerer variabler 
int count = 0;
int ss1 = 1;
int ss2 = 1;
int ss3 = 1;
bool started = false;
bool stopped = false;
bool playy = false;
bool paused = false;
int led = A4;        

void setup() {
  //Definerer utganger 
  pinMode(led,OUTPUT);                                                              
  
  Serial.begin(9600);                                                               //Starter seriell kommunikasjon, 9600 bps er baudraten. 
  
  pinMode(2, INPUT_PULLUP);                                                         //Bryter 

  //Starter kommunkasjon med SD-kortet og gir ut statusinformasjon
  if (!SD.begin(8)) {                     
    Serial.println("SD Not Found"); 
    digitalWrite(led, HIGH);
    delay(2000);
    digitalWrite(led, LOW);
    return;
  } else{
    Serial.println("SD OK"); 
  }
}

unsigned long pv1 = 0;
unsigned long pv2 = 0;
unsigned long pv3 = 0;


void loop() {
  
  if(digitalRead(2) == 1){                                                          //Dersom bryteren er tatt opp og ned 
    if(millis()-pv1 > 200){
      pv1 = millis();
      ss1++;
      started = true;
      }
    }

    if(ss1%2 == 0 && started){
      Serial.println("Recording in Progress");                                      //Starter opptaket 
      started = false; 
      stopped = true;
      digitalWrite(led, HIGH);                                                     //Lampen lyser under opptaket
      audio.startRecording("solh5.wav",32000,A0);                                  //("filnavn.wav", samplefrekvensen, analog utgangspin)
      delay(1000);
      
      }
    else if(ss1%2 != 0 && stopped){
      Serial.println("Recording Stopped");                                         //Stopper opptaket
      digitalWrite(led, 0);                                                        //Lampen slutter å lyse
      audio.stopRecording("solh5.wav");                                            //Opptaket blir lagret under ("filnavn.wav)
      started = true; 
      stopped = false;
      delay(1000);
      }
}
