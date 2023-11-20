#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

unsigned long lastTime = 0;     // آخرین زمان به میلی‌ثانیه
unsigned long interval = 1000;  // فاصله زمانی بر حسب میلی‌ثانیه (در اینجا 1 ثانیه)

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  unsigned long currentTime = millis();  // مقدار فعلی زمان
  if (currentTime - lastTime >= interval) {
    lastTime = currentTime;  // به‌روزرسانی آخرین زمان

    int seconds = (currentTime / 1000) % 60;            // محاسبه ثانیه
    int minutes = (currentTime / (1000 * 60)) % 60;     // محاسبه دقیقه
    int hours = (currentTime / (1000 * 60 * 60)) % 24;  // محاسبه ساعت

    // حالت دو رقمی برای ساعت و دقیقه و ثانیه (مثال: 01:02:03)
    lcd.setCursor(0, 0);
    if (hours < 10) {
      lcd.print('0');
    }
    lcd.print(hours);
    lcd.print(':');
    if (minutes < 10) {
      lcd.print('0');
    }
    lcd.print(minutes);
    lcd.print(':');
    if (seconds < 10) {
      lcd.print('0');
    }
    lcd.print(seconds);
  }
}