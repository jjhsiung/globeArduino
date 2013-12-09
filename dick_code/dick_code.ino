//group 1
int ledPin0 = 13;                 // LED connected to digital pin 13
int ledPin1 = 12;                 // LED connected to digital pin 13
int ledPin2 = 11;                 // LED connected to digital pin 13
int ledPinEN1 = 10;                 // LED connected to digital pin 13
//group 2
int ledPin3 = 30;                 // LED connected to digital pin 13
int ledPin4 = 31;                 // LED connected to digital pin 13
int ledPin5 = 32;                 // LED connected to digital pin 13
int ledPinEN2 = 33;                 // LED connected to digital pin 13
//group 3
int ledPin6 = 14;                 // LED connected to digital pin 13
int ledPin7 = 15;                 // LED connected to digital pin 13
int ledPin8 = 16;                 // LED connected to digital pin 13
int ledPinEN3 = 17;   
//group 4
int ledPin9 = 9;                 // LED connected to digital pin 13
int ledPin10 = 8;                 // LED connected to digital pin 13
int ledPin11 = 7;                 // LED connected to digital pin 13
int ledPinEN4 = 6;  
//group 5
int ledPin12 = 48;                 // LED connected to digital pin 13
int ledPin13 = 49;                 // LED connected to digital pin 13
int ledPin14 = 50;                 // LED connected to digital pin 13
int ledPinEN5 = 51;
//group 6
int ledPin15 = 18;                 // LED connected to digital pin 13
int ledPin16 = 19;                 // LED connected to digital pin 13
int ledPin17 = 20;                 // LED connected to digital pin 13
int ledPinEN6 = 21;
//group 7
int ledPin18 = 22;                 // LED connected to digital pin 13
int ledPin19 = 23;                 // LED connected to digital pin 13
int ledPin20 = 24;                 // LED connected to digital pin 13
int ledPinEN7 = 25;
//group 8
int ledPin21 = 26;                 // LED connected to digital pin 13
int ledPin22 = 27;                 // LED connected to digital pin 13
int ledPin23 = 28;                 // LED connected to digital pin 13
int ledPinEN8 = 29;

void setup()
{
  pinMode(ledPin0, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin1, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin2, OUTPUT);      // sets the digital pin as output
  pinMode(ledPinEN1, OUTPUT);      // sets the digital pin as output
  digitalWrite(ledPinEN1, HIGH);   // sets the LED on
  
  pinMode(ledPin3, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin4, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin5, OUTPUT);      // sets the digital pin as output
  pinMode(ledPinEN2, OUTPUT);      // sets the digital pin as output
  digitalWrite(ledPinEN2, HIGH);   // sets the LED on
  
  pinMode(ledPin6, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin7, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin8, OUTPUT);      // sets the digital pin as output
  pinMode(ledPinEN3, OUTPUT);      // sets the digital pin as output
  digitalWrite(ledPinEN3, HIGH);   // sets the LED on
  
  pinMode(ledPin9, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin10, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin11, OUTPUT);      // sets the digital pin as output
  pinMode(ledPinEN4, OUTPUT);      // sets the digital pin as output
  digitalWrite(ledPinEN4, HIGH);   // sets the LED on
  
  pinMode(ledPin12, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin13, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin14, OUTPUT);      // sets the digital pin as output
  pinMode(ledPinEN5, OUTPUT);      // sets the digital pin as output
  digitalWrite(ledPinEN5, HIGH);   // sets the LED on
  
  pinMode(ledPin15, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin16, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin17, OUTPUT);      // sets the digital pin as output
  pinMode(ledPinEN6, OUTPUT);      // sets the digital pin as output
  digitalWrite(ledPinEN6, HIGH);   // sets the LED on
  
  pinMode(ledPin18, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin19, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin20, OUTPUT);      // sets the digital pin as output
  pinMode(ledPinEN7, OUTPUT);      // sets the digital pin as output
  digitalWrite(ledPinEN7, HIGH);   // sets the LED on
  
  pinMode(ledPin21, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin22, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin23, OUTPUT);      // sets the digital pin as output
  pinMode(ledPinEN8, OUTPUT);      // sets the digital pin as output
  digitalWrite(ledPinEN8, HIGH);   // sets the LED on

}

void loop()
{
  //digitalWrite(ledPinEN, HIGH);   // sets the LED on
  digitalWrite(ledPin0, HIGH);   // sets the LED on
  digitalWrite(ledPin1, HIGH);   // sets the LED on
  digitalWrite(ledPin2, HIGH);   // sets the LED on
  digitalWrite(ledPin3, HIGH);   // sets the LED on
  digitalWrite(ledPin4, HIGH);   // sets the LED on
  digitalWrite(ledPin5, HIGH);   // sets the LED on
  digitalWrite(ledPin6, HIGH);   // sets the LED on
  digitalWrite(ledPin7, HIGH);   // sets the LED on
  digitalWrite(ledPin8, HIGH);   // sets the LED on
  digitalWrite(ledPin9, HIGH);   // sets the LED on
  digitalWrite(ledPin10, HIGH);   // sets the LED on
  digitalWrite(ledPin11, HIGH);   // sets the LED on
  digitalWrite(ledPin12, HIGH);   // sets the LED on
  digitalWrite(ledPin13, HIGH);   // sets the LED on
  digitalWrite(ledPin14, HIGH);   // sets the LED on
  digitalWrite(ledPin15, HIGH);   // sets the LED on
  digitalWrite(ledPin16, HIGH);   // sets the LED on
  digitalWrite(ledPin17, HIGH);   // sets the LED on
  digitalWrite(ledPin18, HIGH);   // sets the LED on
  digitalWrite(ledPin19, HIGH);   // sets the LED on
  digitalWrite(ledPin20, HIGH);   // sets the LED on
  digitalWrite(ledPin21, HIGH);   // sets the LED on
  digitalWrite(ledPin22, HIGH);   // sets the LED on
  digitalWrite(ledPin23, HIGH);   // sets the LED on
  delay(3);                     // waits for a second
  digitalWrite(ledPin0, LOW);   // sets the LED on
  digitalWrite(ledPin1, HIGH);   // sets the LED on
  digitalWrite(ledPin2, HIGH);   // sets the LED on
  digitalWrite(ledPin3, LOW);   // sets the LED on
  digitalWrite(ledPin4, HIGH);   // sets the LED on
  digitalWrite(ledPin5, HIGH);   // sets the LED on
  digitalWrite(ledPin6, LOW);   // sets the LED on
  digitalWrite(ledPin7, HIGH);   // sets the LED on
  digitalWrite(ledPin8, HIGH);   // sets the LED on
  digitalWrite(ledPin9, LOW);   // sets the LED on
  digitalWrite(ledPin10, HIGH);   // sets the LED on
  digitalWrite(ledPin11, HIGH);   // sets the LED on
  digitalWrite(ledPin12, LOW);   // sets the LED on
  digitalWrite(ledPin13, HIGH);   // sets the LED on
  digitalWrite(ledPin14, HIGH);   // sets the LED on
  digitalWrite(ledPin15, LOW);   // sets the LED on
  digitalWrite(ledPin16, HIGH);   // sets the LED on
  digitalWrite(ledPin17, HIGH);   // sets the LED on
  digitalWrite(ledPin18, LOW);   // sets the LED on
  digitalWrite(ledPin19, HIGH);   // sets the LED on
  digitalWrite(ledPin20, HIGH);   // sets the LED on
  digitalWrite(ledPin21, LOW);   // sets the LED on
  digitalWrite(ledPin22, HIGH);   // sets the LED on
  digitalWrite(ledPin23, HIGH);   // sets the LED on
  delay(3);                     // waits for a second
  digitalWrite(ledPin0, HIGH);   // sets the LED on
  digitalWrite(ledPin1, LOW);   // sets the LED on
  digitalWrite(ledPin2, HIGH);   // sets the LED on
  digitalWrite(ledPin3, HIGH);   // sets the LED on
  digitalWrite(ledPin4, LOW);   // sets the LED on
  digitalWrite(ledPin5, HIGH);   // sets the LED on
  digitalWrite(ledPin6, HIGH);   // sets the LED on
  digitalWrite(ledPin7, LOW);   // sets the LED on
  digitalWrite(ledPin8, HIGH);   // sets the LED on
  digitalWrite(ledPin9, HIGH);   // sets the LED on
  digitalWrite(ledPin10, LOW);   // sets the LED on
  digitalWrite(ledPin11, HIGH);   // sets the LED on
  digitalWrite(ledPin12, HIGH);   // sets the LED on
  digitalWrite(ledPin13, LOW);   // sets the LED on
  digitalWrite(ledPin14, HIGH);   // sets the LED on
  digitalWrite(ledPin15, HIGH);   // sets the LED on
  digitalWrite(ledPin16, LOW);   // sets the LED on
  digitalWrite(ledPin17, HIGH);   // sets the LED on
  digitalWrite(ledPin18, HIGH);   // sets the LED on
  digitalWrite(ledPin19, LOW);   // sets the LED on
  digitalWrite(ledPin20, HIGH);   // sets the LED on
  digitalWrite(ledPin21, HIGH);   // sets the LED on
  digitalWrite(ledPin22, LOW);   // sets the LED on
  digitalWrite(ledPin23, HIGH);   // sets the LED on
  delay(3);                     // waits for a second
  digitalWrite(ledPin0, LOW);   // sets the LED on
  digitalWrite(ledPin1, LOW);   // sets the LED on
  digitalWrite(ledPin2, HIGH);   // sets the LED on
  digitalWrite(ledPin3, LOW);   // sets the LED on
  digitalWrite(ledPin4, LOW);   // sets the LED on
  digitalWrite(ledPin5, HIGH);   // sets the LED on
  digitalWrite(ledPin6, LOW);   // sets the LED on
  digitalWrite(ledPin7, LOW);   // sets the LED on
  digitalWrite(ledPin8, HIGH);   // sets the LED on
  digitalWrite(ledPin9, LOW);   // sets the LED on
  digitalWrite(ledPin10, LOW);   // sets the LED on
  digitalWrite(ledPin11, HIGH);   // sets the LED on
  digitalWrite(ledPin12, LOW);   // sets the LED on
  digitalWrite(ledPin13, LOW);   // sets the LED on
  digitalWrite(ledPin14, HIGH);   // sets the LED on
  digitalWrite(ledPin15, LOW);   // sets the LED on
  digitalWrite(ledPin16, LOW);   // sets the LED on
  digitalWrite(ledPin17, HIGH);   // sets the LED on
  digitalWrite(ledPin18, LOW);   // sets the LED on
  digitalWrite(ledPin19, LOW);   // sets the LED on
  digitalWrite(ledPin20, HIGH);   // sets the LED on
  digitalWrite(ledPin21, LOW);   // sets the LED on
  digitalWrite(ledPin22, LOW);   // sets the LED on
  digitalWrite(ledPin23, HIGH);   // sets the LED on
  delay(3);                     // waits for a second
  digitalWrite(ledPin0, HIGH);   // sets the LED on
  digitalWrite(ledPin1, HIGH);   // sets the LED on
  digitalWrite(ledPin2, LOW);   // sets the LED on
  digitalWrite(ledPin3, HIGH);   // sets the LED on
  digitalWrite(ledPin4, HIGH);   // sets the LED on
  digitalWrite(ledPin5, LOW);   // sets the LED on
  digitalWrite(ledPin6, HIGH);   // sets the LED on
  digitalWrite(ledPin7, HIGH);   // sets the LED on
  digitalWrite(ledPin8, LOW);   // sets the LED on
  digitalWrite(ledPin9, HIGH);   // sets the LED on
  digitalWrite(ledPin10, HIGH);   // sets the LED on
  digitalWrite(ledPin11, LOW);   // sets the LED on
  digitalWrite(ledPin12, HIGH);   // sets the LED on
  digitalWrite(ledPin13, HIGH);   // sets the LED on
  digitalWrite(ledPin14, LOW);   // sets the LED on
  digitalWrite(ledPin15, HIGH);   // sets the LED on
  digitalWrite(ledPin16, HIGH);   // sets the LED on
  digitalWrite(ledPin17, LOW);   // sets the LED on
  digitalWrite(ledPin18, HIGH);   // sets the LED on
  digitalWrite(ledPin19, HIGH);   // sets the LED on
  digitalWrite(ledPin20, LOW);   // sets the LED on
  digitalWrite(ledPin21, HIGH);   // sets the LED on
  digitalWrite(ledPin22, HIGH);   // sets the LED on
  digitalWrite(ledPin23, LOW);   // sets the LED on
  
  
  delay(3);                     // waits for a second
  digitalWrite(ledPin0, LOW);   // sets the LED on
  digitalWrite(ledPin1, HIGH);   // sets the LED on
  digitalWrite(ledPin2, LOW);   // sets the LED on
  digitalWrite(ledPin3, LOW);   // sets the LED on
  digitalWrite(ledPin4, HIGH);   // sets the LED on
  digitalWrite(ledPin5, LOW);   // sets the LED on
  digitalWrite(ledPin6, LOW);   // sets the LED on
  digitalWrite(ledPin7, HIGH);   // sets the LED on
  digitalWrite(ledPin8, LOW);   // sets the LED on
  digitalWrite(ledPin9, LOW);   // sets the LED on
  digitalWrite(ledPin10, HIGH);   // sets the LED on
  digitalWrite(ledPin11, LOW);   // sets the LED on
  digitalWrite(ledPin12, LOW);   // sets the LED on
  digitalWrite(ledPin13, HIGH);   // sets the LED on
  digitalWrite(ledPin14, LOW);   // sets the LED on
  digitalWrite(ledPin15, LOW);   // sets the LED on
  digitalWrite(ledPin16, HIGH);   // sets the LED on
  digitalWrite(ledPin17, LOW);   // sets the LED on
  digitalWrite(ledPin18, LOW);   // sets the LED on
  digitalWrite(ledPin19, HIGH);   // sets the LED on
  digitalWrite(ledPin20, LOW);   // sets the LED on
  digitalWrite(ledPin21, LOW);   // sets the LED on
  digitalWrite(ledPin22, HIGH);   // sets the LED on
  digitalWrite(ledPin23, LOW);   // sets the LED on
  delay(3);                     // waits for a second
  digitalWrite(ledPin0, HIGH);   // sets the LED on
  digitalWrite(ledPin1, LOW);   // sets the LED on
  digitalWrite(ledPin2, LOW);   // sets the LED on
  digitalWrite(ledPin3, HIGH);   // sets the LED on
  digitalWrite(ledPin4, LOW);   // sets the LED on
  digitalWrite(ledPin5, LOW);   // sets the LED on
  digitalWrite(ledPin6, HIGH);   // sets the LED on
  digitalWrite(ledPin7, LOW);   // sets the LED on
  digitalWrite(ledPin8, LOW);   // sets the LED on
  digitalWrite(ledPin9, HIGH);   // sets the LED on
  digitalWrite(ledPin10, LOW);   // sets the LED on
  digitalWrite(ledPin11, LOW);   // sets the LED on
  digitalWrite(ledPin12, HIGH);   // sets the LED on
  digitalWrite(ledPin13, LOW);   // sets the LED on
  digitalWrite(ledPin14, LOW);   // sets the LED on
  digitalWrite(ledPin15, HIGH);   // sets the LED on
  digitalWrite(ledPin16, LOW);   // sets the LED on
  digitalWrite(ledPin17, LOW);   // sets the LED on
  digitalWrite(ledPin18, HIGH);   // sets the LED on
  digitalWrite(ledPin19, LOW);   // sets the LED on
  digitalWrite(ledPin20, LOW);   // sets the LED on
  digitalWrite(ledPin21, HIGH);   // sets the LED on
  digitalWrite(ledPin22, LOW);   // sets the LED on
  digitalWrite(ledPin23, LOW);   // sets the LED on
  delay(3);                     // waits for a second
  digitalWrite(ledPin0, LOW);   // sets the LED on
  digitalWrite(ledPin1, LOW);   // sets the LED on
  digitalWrite(ledPin2, LOW);   // sets the LED on
  digitalWrite(ledPin3, LOW);   // sets the LED on
  digitalWrite(ledPin4, LOW);   // sets the LED on
  digitalWrite(ledPin5, LOW);   // sets the LED on
  digitalWrite(ledPin6, LOW);   // sets the LED on
  digitalWrite(ledPin7, LOW);   // sets the LED on
  digitalWrite(ledPin8, LOW);   // sets the LED on
  digitalWrite(ledPin9, LOW);   // sets the LED on
  digitalWrite(ledPin10, LOW);   // sets the LED on
  digitalWrite(ledPin11, LOW);   // sets the LED on
  digitalWrite(ledPin12, LOW);   // sets the LED on
  digitalWrite(ledPin13, LOW);   // sets the LED on
  digitalWrite(ledPin14, LOW);   // sets the LED on
  digitalWrite(ledPin15, LOW);   // sets the LED on
  digitalWrite(ledPin16, LOW);   // sets the LED on
  digitalWrite(ledPin17, LOW);   // sets the LED on
  digitalWrite(ledPin18, LOW);   // sets the LED on
  digitalWrite(ledPin19, LOW);   // sets the LED on
  digitalWrite(ledPin20, LOW);   // sets the LED on
  digitalWrite(ledPin21, LOW);   // sets the LED on
  digitalWrite(ledPin22, LOW);   // sets the LED on
  digitalWrite(ledPin23, LOW);   // sets the LED on
  delay(3);                     // waits for a second
}
