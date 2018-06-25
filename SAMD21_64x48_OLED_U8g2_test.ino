#include <U8g2lib.h>
#include <SPI.h>

#define OLED_CLOCK  13
#define OLED_DATA   12
#define OLED_CS     10
#define OLED_DC     8
#define OLED_RESET  9


U8G2_SSD1306_64X48_ER_1_4W_SW_SPI display(U8G2_R0, OLED_CLOCK, OLED_DATA, OLED_CS, OLED_DC, OLED_RESET);
//U8G2_SSD1306_64X48_ER_1_4W_HW_SPI display(rotation, cs, dc [, reset]);  switch to this for hw spi

void setup() {
  // put your setup code here, to run once:
  display.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  display.firstPage();
  do {
    display.setFont(u8g2_font_helvB08_tf);  
    display.drawStr(0,8,"Hello, World!");
    //display.drawFilledEllipse(32,28,31,19,U8G2_DRAW_ALL);
  } while (display.nextPage());
}
