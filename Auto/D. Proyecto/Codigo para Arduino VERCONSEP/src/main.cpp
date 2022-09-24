#include <Arduino.h>
#include <SoftwareSerial.h>

char estado;                        

void setup() {
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT); //MOTOR 1
  pinMode(6, OUTPUT); //Velocidad

  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT); //MOTOR 2
  pinMode(9, OUTPUT); //Velocidad

  Serial.begin(9600);

}

void loop() {
  if (Serial.available())
    estado = Serial.read();
  if (estado == 'a')          //DETENER
  {
    digitalWrite (4, LOW);
    digitalWrite (5, LOW);
    analogWrite   (6, 0);
    digitalWrite (7, LOW);
    digitalWrite (8, LOW);
    analogWrite   (9, 0);
    Serial.println ("DETENER");
  }

  if (Serial.available())
    estado = Serial.read();
  if (estado == 'b')          //ADELANTE
  {
    digitalWrite (4, LOW);
    digitalWrite (5, HIGH);
    analogWrite   (6, 120);
    digitalWrite (7, HIGH);
    digitalWrite (8, LOW);
    analogWrite   (9, 120);
    Serial.println ("ADELANTE");
  }

if (Serial.available())
    estado = Serial.read();
  if (estado == 'c')
  {
    digitalWrite (4, HIGH);
    digitalWrite (5, LOW);
    analogWrite   (6, 120);
    digitalWrite (7, LOW);
    digitalWrite (8, HIGH);
    analogWrite   (9, 120);
    Serial.println ("ATRAS");
  }

  if (Serial.available())
    estado = Serial.read();
  if (estado == 'd')
  {
    digitalWrite (4, HIGH);
    digitalWrite (5, LOW);
    analogWrite   (6, 100);
    digitalWrite (7, HIGH);
    digitalWrite (8, LOW);
    analogWrite   (9, 100);
    Serial.println ("DERECHA");
  }

  if (Serial.available())
    estado = Serial.read();
  if (estado == 'e')
  {
    digitalWrite (4, LOW);
    digitalWrite (5, HIGH);
    analogWrite   (6, 100);
    digitalWrite (7, LOW);
    digitalWrite (8, HIGH);
    analogWrite   (9, 100);
    Serial.println ("IZQUIERDA");
  }

}