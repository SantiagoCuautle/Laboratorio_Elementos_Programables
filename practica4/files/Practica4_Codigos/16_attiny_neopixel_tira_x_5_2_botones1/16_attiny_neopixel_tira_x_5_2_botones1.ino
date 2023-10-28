#include <Adafruit_NeoPixel.h>
#define PIN 0	 // input pin Neopixel is attached to
#define NUMPIXELS      5 // number of neopixels in strip

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 100; // timing delay in milliseconds

void setup() {
  // Initialize the NeoPixel library.
  pixels.begin();
}

void loop() {
  
  pixels.setPixelColor(0, pixels.Color(0, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.setPixelColor(1, pixels.Color(0, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.setPixelColor(2, pixels.Color(0, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.setPixelColor(3, pixels.Color(0, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.setPixelColor(4, pixels.Color(0, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.show(); // This sends the updated pixel color to the hardware.
  delay(500);
  
  pixels.setPixelColor(0, pixels.Color(255, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.setPixelColor(1, pixels.Color(0, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.setPixelColor(2, pixels.Color(0, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.setPixelColor(3, pixels.Color(0, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.setPixelColor(4, pixels.Color(0, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.show(); // This sends the updated pixel color to the hardware.
  delay(500);
  
  pixels.setPixelColor(0, pixels.Color(255, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.setPixelColor(1, pixels.Color(255, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.setPixelColor(2, pixels.Color(0, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.setPixelColor(3, pixels.Color(0, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.setPixelColor(4, pixels.Color(0, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.show(); // This sends the updated pixel color to the hardware.
  delay(500);
  
  pixels.setPixelColor(0, pixels.Color(255, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.setPixelColor(1, pixels.Color(255, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.setPixelColor(2, pixels.Color(255, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.setPixelColor(3, pixels.Color(0, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.setPixelColor(4, pixels.Color(0, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.show(); // This sends the updated pixel color to the hardware.
  delay(500);
  
  pixels.setPixelColor(0, pixels.Color(255, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.setPixelColor(1, pixels.Color(255, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.setPixelColor(2, pixels.Color(255, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.setPixelColor(3, pixels.Color(255, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.setPixelColor(4, pixels.Color(0, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.show(); // This sends the updated pixel color to the hardware.
  delay(500);
  
  pixels.setPixelColor(0, pixels.Color(255, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.setPixelColor(1, pixels.Color(255, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.setPixelColor(2, pixels.Color(255, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.setPixelColor(3, pixels.Color(255, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.setPixelColor(4, pixels.Color(255, 0, 0)); // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  pixels.show(); // This sends the updated pixel color to the hardware.
  delay(500);
}
