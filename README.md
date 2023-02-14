# Bacheloroppgave :love_letter: :woman_technologist: :whale: :ice_cube: :ship: :ocean: :snowflake:
## Tirsdag 14.02.2023 :cupid:
Agenda:
- Måle/regne ut forsterkningen i kretsen vår
- Teste ustyret med hydrofonen i vann

Oppsummering:
- Måler forsterkningen i kretsen vår 
- Av en eller annen grunn vil ikke lydopptakene lagre seg på SD-kortet nå, oppdatering: fikset problemet nå, tror det hadde noe med navngiving av filen
- Testet hydrofonen under vann med og uten støy (lånte noe som "tilsvarer" båtmotorlyd + slapp isbiter i vannet), dette fungerte bra, og vi hadde ut i fra lydfilen kontroll på hva som skjedde og når det skjedde
- Vært på "loddekurs" hos Endre nå, føler oss litt mer trygg på å kunne lodde senere og bygge kretskort
  - Fått tips om å bruke "kiCad" for planlegging av kretskort
- Kombinerer kretsene fra GPS-modulen sammen med opptakeren
  - GPS-modul: https://microcontrollerslab.com/gps-data-logger-arduino-micro-sd-card/?fbclid=IwAR20p_5p2YpBzsIYsGp3kvNG3Q30LWIA1SW_A1rjjbT4sZkNKwHLCIrWGKA
  - Opptaker: https://www.youtube.com/watch?v=BOriG-wluJA&t=4s&ab_channel=MicrocontrollersExplained

Til neste gang:
- Eira må snakke med roomie ang LaTex
- Teste GPS-modulen sammen med lydopptak - kombinere kode på Arduino
  - Når vi får til dette vil neste mål være å lage en plan for å bygge kretskortet

## Fredag 10.02.2023 :taco:
Agenda:
- Fortsette på oppkoblingen fra gårsdagen ✅
  - Teste litt nye muligheter/andre komponenter ✅
- Legge deler av forstudiet inn på bachelorrapporten i LaTex 

  
Oppsummering:
- Fått testet videre fra gårsdagen, tror vi har kommet fram til riktig utstyr nå
  - Opplever likevel mye støy når vi tar lengre opptak, ikke funnet ut av hvorfor enda
- Prøvd oss litt på LaTex, ikke kommet fram til om vi skal bruke det eller ikke. Denne vurderingen tar vi over helgen.

![image](https://user-images.githubusercontent.com/112081691/218105981-ba56cb59-dabb-4843-9f59-bb14da834b40.png)
.WAV fil av dagens beste opptak :)

Til neste gang:
- LaTex/ikke LaTex ? ? ?
- Måle/regne ut hvor stor forsterkning vi har per nå

## Torsdag 09.02.2023 :ocean:
Agenda:
- Teste det å koble sammen alt og få lagret det på en lydfil ✅
  - Prøver å få de analoge signalene over til WAV format ✅

Oppsummering:
- Testet en kode for "Arduino-based-digital-voice-recorder"
  - https://github.com/thisissihab/arduino-based-digital-voice-recorder 
  - Modifisert litt på oppkoblingsbrett + kode, da vi ikke har samme type 
 
 Hva vi har fått til i dag:
 - Koblet opp arduino med hydrofon
 - Koblet opp en knapp som starter/stopper opptak av hydrofonen
 - Opptaket blir automatisk videresendt til SD-kort
 - Får lydfilen over på spektorgram når vi overfører til laptopen
 
![image](https://user-images.githubusercontent.com/112081691/218046269-14ce11e6-1a93-49a0-a6b8-589533e9ecfb.png)
Spektogram av gårsdagens beste gjennomføring.
 
Alt fungerte slik det skulle den første gangen (over vann) , men da vi skulle teste videre fikk vi ingen lyd på lydfilene. Vi bestemte oss for å bytte ut alle komponentene da vi ikke så (med intern veileder) noe umiddelbar feil og alt så egentlig ut til å fungere som det skulle. Da vi byttet ut alle komponentene fikk vi lydsignaler inn på .WAV filen, men ser at vi må forsterke signalene i mye større grad. Vi lurer også på om vi kanskje har en feil på noen av motstandene, da "oppskriften" vi fulgte skrev en ting men henviste til noe annet.

Til neste gang:
- Fortsette med å teste på det vi testet i dag


## Tirsdag 07.02.2023 :dizzy_face:
Eira husket endelig å ta med sitt Arduino utstyr! :) 

Agenda:
- Prøve å koble opp hydrofonen til Arduino ✅

Oppsummering:
- Fikk til å koble opp hydrofonen til Arduino
  - Får per nå kun opp (analoge tall)verdier, og må neste gang se mer på converteren
- Fornøyd med dagens gjennomføring, tok flere forsøk med ulike teknikker 

![image](https://user-images.githubusercontent.com/112081691/217261331-9c4e5c0f-ba7b-4e3a-8ad5-7b0d5c90c084.png)

Her tester vi hydrofonen med ossioloscopet for å bekrefte  at tallene (bilde under) stemmer overens med lydbølgene

![image](https://user-images.githubusercontent.com/112081691/217261510-d0dcdef2-5ce2-41a9-8b36-6c5f71aa6024.png)


Til neste gang:
- Bli bedre kjent med converteren


## Fredag 03.02.2023 :envelope_with_arrow:
Agenda:
- Rette opp i tilbakemeldingene fra forstudiet R 0.1 ✅
- Levere forstudiet ✅
- Levere rettleiingsavtale ✅

Oppsummering:
- Fått rettet opp og levert forstudiet
- Fått samtlige underskrifter nødvendig for rettleiingsavtale, skannet det og levert inn. 
- Fått utstyr fra veileder
  - Tester ut utstyret, oppdatering : fikk til utstyret! :) Merket at GPS-en var veldig svak og vi må stå ute uten noen "forstyrrelser" (i form av trær, bygninger, o.l.)

![image](https://user-images.githubusercontent.com/112081691/216615987-39464de7-695a-4316-ab7b-24298b7ac7b7.png)
Test 1 : Her fikk vi ingenting opp, da satt vi inne på laben

![image](https://user-images.githubusercontent.com/112081691/216616049-b4c4d1c8-0e19-469b-9fea-36d872ef2b68.png)
Test 2 : Her fikk vi kun opp dato og (UTC)tid, men ingen lokasjon.

![image](https://user-images.githubusercontent.com/112081691/216616309-98fb8cae-898d-4b0b-af10-1b70bc5ae337.png)
Test 3 : Her fikk vi opp både koordinater, dato og (UTC)tid. Måtte forflytte oss ut.
 
 ![image](https://user-images.githubusercontent.com/112081691/216615858-3d9acf6b-73ff-446b-8b3d-0c93424204d4.png)

Resultater fra test 3 : Her fikk vi opp koordinater, samt dato og (UTC)tid.

Fra møtet: 
- beskytte lydkilden - forbedre signalet fordi det er svak ut fra hydrofonen  
- batteri vil være begrensningen 
- bør vise at minne ikke vil ha begrensning  
- NMEA 
- Avtalt møte for å teste hydrofonen "i feltet". 

Til neste gang:
- Starte med å koble opp hydrofonen til Arduino
- Bruke helgen til å laste ned Latex og gjøre litt selvstudie på Latex
- Bruke helgen til å sjekke ut linker for oppkobling av hydrofon
- Eira må ta med sine Arduino ting

## Onsdag 01.02.2023 :dress:
Agenda:
- Bli ferdig med forstudie ✅
- Sende forstudiet til veiledere ✅
- Gjøre klar spørsmål til neste møte ✅

Oppsummering:
- Skrevet ferdig forstudie
- Sendt forstudiet til veilederne
- Gjort klart spørsmål til neste møte

Til neste gang:
- Lære oss Latex

## Tirsdag 31.01.2023 :eyes:
Agenda:
- Skrive og jobbe på forstudie ✅
- Gjennomføre planlegging av tidsplan ✅

Oppsummering
- Gjort klar tidsplanen
- Skrevet en del på forstudie
  - Mangler noen punkt, samt omskriving
- Tilla har laget liste over komponenter vi trenger + pris for disse

Til neste gang:
- Fullføre forstudie
  - Mangler noen punkt, samt omskriving
  - Sende forstudie til veiledere
- Gjøre klar spørsmål til fredag?

## Torsdag 26.01.2023 🧠
Agenda: 
- Skrive og jobbe på forstudie ✅
- Research ✅

Oppsummering:
- Fikk skrevet en del på forstudiet
- Snakket med Frøysa og blitt litt klokere på div ting vi har lurt på 
  - Hva er fokuset vårt i oppgaven?
- Gjort mye research på komponenter
- Har kommet frem til en løsning

GPS modul: 
- https://randomnerdtutorials.com/guide-to-neo-6m-gps-module-with-arduino/

Til neste gang:
- Tidsplan (!!!)
- Skrive liste til komponenter vi trenger 
- Jobbe med forstudiet - skrive om

## Tirsdag 24.01.2023 :clock9:
Agenda:
- Møte hos NERSC 24.01.2023
  - Ta opp div spm vi har lagt frem
  - Foreslå nytt møte torsdag 02.02.2023
- Forbedre tidsplan :white_check_mark:
- Sette opp ting som skal gjøres :white_check_mark:
- Rammeverk på hvordan dokumenter skal navngis. Revidering bør kunne gjøres før det :white_check_mark:
- Skrive på forstudiet :white_check_mark:

Oppsummering:

Notater fra møte:
- GPS med arduino - sync med GPS
- Forsterker mellom arduino og hydrofon, lavstøy
- Sync av klokke - arduino sin klokke er ikke den beste
- Datalagring, power (?)
- Mulighet for å slå på; magnet?
- PAMguide
- Spesielt å ha med:
  - variabel sample-frekvens
  - sette sample-frekvens
  - strømforsyning (3,3V) - arduino, forsterker, hydrofon (5V)
  - Fordeler og ulemper med arduino
  - Måte å konfiguerere - knapp/bryter?

Hvordan skrive revisjonene:
- 0.X under arbeid
- 1.X levert 
- 1.1 korrigert eller under arbeid 
Husk at filen skal lagres med R revisjon

Til neste gang: 
- Skrive på forstudiet - nå som vi har fått mer informasjon

## Fredag 20.01.2023 :ear_of_rice:
Agenda :
- Konkretiserie / komme med forslag til problemstilling(er) :white_check_mark:
- Jobbe det vi kan med forstudiet :white_check_mark:
- Lage sharepoint :white_check_mark:
- Lage tidsplan :white_check_mark:
- Lage liste over alt som skal gjøres 
- Rammeverk på hvordan dokumenter skal navngis. Revidering bør kunne gjøres før det

Oppsummering : 

Plan for forstudiet:
Vi skirver på det som kan skrives på frem til møte tirsdag - aller mest på info om oppdragsgiver og litt på løsningforslag. 
Tidsplan, timelister, liste over alt som skal gjøres, research på mulige løsninger, sette opp et rammeverk på hvordan dokumenter skla navngis og revideres bør gjøres før det. 

På møte må vi få avklart en del ting som foreløpig er uklart: 
- Hva er ønskelig at problemstllingen skal være? 
- Hva er mulig for oss å gjøre, med tanke på kompetanse og tid. 
- Hvilke krav stiller Espen/Frøysa
  - Er det noe spesielt som Esoen vil vi skla ha med eller gjøre? 
 - Hvis arduino eksemplene fra linken er det som er ønskelig at vi skal gjøre. Vil dette være en for liten opppgave? Hva skal eventuelt gjøres etterpå? 
  - kretskort som det var snakk om har vi ikke kompetanse til 
 - Hvem skal ha ansvar for innkjøp av komponenter? 
 
Etter møte må vi skrive på forstudiet. Da kan vi skrive på problemstilling, krav, løsning vi har tenkt (link) osv. 
Forstudiet bør vi kanskje kunne klare å gjøre ferdig før torsdag, slik av vi kan avtale et møte den dagen (2) - hvis det passer, for å gå igjennom forstudiet vi har skrevet, slik Svein sa vi burde gjøre. 

- Laget sharepoint; https://hvl365.sharepoint.com/sites/BO23EB-17NansenHydrofon/SitePages/TrainingHome.aspx

Til neste gang :
- Møte hos NERSC 24.01.2023
  - Ta opp div spm vi har lagt frem
- Forbedre tidsplan
- Sette opp ting som skal gjøres
- Rammeverk på hvordan dokumenter skal navngis. Revidering bør kunne gjøres før det

## Torsdag 19.01.2023 :ok_woman:
Litt trøtte og forsinket i dag men det går bra. 

Agenda : 
- Teste ut arduino
- Høre med Frøysa ang. konkretisering av problemstilling
  - Skrive mer på forstudiet :white_check_mark:
- Gjøre research ang løsninger med arduino :white_check_mark:
  
Liste over ting vi trenger:
- 6.35 mm Jack (koblingsboksen)
- 3.55 mm Jack

Oppsummering :
- Research på arduino, oppkobling, hydrofoner
- Laget spilleliste + claimet plassen vår
- Skrevet litt på forstudiet (gjort om stikkord til hele setninger)
- Fikk ikke testet ut arduino da vi mangler en ledning, har likevel fått gjort mye research

Til neste gang :
- Konkretiserie / komme med forslag til problemstilling(er)
- Jobbe med forstudiet
- Snakke med Kjell Eivind Frøysa, diskutere linkene vi har funnet hittil - er vi på rett spor?

linker:
- https://www.instructables.com/Arduino-Frequency-Detection/
- https://www.instructables.com/Arduino-Audio-Input/
- http://www.whatimade.today/lets-make-some-signal-processing-with-an-arduino/
- https://docs.arduino.cc/tutorials/zero/simple-audio-frequency-meter#hardware-required
- https://forum.arduino.cc/t/how-to-hook-up-a-3-5mm-audio-jack-to-a-circuit-to-read-in-analog-input/617778/25?fbclid=IwAR2s8m6XihJlsp6Nbc5Vwe3mSRSOb4dS0IE9isNurclDKO9T65S5VbDtVkY
- https://hackaday.com/2022/02/19/diy-hydrophone-listens-in-on-the-deep-for-cheap/#more-523850
- https://github.com/IQTLabs/AISonobuoy/blob/main/Hydrophone/media/board_program.jpeg
- https://github.com/IQTLabs/AISonobuoy/tree/main/Hydrophone

## Tirsdag 17.01.2023 :woman_technologist:
Sett på linkene Espen har sendt oss;
https://github.com/IQTLabs/AISonobuoy/tree/main/Hydrophone

Agenda : 
- Begynne på forstudiet (arbeidskrav) :white_check_mark:
- Teste utstyret med
  - PC :white_check_mark:
  - Oscilloscop :white_check_mark:

Oppsummering: 
- Skrevet en del stikkord på forstudiet (arbeidskravet) 
- Har integrert oss på D423
- Har testet utstyr
  - På PC/Audacity : Ble litt kjent med spektogram, og testet med interne lydopptak fra egen PC
  - På oscilloscop : Mistenker at vi mangler en ledning, send mld til Espen ang dette. Oppdatering - fikk raskt svar og fikk det til å fungere! :) 

Til neste gang:
- Skrive forstudie med egne ord (lekse til neste gang?)
- Teste utstyr på oscilloscop
- Ta med Arduino for å utforske litt

## Torsdag 12.01.2023 :face_in_clouds:
Første dag vi gadd å møte på skolen etter juleferien.

Agenda : 
- Få litt oversikt og orden 

Oppsummering:
- Laget timeliste :white_check_mark:
- Planlagt kalender :white_check_mark:
- Ordnet teams :white_check_mark:
- Laget Github :white_check_mark:
- Romsøknad (D422) :white_check_mark:

Til neste gang: 
- Bruke informasjonen fra forelesning 13.01.2023
- Teste utstyret med 
  - PC
  - Oscilloscop

## Tirsdag 10.01.2023 :polar_bear:
Startet dagen med driftstans med bybanen, og kom derfor for sent i møtet - dette kan ikke skje neste gang!!!! 

Agenda for møtet: 
- Runde rundt bordet (kort presentasjon av personell/bakgrunn) 
- Intensjon med denne oppgåva (presentasjon v/ Espen) 
- Demonstrere eksisterande utstyr og data frå desse 
- Diskutere opplegg for semesteret og ambisjonsnivået for oppgåva 
- Diverse 

Oppsummering:
- Deadline forprosjektrapport: 2023-02-06. 
- Midtvegsevaluering rundt påske 
- Innlevering av oppgåve i slutten av mai 
- Oppgåva vil få éin bokstavkarakter 
- Presentasjon på HVL-Expo, ca 10-15 juni 
- Oppgåva er på 20 studiepoeng 
- Studentar fører timelister og dagbok. Dette går inn i Appendix i oppgåva. 

Til neste gang:
- Sette opp Teams-område og invitere inn (Espen) :white_check_mark:
- Planlegge semesteret :white_check_mark:
- Adminarbeid :white_check_mark:


