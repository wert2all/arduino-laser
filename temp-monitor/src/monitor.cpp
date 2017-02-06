#include <Arduino.h>
#include <Wire.h>
#include <FastIO.h>
#include <I2CIO.h>
#include <LCD.h>
#include <LiquidCrystal.h>
#include <LiquidCrystal_I2C.h>
#include <LiquidCrystal_SR.h>
#include <LiquidCrystal_SR2W.h>
#include <LiquidCrystal_SR3W.h>
#include <DHT.h>

#define DHTPIN 2 // к какому пину будет подключен сигнальный выход датчика
#define DHTTYPE DHT22 // DHT 22 (AM2302)

//инициализация датчика
DHT dht(DHTPIN, DHTTYPE);

byte temp[8] = //код иконки термометра
{
   0b01110,
   0b01010,
   0b01010,
   0b01010,
   0b01110,
   0b01110,
   0b01110,
   0b00000
};

byte hum[8] = //код иконки влажности
{
    B00100,
    B00100,
    B01010,
    B01010,
    B10001,
    B10001,
    B10001,
    B01110,
};

// Задаем адрес и размерность дисплея
LiquidCrystal_I2C  lcd(0x3F,2,1,0,4,5,6,7);

void setup()
{
// Активируем LCD модуль
  lcd.begin (16,2); // for 16 x 2 LCD module
  lcd.setBacklightPin(3,POSITIVE);
  lcd.setBacklight(HIGH);

  lcd.createChar(1,temp);
  lcd.createChar(2,hum);

dht.begin();
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

// Выводим показания влажности и температуры

lcd.setCursor(0, 0);
lcd.print("Temp  ");
 lcd.write(1);
 lcd.setCursor(8, 0);
 lcd.print(t);
 lcd.print( (char)223);
 lcd.print("C");

lcd.setCursor(0, 1);
lcd.print("Hum   ");
  lcd.write(2);
  lcd.setCursor(8, 1);
  lcd.print(h);
  lcd.print(" %");
  delay(2000);
}
