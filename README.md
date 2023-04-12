# Bacheloroppgave :love_letter: :woman_technologist: :whale: :ice_cube: :ship: :ocean: :snowflake:
## Onsdag 12.04.2023 :woman_mechanic:
Long time no see...

Agenda:
- Møte hos NERSC for å prøve ut klær og sko ✅ 
- Skrive på sluttrapport
- Lodde på kretskortene ✅
- Få GPSen på GGA format (NMEA)

Oppsummering:
- Vært hos NERSC og prøvd klær og sko, alt passet som det skulle. Klargjør for møtet om en uke.
- Vi har fått kretskortene våres :D
  - Merket to feil fram til nå, må høre med Endre om det er mulig å bruke de likevel. Oppdatering : det var null problem og de kan fortsatt brukes.
  - Har loddet det vi 100% vet skal være på kretskortene. Må regne på hva de andre komponentene skal ligge på.

Til neste gang:
- Få GPSen på GGA format (NMEA)
- Skrive på sluttrapport
- Gå gjennom loddingen med Endre

## Fredag 31.03.2023 	:hatching_chick:
Agenda:
- Skrive på sluttrapport
- Få klarering av Endre på kretskortene

Oppsummering:
- Tror jeg er ferdig med kretskortene, og venter på klarering - forventer at noe er feil:)
- Fått sendt av gårde designet til kretskortene, venter på å få de IRL.

Til neste gang:

## Torsdag 30.03.2023
Agenda:
- Skrive på sluttrapporten
- Ferdigstille kretskort ✅
- Lage kretskort med OPAMP ✅

Oppsummering:
- Har laget forsterkningskrets-kretskort med OpAmp
- Har ferdigstilt alle 3 kretskortene, og mener at de er klare for å sendes.
  - Må få klarering fra Endre

Til neste gang:
- Få klarering av Endre

## Tirsdag 28.03.2023 :fire:
Agenda:
- Midtveispresentasjon ✅
- Teste om vi får til kode med kommunikasjon mellom arduinoene
- Få GPS-koordinatene på NMEA form ✅
- Høre med Endre om det vi har oppdatert på kretskortene holder✅
- Skrive mer på sluttrapporten✅

Oppsummering:
- Har hatt midtveispresentasjon, hvor vi fikk en del (uforutsette) spørsmål som vi har skrevet ned og ta i betraktning
- Fått GPS-koordinatene på NMEA form
  - Spurt ekstern veileder om det er nødvendig med alle type stringer: GGA og RMC. 

Spørsmål fra midtveispresentasjonen: 
-	Hva er den vertikale oppløsningen til arduinoen, og er denne bra nok?
10 bit, vet ikke om den er bra nok, kan eventuelt prøve med en 12 bit, ingen av veilederne har kommentert at det ikke er nok. Skal være en lavkostnadsløsning så arduino er jo rimelig å bruke. 

-	Kunne man gjort noe med kretsen for å få andre forsterkninger ved for eksempel et lavt signal? 
Vi svarte: annen verdi på kondensatorene. Fra veileder: kunne hatt en bryter som førte til en annen forsterkning/forsterkningskrets. 

-	Hvordan setter man samplingsraten? Er den jevn? 


Til neste gang:
- OPAMP-krets kretskort
- Ordne pcb filer 
- Få GGA og RMC ut av NMEA strengen 

## Søndag 26.03.2023 🥶
Agenda:
- Teste utstyret ute ✅

Oppsummering:
- Fikk testet utstyret ute og av en eller annen grunn fungerer typ ingenting nå. Setter oss derfor inn for å undersøke litt nærmere.

Til neste gang:
- Gjennomgå midtveispresentasjon

## Fredag 24.03.2023 :skull:
Agenda:
- Bli ordentlig ferdig med skjematiske tegningene til kretsene og legge disse inn i presentasjonene ✅
- Gå ordentlig gjennom midtveispresentasjonen - mangler vi noe? ✅
- Undersøke om vi kan få begge systemet til å starte med kun en knapp ✅
- Skrive mer på sluttrapporten
- Få GPS-koordinatene på NMEA format
- Høre med Endre om det vi har oppdatert på kretskortene holder?

Oppsummering:
- Gjort ferdig de skjematiske tegningene (tror de skal være rett nå) (er litt usikker på en ting, men får ikke endret på det, kan vise på søndag), og lagt inn i midtveispresentasjonen
- Har gått gjennom midtveispresentasjonen, både selve presentasjonen og også manuset. Synes alt ser greit ut per nå - trenger kun å legge inn et bilde av kretsdiagrammet til forsterkningskretsen. Vet ikke hvilket jeg skal legge inn, og ønsker tilbakemelding fra veileder først. Videre må vi bare oppdatere timelistene og framdriften og få dette inn i presentasjonen - det kan vi gjøre på søndag eller mandag.
- Virker som det er mulig å koble de to systemene sammen, ved å få at den ene arduinoen er en slave og den andre master. Krever en del ommbygging av kode.
  - https://forum.arduino.cc/t/best-way-to-send-signal-to-another-arduino/442668/11
  - https://forum.arduino.cc/t/sending-a-pulse/59964

Til neste gang:
- Teste utstyret på søndag
- Gå gjennom midtveispresentasjonen
  - Legge til alt som mangler (oppdaterte bilder av timelisten osv.)
- Teste om vi får til kode med kommunikasjon mellom arduinoene
- Få GPS-koordinatene på NMEA form
- Høre med Endre om det vi har oppdatert på kretskortene holder?
- Skrive mer på sluttrapporten

## Torsdag 23.03.2023 🍔
Agenda:
- Rette opp alt i midtveispresentasjonen
- Undersøke om vi kan få begge systemet til å starte med kun en knapp
- Skrive mer på sluttrapporten
- Få GPS-koordinatene på NMEA format
- Fortsette på kretskort (PCB) ✅
  - Autonom opptaker ✅
  - GPS ✅
- Teste på forsterkningskretsene ✅
- Blokkdiagram ✅

Oppsummering:
- Ferdigstilt kretskort (PCB) til autonom opptaker
- Ferdigstilt kretskort (PCB) til GPSen
- Prøver å få tak i Endre slik at han kan verifisere kretskortene våre
  - Kretskortene ser bra ut i følge Endre, men vi avventer litt før vi bestiller 
  - Snakket med Endre og fått en liste over ting over ting vi kan bedre;
    - Kondensator 5 V - GND
    - Legge inn motstander på A0 + en ledning på A1 som utgang ✅
    - Vin - GND - Skruterminal
    - Koble sammen Vin og GND på begge kretskortene
    - PPS puls går mellom kortene
    - IDC kontakt på pin : 2, 3, 5, 9, GND ✅
      - ✅ GPS
      - ✅ Autonom opptaker
    - Input for EXT T9iu (?) skruterminal
- Startet på blokkdiagram, blitt ferdig og lagt inn i presentasjonen

Til neste gang: 
- Bli ordentlig ferdig med skjematiske tegningene til kretsene og legge disse inn i presentasjonene
- Gå ordentlig gjennom midtveispresentasjonen - mangler vi noe?
- Undersøke om vi kan få begge systemet til å starte med kun en knapp
- Skrive mer på sluttrapporten
- Få GPS-koordinatene på NMEA format
- Høre med Endre om det vi har oppdatert på kretskortene holder?

## Onsdag 22.03.2023 🦾
Agenda:
- Ha midtveispresentasjon for veiledere 
  - Rette opp i midtveispresentasjonen ✅
- Få begge systemene til å starte med kun en knapp
- Skrive mer på sluttrapporten 
- Jobbe med automatisk bytte av filnavn ✅
- Få GPS-koordinatene på NMEA format

Oppsummering:
- Hatt midtveispresentasjon for veiledere
  - Fikk tilbakemelding fra veilederne på ting vi kan utbedre, skal få til det ila dagen

          - Si hva en Hit hydrofon er,
          - hvorfor gikk NERSC fra disse? 
              - Problematisk 
              - tok tid 
              - lagret en sentrale plass 
              - fikk ikke like god oppløsning vertikalt med drag

          - ha med NMEA i kravspesifikasjon 

          - Ha med det som ikke funket også 
              - Først alt på en arduino - funket ikke 
              - nå har vi to arduinoer som kan være smart hvis man vil dele opp systemet og f.eks kun måle GPS - ved isdrift, ha med i en båt, kan bygges videre på. 
          - blokkdiagram 
              - ting kan byttes ut / er ikke optimale 
          - ting som ikke er bra bør også tas med 
          - Kan nano brukes til GPS?
          - Raspberry pi? 
              - problem med software
              - er en datamaskin i praksis 
              - ikke godt egnet til automne oppgaver
              - reduserer strømforbruket 

          - Sjekket etter DC bias på oscilgioskopet 
          - kondensator med (i hydrofonsignalet) 

          - Vise hva ting er i et spektrogram ved tester: 
              - tiden er bortover, 
              - frekvensen er oppover
              - amplitude
              - målt tid i grått felt 
              - Dc offset - vet ikke hvorfor det kommer 
              - forklarer lydene 



- Fått hjelp til forsterkningskretsen av div forelesere på bygget, samt veiledere
  - Vurderer om vi skal gå litt vekk - kanskje PCB fikser alle problemene? Må begynne å bevege oss litt vekk fra denne og se litt fremover
- Jobbet videre på forsterkningskretsen
  - Gjør testing med ulike komponenter og samplingfrekvenser
- Jobbet med automatisk bytte av filnavn
  - Fungerer fram til man tar SD-kortet ut igjen, må se videre på det senere

Til neste gang:
- Rette opp alt i midtveispresentasjonen
- Undersøke om vi kan få begge systemet til å starte med kun en knapp
- Skrive mer på sluttrapporten
- Få GPS-koordinatene på NMEA format

## Tirsdag 21.03.2023 :swan:
Agenda:
- Teste utstyret ved Solheimsvatnet ✅
- Øve på midtveispresentasjon (fremføring for veiledere i morgen 22.03.2023) ✅ 
- Bli ferdig med midtveispresentasjon ✅
- Få begge systemene til å starte med kun en knapp
- Skrive mer på sluttrapporten 

Oppsummering:
- Testet utstyret ved Solheimsvatnet
- Blitt ferdig med power-pointen til midtveispresentasjonen
- Sett litt videre på kretskort
  - Må nok ha hjelp fra Endre
  - Finner bl.a. ikke schematisk for knapp og SD-kort.
- 4V til 6V med 220 uF

Til neste gang:
- Presentere midtveispresentasjon for veiledere
- Jobbe med automatisk bytte av filnavn
- Få begge systemene til å starte med kun en knapp
- Skrive mer på sluttrapporten

## Fredag 17.03.2023 	:nauseated_face:
Agenda:
- Begynne å se på kretskort ✅
- Bli ferdig med forsterkningskretsen ✅
- Kretsdiagram til midtveispresentasjon ✅
- Fortsette å skrive manus til midtveispresentasjon ✅
- Bli ferdig med midtveispresentasjon
- Få begge systemene til å starte med kun en knapp
- Skrive mer på sluttrapporten 

Oppsummering:
- (Tror) vi har blitt ferdig med forsterkningskretsen, vil ha verifisering fra veileder 
  - Oppdatering : fått verifisert av veileder at dette er greit
- Laget kretsdiagram til midtveispresentasjonen
- Begynt å se på kretskort
  - Prøvd å lage digital versjon
- Skrevet videre på manus til midtveispresentasjon
- Prøvd å få til at en knapp styrer hele oppsettet
  - Usikker på om dette i det hele tatt er mulig ... :eyes:

Til neste gang:
- Rydde opp i kodene vi har skrevet til nå

## Torsdag 16.03.2023 :poop:
Agenda:
- Fortsette med midtveispresentasjon ✅
- Begynne å se litt på kretskort
- Kretsdiagram til midtveispresentsjon

Oppsummering:
- Skrevet førsteutkast manus til midtveispresentasjon
- Jobbet videre med forsterkningskretsen

Til neste gang:
- Spørre Endre om hjelp :) 
- Fortsette med midtveispresentasjon
- Kretsdiagram til midtveispresentasjon

## Onsdag 15.03.2023 :flushed:
Agenda:
- Møte med veiledere ✅
- Teste GPSen ✅
- Begynne å se litt på kretskort
- Kretsdiagram til midtveispresentasjon
- Finne ut om forsterkning ✅
- Forsette med midtveispresentasjon

Oppsummering:
- Avtalt nytt møte 22.03.2023 - midtveispresentasjon framvisning
- Feilsøkt på GPS, fungerer fortsatt ikke
- Laget kretsdiagram til forsterkningen ved opptakeren
- Jobbet mer på forsterkningskretsen til opptakeren

Til neste gang: 
- Se på kretskort
- Kretsdiagram til midtveispresentasjon
- Fortsette med midtveispresentasjon

## Tirsdag 14.03.2023 🥧
International Pi-day (3.14) :D

Agenda: 
- Lage midtveispresentasjon
- Teste utstyret ute i vann med powerbank ✅
- Klargjøre for møtet i morgen ✅

Oppsummering: 
- Testet utstyret i vann
  - GPS ville ikke fungere - prøver å finne ut. Mistenker det dårlige været. Kommer ikke fram til noe annet per i dag
  - Matet to svaner for å få litt lyder i vannet, og det fikk vi

![image](https://user-images.githubusercontent.com/112081691/224963978-1d261d77-6801-42a2-8090-bbe055f2590f.png)
![image](https://user-images.githubusercontent.com/112081691/224964646-278bee7a-80b8-4182-911f-4cd846440213.png)


Til neste gang:
- Møte på HVL
- Fortsette på midtveispresentasjon

## Torsdag 09.03.2023 :airplane:
Agenda: 
- Fortsette å skrive inn i LaTex ✅
- Teste alt utstyret sammen ute (for å få GPS-koordinater) 
- Forsette med illustrasjoner ✅

Oppsummering: 
- Skrevet kilder korrekt (tror vi) inn i LaTex nå (får ingen error :) )
- Skrevet videre i LaTex
- Planlagt testing på tirsdag 14.03.2023

Til neste gang: 
- Tilla tar med powerbank


## Onsdag 08.03.2023 :elf_woman:
Kvinnedagen! Heia alle damer :heart: #GIRLPOWER

Agenda:
- Teste utstyret med powerbank - fungerer det? ✅
- GPSen fungerte ikke forrige gang, skal koble opp hele greia på nytt og teste en gang til. ✅
- Prøve å finne ut hvordan vi kan starte GPSen ved å trykke på en knapp ✅
- Få LED-lys til å fungere parallelt med knappen ✅

Oppsummering:
- Lastet opp denne ukens versjon av kodene vi bruker 
- Hurra! GPSen fungerte som den skulle nå, ukjent hvorfor den ikke fungerte forrige gang. 
- Yay! Vi fikk til at GPSen starte å logge til SD-kortet når vi trykker på knappen. 
- Wohoo! Vi fikk LED-lyset til å fungere parallelt med knappen.
- Koblet GPSen til en powerbank og det fungerte som det skulle. 
- Koblet hydrofonen til en powerbank og det fungerte som det skulle
- Koblet begge deler opp til powerbank og det fungerte som det skulle! #SLAY

Til neste gang:
- Teste utstyret ute (for å få ordentlig GPS signal) for å se om det funker heelt ordentlig (hvis det ikke snør)
- Fortsette med skriving i LaTex
- Fortsette med illustreringer
- Eira ta med powerbank

## Fredag 03.03.2023 😔
Agenda:
- Hente SD-kort modul hos NERSC ✅
- Prøve å lage ny kode + teste den
- Sende mail til veileder og emneansvarlig om at vi ikke har mulighet til midtveispresentasjon - er det mulighet for å ha det dagen før? ✅

Oppsummering:
- Fikk hentet SD-kort modul hos NERSC
- Sett litt på måter å koble arduinoen til strøm; https://support.arduino.cc/hc/en-us/articles/360018922259-What-power-supply-can-I-use-with-my-Arduino-board-
  - Power bank?
- Forsket litt på klokken vi fikk av ekstern veileder i dag; https://www.youtube.com/watch?v=kNZlsvLEtEw&ab_channel=miliohm
- Så vidt startet på midtveispresentasjonen 
  - Har også sendt mail til emneansvarlig om at datoen ikke passer oss, venter på svar
- Prøvd å legge til knapp og LED på GPSen
  - Av ukjente grunner har ikke GPSen fungert i dag
- Delt koden og set-up et i 2 deler

Til neste gang: 
- Lade hver vår powerbank
- Finne ut hvorfor GPSen ikke fungerer
- Fortsette med kode og testing

## Tirsdag 28.02.2023 :writing_hand:
Agenda:
- Skrive over resultater vi har så langt på LaTex
  - Skrive over forstudie
- Starte på en kode for 2 SD-kort moduler
  - Kan ikke faktisk teste enda da vi ikke har fått utstyret enda

Oppsummering:
- Skrevet over alt vi har i LaTex

Til neste gang:
- Unødvendig å møte opp på skolen før vi har fått tak i den nye SD-kort modulen, så venter til det

## Fredag 24.02.2023 :fishing_pole_and_fish:
Agenda: 
- Møte med NERSC ✅
- Bruke to forskjellige arduinoer for å kombinere kodene ✅
  - Har prøvd dette tidligere en gang, men vil prøve på nytt og utforske litt
            
Oppsummering:
- Vært på møte med NERSC
  - Testet ulike hydrofoner og sett på dataen vi fikk
  - Gått gjennom hvor vi ligger ann med ekstern veileder
  - Må bli flinkere på Metadata

![image](https://user-images.githubusercontent.com/112081691/221190228-dfa0272f-75e5-4d15-9bad-54e2f26990fd.png)
![image](https://user-images.githubusercontent.com/112081691/221190248-dc858640-af10-4a0f-8f1d-669cbcb3c173.png)


- Navngiving av .WAV-filer
  - Funnet ut at vår opptaker nekter å lagre filer hvis filnavnet inneholder mer enn fire tall... Hvorfor vet vi ikke
  - Hadde vært ideelt å bruke DTG-format da dette er en oversiktelig måte å beskrive ulike tester på.
  - Bruker derfor "FEB24XX" hvor XX = nummer av forsøket
- To forskjellige arduinoer for å kombinere kode
  - Vi benyttet oss av to forskjellige arduinoen, samt to skrivebord på min laptop og fikk til at to programmer kjørte hver for seg. Nå gjenstår det å se om all informasjon lagres på SD-kortet
  - Sist gang vi prøvde det ville ikke to forskjellige COM-porter stå åpne samtidig. Det fikk vi til nå :)
  - Innser at vi kanskje må ha 2 SD-kort moduler? Mulig at vi da bare kan bruke en arduino og få til dette.
- To SD kort-moduler
  - Tror det er mest fornuftig (i samsvar med ekstern veileder) å ha to SD kort-moduler, slik at all informasjon kan lagres. Ekstern veileder bestiller dette ASAP. Dette har blitt skrevet opp i budsjettet

Til neste gang:
- Eira må snakke med roomie om LaTex (!!!!!)
- Skrive ned begrensninger med arduino i rapporten
- Begynne å skrive om kretsen, snakke om kretskort - legge opp en modell for hvordan den skal se ut
- Begynne å skrive, generelt      

## Tirsdag 21.02.2023 :bust_in_silhouette:
Forsetter på kombinering av kode, kan imidlertid ikke teste med SD-kort fordi Tilla ikke er her :( 

Agenda:
- Fortsette på kombinering av kode

Oppsummering:
- Vurdere om vi skal ha med GSM også?
  - Sender radiobølger i UHF (ultra high frequency) båndet
  - Radio til båten?
 - WeMOS reads GPS, notices a change in location (mind: set a minimum change in location for it to be "movement" which is greater than the normal variance in readings), sends signal to audio recorder to start recording.
  - https://forum.arduino.cc/t/audio-recording-with-wemos-d1/650801/9   
- https://www.generationrobots.com/media/3G-GPRS-GPS-Arduino-Shield-With-Audio-Video-Kit.pdf

Til neste gang:
- Starte å skrive i LaTex

## Torsdag 16.02.2023 :skier:
Vinterferie :snowflake:

Agenda:
- Fortsette på kombinering av kode ✅

Oppsummering:
- Sliter med å få koden til å fungere sammen
  - Bibliotekene fra de andre kodene intefererer med hverandre, og vi holder på med å løse dette.
  - Resultat : tror bibliotekene kun inteferer i serial monitor, og ikke på SD-kortet, så vi fortsetter med å bruke disse bibliotekene som vi har brukt tidligere

Til neste gang:
- Fortsettelse av kombinering av kode

## Onsdag 15.02.2023 🕔
Agenda:
- Kombinere kode fra GPS-koden og opptaker-koden ✅
- Lage illustrasjon av arduinobrettet vårt ✅
- Teste om koden fungerer med utstyret ✅
- Få GPS-koordinatene på NMEA-struktur ; https://www.gpsworld.com/what-exactly-is-gps-nmea-data/

Oppsummering:
- Har kombinert kodene, lastet opp her på Github (den versjonen fungerer ikke, men vi holder på med en ny en).
- Testing av GPS- og opptak-koden hver for seg (med utstyr), støtt på litt problemer ila dagen men har nå fikset dette
  - Testet GPS ute (igjen)
- Besluttet å utsette å få GPS-koordinatene på NMEA-struktur da dette ikke er førsteprioritet - først og fremst må vi få kodene til å fungere sammen, formatet kan vi bare endre senere
- Opplever litt feil med komponenter
  
Til neste gang:
- Finne en lettere måte å skrive NMEA på
- Forsette på kombinering av kode


## Tirsdag 14.02.2023 :cupid:
Valentines 💘 🧁 spiste cookies i dag

Agenda:
- Måle/regne ut forsterkningen i kretsen vår ✅
- Teste ustyret med hydrofonen i vann ✅

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


