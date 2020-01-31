#include <Adafruit_CircuitPlayground.h>
#include <AP_Sync.h>
AP_Sync sendData(Serial);


uint16_t value1;

uint16_t value2;

uint16_t value3;

///////////////////////////////////////////////////////////////////////////////
void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

///////////////////////////////////////////////////////////////////////////////
void loop() {
 CircuitPlayground.clearPixels();
//      delay(100);
  value1 = analogRead(1);
  Serial.println(value1);
  delay(100);

  if (value1>250) {
  CircuitPlayground.setPixelColor(0, 255,   0,   0);
  CircuitPlayground.setPixelColor(1, 255, 128,   0);
  CircuitPlayground.setPixelColor(2,   255, 0,   0);
  CircuitPlayground.setPixelColor(3,  255, 0, 128);
  CircuitPlayground.setPixelColor(4,   255,   0, 0);
  
  CircuitPlayground.setPixelColor(5, 0xFF0000);
  CircuitPlayground.setPixelColor(6, 0x808000);
  CircuitPlayground.setPixelColor(7, 0x00FF00);
  CircuitPlayground.setPixelColor(8, 0x008080);
  CircuitPlayground.setPixelColor(9, 0x0000FF);
  }
   Serial.print(value1);
  // print a comma to separate the values
  Serial.print(",");
  
  value2 = analogRead(5);
  Serial.println(value2);
  delay(100);

  if (value2<200) {
  CircuitPlayground.setPixelColor(0,0,   0,   0);
  CircuitPlayground.setPixelColor(0,0,   0,   0);
  CircuitPlayground.setPixelColor(0,0,   0,   0);
  CircuitPlayground.setPixelColor(0,0,   0,   0);
  CircuitPlayground.setPixelColor(0,0,   0,   0);
  
  CircuitPlayground.setPixelColor(0,0,   0,   0);
  CircuitPlayground.setPixelColor(0,0,   0,   0);
  CircuitPlayground.setPixelColor(0,0,   0,   0);
  CircuitPlayground.setPixelColor(0,0,   0,   0);
  CircuitPlayground.setPixelColor(0,0,   0,   0);
  }

    Serial.print(value2);
  // print a comma to separate the values
  Serial.print(",");
  
  value3 = analogRead(7);
  Serial.println(value3);
  delay(100);

  if (value3<200) {
  CircuitPlayground.setPixelColor(0, 255,   255,   128);
  CircuitPlayground.setPixelColor(1, 128, 128,   0);
  CircuitPlayground.setPixelColor(2,   0, 255,   0);
  CircuitPlayground.setPixelColor(3,   0, 160, 128);
  CircuitPlayground.setPixelColor(4,   255,   255, 255);
  
  CircuitPlayground.setPixelColor(5, 0xFF0000);
  CircuitPlayground.setPixelColor(6, 0x808000);
  CircuitPlayground.setPixelColor(7, 0x00FF00);
  CircuitPlayground.setPixelColor(8, 0x008080);
  CircuitPlayground.setPixelColor(9, 0x0000FF);
  }
    Serial.print(value3);
  // print a comma to separate the values
  Serial.print(",");
  
  
  
}
