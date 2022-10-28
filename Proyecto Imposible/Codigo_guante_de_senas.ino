int pulgar = 0;
int indice = 0;
int medio = 0;
int anular = 0;
int menique = 0;

int G = 1;
int F = 2;
int A = 3;
int B = 4;
int E = 5;
int D = 6;
int C = 7;

void setup()
{
  //serial.begin(9600)
  
 pinMode(G, OUTPUT);
 pinMode(F, OUTPUT);
 pinMode(A, OUTPUT);
 pinMode(B, OUTPUT);
 pinMode(E, OUTPUT);
 pinMode(D, OUTPUT);
 pinMode(C, OUTPUT);
      
}

void loop()
{
  pulgar = analogRead(0);
  indice = analogRead(1);
  medio = analogRead(2);
  anular = analogRead(3);
  menique = analogRead(4);
  
  if(pulgar < 350 && indice > 1000 && medio > 1000 && anular > 1000 && menique > 1000)
  {
    //A
    digitalWrite(G, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(D, LOW);
    digitalWrite(C, HIGH);
  }
  else if(pulgar > 1000 && indice > 1000 && medio > 1000 && anular > 1000 && menique > 1000)
  {
     //E
    digitalWrite(G, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(E, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(C, LOW);
  }
  else if(pulgar > 1000 && indice > 1000 && medio > 1000 && anular > 1000 && menique < 350)
  {
     //I
    digitalWrite(G, LOW);
    digitalWrite(F, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(E, LOW);
    digitalWrite(D, LOW);
    digitalWrite(C, HIGH);
  }
  else if ( (pulgar > 500 && pulgar < 700) && (indice > 500 && indice < 700) && (medio > 500 && medio < 700 ) && (anular > 500 && anular < 700) && (menique > 500 && menique < 700))
  {
    //O
    digitalWrite(G, LOW);
    digitalWrite(F, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(C, HIGH);
  }
  else if(pulgar > 1000 && indice < 350 && medio < 350 && anular > 1000 && menique < 350)
  {
    //U
    digitalWrite(G, LOW);
    digitalWrite(F, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(C, HIGH);
  }
  else 
  {
    //SIN LETRA
    digitalWrite(G, HIGH);
    digitalWrite(F, LOW);
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(E, LOW);
    digitalWrite(D, LOW);
    digitalWrite(C, LOW);
  }
  /*
  Serial.print("Pulgar: ");
  Serial.println(pulgar);
  Serial.print("Indice: ");
  Serial.println(indice);
  Serial.print("Medio: ");
  Serial.println(medio);
  Serial.print("Anular: ");
  Serial.println(anular);
  Serial.print("Menique: ");
  Serial.println(menique);
  Serial.println();
  Serial.println();
  */
  delay (10);
}
