# Physical Computing Hausaufgabe
Hausaufgabe im Kurs physical Computing SoSE 2021

Repository zur Hausaufgabe im Kurs Physical Computing.

#### Tom Schmitt | Sommersemester 21 | Intermedia Design

# About
Für die Hausaufgabe sollten wir mit Hilfe eines Arduino Uno Mikrocontrollers einen LED-Steifen über ein Potentiometer steuern. 
Die Geschwindigkeit des Farbwechsels wird durch das Potentiometer gesteuert. 

![IMG_4365](https://user-images.githubusercontent.com/35604723/127348971-34a60cd8-b2fc-4e2e-8016-73584521abb8.png)

https://user-images.githubusercontent.com/35604723/127349292-797e4275-cc7d-4044-897d-b8cd97fa7ab4.mp4




# Schritt 1 

## Komponenten

### Folgende Komponenten wurden benötigt:

* 1x Arduino Uno
* 1x Breadboard
* 1x WPotentiometer
* 1x LED-streifen
* 8x Verbindungskabel

## Software 

### Folgende Libraries und Software wurden benutzt:

* PlattformIO
* Arduino-Library
* FastLED-Library

# Schritt 2

## Schaltplan

<img width="1111" alt="Bildschirmfoto 2021-07-28 um 13 16 12" src="https://user-images.githubusercontent.com/35604723/127313702-03dd65b4-8a03-4d45-aa8a-662a46162a3a.png">

![IMG_4351](https://user-images.githubusercontent.com/35604723/127312405-fbd8f171-18bf-49c1-80e1-cdf45430a5b0.png)

## Code

### download code 

[Download](thepixelence/Phsyical_computing_hausaufgabe/archive/refs/heads/main.zip)

Was zu beachten ist:

* Alle Dateien im Repository müssen Lokal gespeichert sein. Die Dateistruktur darf außerdem nicht verändert werden.
* Um den Code zu bearbeiten muss ein Editor wie z.B. Visual Studio Code verwendet werden. ( https://code.visualstudio.com/ )
* Um Code auf das Arduino hochzuladen, wird ein Plugin namens PlattformIO benötigt. Dieses kann über Visual Studio Code Installiert werden.
* Um Code zu verändern, öffnen sie die main.cpp Datei im SRC ordner. 
* Die anderen Dateien sollten wenn möglich unverändert bleiben.


First steps: 

* 1. PlattformIO in Visual Studio Code installieren
* 2. Neues Projekt starten und Microcontroller auswählen (hier Arduino) 
* 3. FastLED Library installieren
* 4. Daten aus dem download ZIP in die main.cpp Datei kopieren
* 5. Dateien auf Arduino laden 
