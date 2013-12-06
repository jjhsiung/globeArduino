int initial = 0;
String content = "";
char character;
int result[200][8];
int index = 0;

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
  Serial.begin(9600);
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

}


int serialReadHexDigit(char c)
{
    if (c >= '0' && c <= '9') {
        return c - '0';
    } else if (c >= 'a' && c <= 'f') {
        return c - 'a' + 10;
    } else if (c >= 'A' && c <= 'F') {
        return c - 'A' + 10;
    } else {
        return -1;   // getting here is bad: it means the character was invalid
    }
}

void loop()
{
  /*
  char group[2];
  group[0] = content[0];
  group[1] = content[1];
  int result = (int) strtol(group, NULL, 16);
  Serial.println(result);
  */
  if(initial == 0){
  //Loop through columns, read the data sent, convert to an int
    for(int i = 0; i < 200; i++)
    {
      for(int j = 0; j < 8; j++)
      {
        if(Serial.available() > 0){
          character = Serial.read();
        }        
        byte first = serialReadHexDigit(character);
        
        if(Serial.available() > 0){
          character = Serial.read();
        }        
        byte second = serialReadHexDigit(character);
        
        if (first < 0 || second < 0) {
            Serial.print("Invalid hex character sent, check the message at line ");  // an invalid hex character was encountered
            Serial.print(i*j + j);
        } else {
            result[i][j] = (first * 16) + second;
        }
      }
    }
    initial = 1;
  }
  for(int i = 0; i < 200; i++)
  {
    printColumn(i);
  }
}

//i is the current LED within a group we're controlling 
//(needs to go from 0-7 to control an entire row) 
//j is the current group we're trying to control
void printColumn(int col)
{
  int val = 0;
  for(int i = 0; i < 8; i++)
  {
    for(int j = 0; j < 8; j++)
    {
      val = ((result[col][j] >> i) & 1);
      if(val == 1)
        lightControl(j, i);
    }
    delayMicroseconds(100);
  }  
}

//group is the group number we're going to control
//value is a number from 0-7 which specifies which LED will light up
void lightControl(int group, int value)
{ 
  switch (group) {
    case 1:
      if((value & 1) > 0)
        digitalWrite(ledPin0, HIGH);
      else
        digitalWrite(ledPin0, LOW);
      if(((value>>1) & 1) > 0)
        digitalWrite(ledPin1, HIGH);
      else
        digitalWrite(ledPin1, LOW);
      if(((value>>2) & 1) > 0)
        digitalWrite(ledPin2, HIGH);
      else
        digitalWrite(ledPin2, LOW);
      digitalWrite(ledPinEN1, HIGH);
      break;
    case 2:
      if((value & 1) > 0)
        digitalWrite(ledPin3, HIGH);
      else
        digitalWrite(ledPin3, LOW);
      if(((value>>1) & 1) > 0)
        digitalWrite(ledPin4, HIGH);
      else
        digitalWrite(ledPin4, LOW);
      if(((value>>2) & 1) > 0)
        digitalWrite(ledPin5, HIGH);
      else
        digitalWrite(ledPin5, LOW);
      digitalWrite(ledPinEN2, HIGH);
      break;
    case 3:
      if((value & 1) > 0)
        digitalWrite(ledPin6, HIGH);
      else
        digitalWrite(ledPin6, LOW);
      if(((value>>1) & 1) > 0)
        digitalWrite(ledPin7, HIGH);
      else
        digitalWrite(ledPin7, LOW);
      if(((value>>2) & 1) > 0)
        digitalWrite(ledPin8, HIGH);
      else
        digitalWrite(ledPin8, LOW);
      digitalWrite(ledPinEN3, HIGH);
      break;
    case 4:
      if((value & 1) > 0)
        digitalWrite(ledPin9, HIGH);
      else
        digitalWrite(ledPin9, LOW);
      if(((value>>1) & 1) > 0)
        digitalWrite(ledPin10, HIGH);
      else
        digitalWrite(ledPin10, LOW);
      if(((value>>2) & 1) > 0)
        digitalWrite(ledPin11, HIGH);
      else
        digitalWrite(ledPin11, LOW);
      digitalWrite(ledPinEN4, HIGH);
      break;
    case 5:
      if((value & 1) > 0)
        digitalWrite(ledPin12, HIGH);
      else
        digitalWrite(ledPin12, LOW);
      if(((value>>1) & 1) > 0)
        digitalWrite(ledPin13, HIGH);
      else
        digitalWrite(ledPin13, LOW);
      if(((value>>2) & 1) > 0)
        digitalWrite(ledPin14, HIGH);
      else
        digitalWrite(ledPin14, LOW);
      digitalWrite(ledPinEN5, HIGH);
      break;
    case 6:
      if((value & 1) > 0)
        digitalWrite(ledPin15, HIGH);
      else
        digitalWrite(ledPin15, LOW);
      if(((value>>1) & 1) > 0)
        digitalWrite(ledPin16, HIGH);
      else
        digitalWrite(ledPin16, LOW);
      if(((value>>2) & 1) > 0)
        digitalWrite(ledPin17, HIGH);
      else
        digitalWrite(ledPin17, LOW);
      digitalWrite(ledPinEN6, HIGH);
      break;
    case 7:
      if((value & 1) > 0)
        digitalWrite(ledPin18, HIGH);
      else
        digitalWrite(ledPin18, LOW);
      if(((value>>1) & 1) > 0)
        digitalWrite(ledPin19, HIGH);
      else
        digitalWrite(ledPin19, LOW);
      if(((value>>2) & 1) > 0)
        digitalWrite(ledPin20, HIGH);
      else
        digitalWrite(ledPin20, LOW);
      digitalWrite(ledPinEN7, HIGH);
      break;
    case 8:
      if((value & 1) > 0)
        digitalWrite(ledPin21, HIGH);
      else
        digitalWrite(ledPin21, LOW);
      if(((value>>1) & 1) > 0)
        digitalWrite(ledPin22, HIGH);
      else
        digitalWrite(ledPin22, LOW);
      if(((value>>2) & 1) > 0)
        digitalWrite(ledPin23, HIGH);
      else
        digitalWrite(ledPin23, LOW);
      digitalWrite(ledPinEN8, HIGH);
      break;
    //default: 
      // if nothing else matches, do the default
      // default is optional
  }

}

  
