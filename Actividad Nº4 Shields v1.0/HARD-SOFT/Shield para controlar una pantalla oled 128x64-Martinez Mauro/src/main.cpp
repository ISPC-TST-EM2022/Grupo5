#include <Arduino.h>
#include <Adafruit_GFX.h>       //Libreria para graficar en la pantalla OLED
#include <Adafruit_SSD1306.h>   //Librerias para la pantalla OLED
#include <wire.h>               //Libreria para la comunicacion I2C

#define ANCHO 128  //definiendo alto y ancho de nuestra pantalla
#define ALTO 64 
Adafruit_SSD1306 display (ANCHO, ALTO, &Wire, -1); //Creamos nuestra pantalla

void setup() {
  Serial.begin(9600); //Iniciamos la comunicacion serial

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0X3C))
  {
    Serial.println("No se encontro la pantalla");
    for (;;);
  }

  display.clearDisplay();       //Limpiamos la pantalla de texto
  display.setTextSize(1);       //Elegimos el tamaño del texto
  display.setTextColor(WHITE);  //Elegimos el color del texto
  display.setCursor(0,0);       //Mos posicionasmos en la pantalla
  display.println("Es facil el desarrollo con shields.");
  display.display();            //Enviamos el texto en pantalla
  delay(100);
}

void loop() {
  

}