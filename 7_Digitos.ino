const int G= 5;              // pin 5 de l’Arduino
const int F= 6;              // pin 6 de l’Arduino                       
const int A= 7;              // pin 7 de l’Arduino
const int B= 8;              // pin 8 de l’Arduino
const int E= 9;              // pin 9 de l’Arduino
const int D= 10;             // pin 10 de l’Arduino
const int C= 11;             // pin 11 de l’Arduino
const int buttonPin = 2;     // pin 2 de l’Arduino

void setup()
{
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
  //cero
  digitalWrite(G, HIGH);
   digitalWrite(F, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(C, LOW);
   delay(500);
  
  //uno
  digitalWrite(G, LOW);
   digitalWrite(F, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(E, LOW);
    digitalWrite(D, LOW);
    digitalWrite(C, LOW);
   delay(500);
  
  
  
  //DOS
   digitalWrite(G, HIGH);
   digitalWrite(F, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(D, LOW);
    digitalWrite(C, HIGH);
   delay(500);
  
//TRES
digitalWrite(G, HIGH);
   digitalWrite(F, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(E,LOW);
    digitalWrite(D, LOW);
    digitalWrite(C, HIGH);
   delay(500);
  
  //CUATRO
  digitalWrite(G, LOW);
   digitalWrite(F, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(E,LOW);
    digitalWrite(D, HIGH);
    digitalWrite(C, HIGH);
   delay(500);
  
  //CINCO
  digitalWrite(G, HIGH);
   digitalWrite(F, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(E,LOW);
    digitalWrite(D, HIGH);
    digitalWrite(C, HIGH);
   delay(500);
  
  //SEIS
  digitalWrite(G, LOW);
   digitalWrite(F, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(C, HIGH);
   delay(500);
  
  //SIETE
   digitalWrite(G, HIGH);
   digitalWrite(F, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(B,LOW);
    digitalWrite(E,LOW);
    digitalWrite(D, LOW);
    digitalWrite(C, LOW);
   delay(500);
  // OCHO 
   digitalWrite(G, HIGH);
   digitalWrite(F, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(C, HIGH);
   delay(500);
  // NUEVE
  digitalWrite(G, HIGH);
   digitalWrite(F, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(E,LOW);
    digitalWrite(D, HIGH);
    digitalWrite(C, HIGH);
   delay(500);
  
}
