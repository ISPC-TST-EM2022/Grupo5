#include <Arduino.h>
#include <SoftwareSerial.h>

//Declaro variables
int n = 0;
int i = 0;
int x;
int suma=0;
int media = 0;

void setup() {
  Serial.begin(9600);           //Inicio la comunicacion serial

  Serial.println("Bienvenido al Ejercicio 3A");
  Serial.println();
  Serial.print("Por Favor Ingrese la cantidad de numeros, ");
  Serial.print("y precione ENTER paraa continuar. ");
  Serial.println();

}

void loop() {
  //--Carga de n numeros
  if(Serial.available()>0) //Verifico disponibilidad
  {
    n = Serial.parseInt();    //Leo y guardo el valor ingresado 
    Serial.println(n);

    while(i<n) {            //Ciclo para cargar todos los numeros ingresados 
      Serial.println("Ingresar numero");
      x = Serial.parseInt();
      Serial.println(x);
      suma=suma+x;
      i=i+1;
     }
     media=suma/n;  //Calculo la media teniendo en cuenta la suma

    Serial.print("La media de los numeros es: ");  //
    Serial.print(media);                           //Imprimo por pantalla el resultado
    Serial.println();                              //
  }

}