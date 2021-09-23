#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#ifndef PSTR
#define PSTR // Make Arduino Due happy
#endif
​
#define PIN 3
​
Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(8, 8, PIN,
                            NEO_MATRIX_TOP     + NEO_MATRIX_RIGHT +
                            NEO_MATRIX_COLUMNS + NEO_MATRIX_PROGRESSIVE,
                            NEO_GRB            + NEO_KHZ800);
​
void setup() {
  matrix.begin();
  matrix.setBrightness(40);
}
​
int x    = matrix.width();
int pass = 0;
​
void loop() {{
  matrix.fillScreen(0);
​
  matrix.drawPixel(2, 5, matrix.Color(0, 255, 0));
  matrix.drawPixel(2, 5, matrix.Color(204, 0, 204));
  matrix.drawPixel(2, 2, matrix.Color(204, 0, 204));
  matrix.drawPixel(4, 5, matrix.Color(204, 0, 204));
  matrix.drawPixel(5, 2, matrix.Color(204, 0, 204));
  matrix.drawPixel(4, 4, matrix.Color(204, 0, 204));
  matrix.drawPixel(4, 3, matrix.Color(204, 0, 204));
  matrix.drawPixel(5, 5, matrix.Color(204, 0, 204));
  matrix.drawPixel(5, 3, matrix.Color(204, 0, 204));
  matrix.drawPixel(5, 4, matrix.Color(204, 0, 204));
  matrix.drawPixel(0, 6, matrix.Color(255, 0, 0));
  matrix.drawPixel(1, 2, matrix.Color(255, 0, 0));
  matrix.drawPixel(2, 3, matrix.Color(255, 0, 0));
  matrix.drawPixel(2, 4, matrix.Color(255, 0, 0));
  matrix.drawPixel(0, 1, matrix.Color(255, 0, 0));
  matrix.drawPixel(1, 5, matrix.Color(255, 0, 0));
​
  matrix.show();
  delay(250);
}
{
  matrix.fillScreen(0);
​
  matrix.drawPixel(2, 5, matrix.Color(0, 0, 255));
  matrix.drawPixel(2, 2, matrix.Color(0, 0, 255));
  matrix.drawPixel(4, 5, matrix.Color(0, 0, 255));
  matrix.drawPixel(5, 1, matrix.Color(0, 0, 255));
  matrix.drawPixel(4, 4, matrix.Color(0, 0, 255));
  matrix.drawPixel(4, 3, matrix.Color(0, 0, 255));
  matrix.drawPixel(5, 6, matrix.Color(0, 0, 255));
  matrix.drawPixel(4, 2, matrix.Color(0, 0, 255));
​
  
  matrix.show();
  delay(250);
}
{
  matrix.fillScreen(0);
​
  matrix.drawPixel(2, 5, matrix.Color(0, 255, 0));
  matrix.drawPixel(2, 2, matrix.Color(0, 255, 0));
  matrix.drawPixel(4, 5, matrix.Color(0, 255, 0));
  matrix.drawPixel(5, 2, matrix.Color(0, 255, 0));
  matrix.drawPixel(5, 4, matrix.Color(0, 255, 0));
  matrix.drawPixel(5, 3, matrix.Color(0, 255, 0));
  matrix.drawPixel(5, 5, matrix.Color(0, 255, 0));
  matrix.drawPixel(4, 2, matrix.Color(0, 255, 0));
​
  
  matrix.show();
  delay(250);
}
{
  matrix.fillScreen(0);
​
  matrix.drawPixel(2, 5, matrix.Color(0, 255, 0));
  matrix.drawPixel(2, 5, matrix.Color(204, 0, 204));
  matrix.drawPixel(2, 2, matrix.Color(204, 0, 204));
  matrix.drawPixel(4, 5, matrix.Color(204, 0, 204));
  matrix.drawPixel(5, 2, matrix.Color(204, 0, 204));
  matrix.drawPixel(4, 4, matrix.Color(204, 0, 204));
  matrix.drawPixel(4, 3, matrix.Color(204, 0, 204));
  matrix.drawPixel(5, 5, matrix.Color(204, 0, 204));
  matrix.drawPixel(4, 2, matrix.Color(204, 0, 204));
  matrix.drawPixel(3, 1, matrix.Color(0, 128, 255));
  matrix.drawPixel(3, 6, matrix.Color(0, 128, 255));
  matrix.drawPixel(5, 1, matrix.Color(0, 128, 255));
  matrix.drawPixel(5, 6, matrix.Color(0, 128, 255));
  matrix.drawPixel(7, 1, matrix.Color(0, 128, 255));
  matrix.drawPixel(7, 6, matrix.Color(0, 128, 255));
  matrix.drawPixel(7, 0, matrix.Color(255, 255, 255));
  matrix.drawPixel(7, 2, matrix.Color(255, 255, 255));
  matrix.drawPixel(7, 5, matrix.Color(255, 255, 255));
  matrix.drawPixel(7, 7, matrix.Color(255, 255, 255));
​
​
  matrix.show();
  delay(250);
}
{
  matrix.fillScreen(0);
​
  matrix.drawPixel(2, 5, matrix.Color(255, 255, 0));
  matrix.drawPixel(2, 2, matrix.Color(255, 255, 0));
​
  matrix.drawPixel(5, 2, matrix.Color(255, 255, 0));
  matrix.drawPixel(5, 4, matrix.Color(255, 255, 0));
  matrix.drawPixel(5, 3, matrix.Color(255, 255, 0));
  matrix.drawPixel(5, 5, matrix.Color(255, 255, 0));
 
​
  
  matrix.show();
  delay(250);
}}
