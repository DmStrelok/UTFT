//Цветной графический дисплей 3.2 TFT 480x320 MEGA http://iarduino.ru/shop/Displei/cvetnoy-graficheskiy-displey-3-2-tft-480x320.html

#include <UTFT.h>                              // подключаем библиотеку UTFT
UTFT myGLCD(HX8357C,38,39,40,41);           // объявляем объект myGLCD класса библиотеки UTFT указывая тип дисплея TFT32MEGA driver HX8357C и номера выводов Arduino к которым подключён дисплей: RS, WR, CS, RST. Выводы параллельной шины данных не указываются
                                               //
void setup(){                                  //
   myGLCD.InitLCD();                           // инициируем дисплей
}                                              //
                                               //
void loop(){                                   //
   myGLCD.clrScr();                            // стираем всю информацию с дисплея
                                               //
   myGLCD.setColor(VGA_RED);                   // Устанавливаем красный цвет
   myGLCD.drawLine(10,10,170,10);              // Рисуем линию (через точки с координатами 10x10 - 170x10)
                                               //
   myGLCD.setColor(VGA_GREEN);                 // Устанавливаем зелёный цвет
   myGLCD.drawRect(10,20,170,100);             // Рисуем прямоугольник (с противоположными углами в координатах 10x20 - 170x100)
                                               //
   myGLCD.setColor(VGA_BLUE);                  // Устанавливаем синий цвет
   myGLCD.drawRoundRect(10,110,170,210);       // Рисуем прямоугольник со скруглёнными углами (с противоположными углами в координатах 10x110 - 170x210)
                                               //
   myGLCD.setColor(VGA_LIME);                  // Устанавливаем лаймовый цвет
   myGLCD.fillRect(10,220,170,310);            // Рисуем закрашенный прямоугольник (с противоположными углами в координатах 10x220 - 170x310)
                                               //
   myGLCD.setColor(VGA_PURPLE);                // Устанавливаем фиолетовый цвет
   myGLCD.drawCircle(350,90,70);               // Рисуем окружность (с центром в точке 350x90 и радиусом 70)
   myGLCD.fillCircle(350,240,70);              // Рисуем закрашенную окружность (с центром в точке 350x240 и радиусом 70)
                                               //
   delay(20000);                               // ждём 20 секунд
}                                              //
