#include <TFT_eSPI.h>
#include "heiti_35.h"
#include "heiti_16.h"
TFT_eSPI tft;
void setup()
{

    Serial.begin(115200);
    tft.begin();
    tft.fillScreen(ST7735_BLACK);
    tft.setTextColor(ST7735_WHITE);
    tft.setTextFont(2);
    tft.setRotation(1);
    ledcSetup(1, 1000, 12);
    ledcAttachPin(2, 1);
    ledcWrite(1, pow(2, 10)); // 设置屏幕亮度为25%
    tft.loadFont(heiti_35);
    tft.println("你好啊");
    tft.unloadFont();

    tft.loadFont(heiti_16);
    tft.println("你好啊16");
    tft.unloadFont();
}
void loop()
{
}
