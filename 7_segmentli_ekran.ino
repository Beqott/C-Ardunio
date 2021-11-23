#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);
                  


void setup()
{
  /* LCD ekranın sutun ve satır sayısının tanımlanması */
  lcd.begin(16,2);
  
  /* EKrana veri Yazdırma*/
  lcd.print("meraba");
  
}

void loop()
{
  /*İmle. Konumu:1.satır 0. sütun*/
  lcd.setCursor(0,1);
  /*Ardunio çalışma süresini saniye cinsinden LCD'ye yaz*/
  lcd.print(millis());
  delay(10);
}
