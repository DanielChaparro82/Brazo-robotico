/*
Código para brazo robótico
Autor: Chaparro Salazar Eduardo Daniel
*/

// Librerias
#include <Servo.h>

// Nomres declarados para cada servomotor // Servo myServo(X);
    Servo myServo1;
    Servo myServo2;
    Servo myServo3;
    Servo myServo4;

// Pines declarados para potenciometros // int const PotPin(X) = A(X);
    int const PotPin1 = A6;
    int const PotPin2 = A7;
    int const PotPin3 = A8;
    int const PotPin4 = A9;

// Declaración de variables
    int PotVal1, PotVal2, PotVal3, PotVal4;
    int angle1, angle2, angle3, angle4;

void setup() {
  // Pines declarados para servomotores // myServoX.attach(X);
  myServo1.attach(8); // Pin 8
  myServo2.attach(9); // Pin 9
  myServo3.attach(10); // Pin 10
  myServo4.attach(11); // Pin 11
  
  Serial.begin(9600);
}

void loop() {
  // Lectura del potenciómetro y movimiento del Servomotor 1
  PotVal1 = analogRead(PotPin1); // Lectura de potenciometro 1
  angle1 = map(PotVal1, 0, 1023, 180, 165); // Conversión a grados de apertura
  myServo1.write(angle1); //
  delay(15); // Tiempo de espera

  // Lectura del potenciómetro y movimiento del Servomotor 2
  PotVal2 = analogRead(PotPin2); // Lectura de potenciometro 2
  angle2 = map(PotVal2, 0, 1023, 180, 110); // Conversión a grados de apertura
  myServo2.write(angle2); // Realiza el movimiento 
  delay(15); // Tiempo de espera

  // Lectura del potenciómetro y movimiento del Servomotor 3
  PotVal3 = analogRead(PotPin3); // Lectura de potenciometro 3
  angle3 = map(PotVal3, 0, 1023, 180, 160); // Conversión a grados de apertura 
  myServo3.write(angle3); // Realiza el movimiento 
  delay(15); // Tiempo de espera

  // Lectura del potenciómetro y movimiento del Servomotor 4
  PotVal4 = analogRead(PotPin4); // Lectura de potenciometro 3
  angle4 = map(PotVal4, 0, 1023, 178, 2); // Conversión a grados de apertura 
  myServo4.write(angle4); // Realiza el movimiento 
  delay(15); // Tiempo de espera
}

/*
Todos los valores "XXXXXXXX" deben de ser ajustados :)
// Lectura del potenciómetro y movimiento del Servomotor X
  PotValX = analogRead(PotPinX); // Lectura de potenciometro X
  angleX = map(PotValX, 0, 1023, 0-180, 0-180); // Conversión a grados de apertura
  myServoX.write(angleX); //
  delay(X); // Tiempo de espera
*/
