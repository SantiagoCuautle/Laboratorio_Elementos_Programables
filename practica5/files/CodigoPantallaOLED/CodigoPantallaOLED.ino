#include <TinyWireM.h>
#include <Tiny4kOLED.h>

#define pwmPin  3
#define enPin   4

void prepareDisplay() {
  oled.clear();
  oled.begin();
  oled.setFont(FONT6X8);
}

void setup() {
  oled.begin(128, 64, sizeof(tiny4koled_init_128x64br), tiny4koled_init_128x64br);
  oled.clear();
  oled.on();
  prepareDisplay();
  oled.setFont(FONT8X16);  
}

void loop() {

  if (digitalRead(3)==HIGH) {
    oled.setCursor(48, 0);
    oled.print("ON ");
    }
  else{
    oled.setCursor(48, 0);
    oled.print("OFF");
  }
}

