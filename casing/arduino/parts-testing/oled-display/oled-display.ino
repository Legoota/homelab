//https://github.com/olikraus/u8g2/wiki/u8g2setupcpp#ssd1322-nhd_256x64
//https://github.com/olikraus/u8g2/wiki/setup_tutorial
//https://github.com/olikraus/u8g2/wiki

// OLED <===> Mega2560
// 1    <===> GND
// 2    <===> 3.3V
// 4    <===> 52 (SPI CLK)
// 5    <===> 51 (SPI MOSI)
// 14   <===> 9
// 15   <===> 8
// 16   <===> 10

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
    // u8g2.setFont(u8g2_font_unifont_t_symbols);
    // u8g2.drawGlyph(5, 20, 0x23f0);
    //u8g2.setFont(u8g2_font_chargen_92_mf);
    u8g2.setFont(u8g2_font_crox3cb_mr);
    u8g2.drawStr(0,17, "ligne numero 1");
    u8g2.drawStr(0,38, "ligne numero 2");
    u8g2.drawStr(0,59, "ligne numero 3");
  } while ( u8g2.nextPage() );
}
