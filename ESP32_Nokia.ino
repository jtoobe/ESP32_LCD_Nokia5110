#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>


//                                          
Adafruit_PCD8544 display = Adafruit_PCD8544(18,23,4,15,2);

void setup()   {
  Serial.begin(115200);
  display.begin();
  display.setContrast(50);

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(BLACK);
  display.setCursor(10,10);
  display.println("Welcome!");
  display.display();
}
void loop(){

}
