#include <FastLED.h>
#define AD5 A5
#define LED 13
#define LED_PIN     7
#define NUM_LEDS    90
int Intensity = 0;


CRGB leds[NUM_LEDS];
void setup() {
  pinMode(LED,OUTPUT);
  Serial.begin(9600);

  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}
void loop() {
  Intensity = analogRead(AD5);
  Serial.print("Intensity = ");
  Serial.println(Intensity);
  delay(500);
  if (Intensity > 970){
  // Red
  for (int i = 0; i <= 29; i++) {
    leds[i] = CRGB ( 255, 0, 0);
    FastLED.show();
    delay(40);
  }

  // Green
  for (int i = 0; i <= 29; i++) {
    leds[i] = CRGB ( 0, 255, 0);
    FastLED.show();
    delay(40);
  }

  //  Blue
  for (int i = 0; i <= 29; i++) {
    leds[i] = CRGB ( 0, 0, 255);
    FastLED.show();
    delay(40);
  }
  }
  if (Intensity < 970){
  }

}
