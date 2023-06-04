//https://github.com/olikraus/u8g2/wiki/u8g2setupcpp#ssd1322-nhd_256x64
//https://github.com/olikraus/u8g2/wiki/setup_tutorial
//https://github.com/olikraus/u8g2/wiki

// OLED <===> Mega2560
// 1    <===>
//

#include <Arduino.h>
#include <U8g2lib.h>
#include <SPI.h>
#include <Wire.h>

U8G2_SSD1322_NHD_256X64_2_4W_HW_SPI u8g2(U8G2_R0,10,9,8);

void setup() {
  u8g2.begin();
}

void loop() {
  u8g2.firstPage();
  do {
    u8g2.setFont(u8g2_font_unifont_t_symbols);
    u8g2.drawGlyph(5, 20, 0x23f0);
  } while ( u8g2.nextPage() );
}
