#include <Arduino.h>      //Arduino Libary
#include "FastLED.h"      //FastLED Libary


/* Setup-Befehle */

#define NUM_LEDS 4        //Anzahl LEDs
#define DATA_PIN 3        //Input Pin für LED

#define REGLER_PIN A1     //Input Pin des Potentiometer

CRGB leds[NUM_LEDS];     
const int huescalar = (255 / NUM_LEDS);   //255 Anzahl der Farben im HUE Farbspektrum

float offset = 0;                   //Versatz des Farbmusters
float offsetIncrement = 0.0001;     

void setup() {

  pinMode(REGLER_PIN, INPUT);

  FastLED.addLeds<WS2812, DATA_PIN, GRB>(leds, NUM_LEDS);

}

void loop() {

  int speed = analogRead(REGLER_PIN);
  float offsetSpeed = float(speed) / 102300;

  if(offset >= 1) {
    
    offset = 0;
  
  } else {

    offset += offsetSpeed;

  }

   int offsetColor = offset*255;

  for (int i = 0; i < NUM_LEDS; i++)

  {

    int color = i * huescalar;
    leds[i] = CHSV(color + offsetColor,255,255);

}
    leds[0] = CRGB(255,0,0);
    leds[1] = CRGB(0,255,0);
    leds[2] = CRGB(0,255,0);
    leds[3] = CRGB(0,0,255);
    FastLED.show();

}
