//int incomingByte;      // a variable to read incoming serial data into
char incomingByte[8];
char buf[8];
String content = "";
char character;
int result[200][8];
int index = 0;
int initial = 1;

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
  int initital = 1;
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

int serialReadHexDigit(byte c)
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
  int incoming = 0;
  while(Serial.available() > 0){
    incoming = Serial.read();  
    Serial.print("I recieved: ");
    Serial.println(incoming);
  }
  
  /*
  char group[2];
  group[0] = content[0];
  group[1] = content[1];
  int result = (int) strtol(group, NULL, 16);
  Serial.println(result);
  */
  
  //Loop through columns, read the data sent, convert to an int
    /*for(int i = 0; i < 200; i++)
    {
      for(int j = 0; j < 8; j++)
      {
        byte first = serialReadHexDigit();
        
        byte second = serialReadHexDigit();
        
        if (first < 0 || second < 0) {
            Serial.print("Invalid hex character sent, check the message at line " + (i * j + j));  // an invalid hex character was encountered
        } else {
            result[i][j] = (first * 16) + second;
        }
        //Serial.print("result is: " + result[i][j]);
      }
    }*/
}
int h2i(String input)
{
  if(input == "")
    Serial.println("input is blank");
  Serial.println("Input is: " + input);
  int total = 0;
  String check = "";
  int temp = 0;
  for(int i = 0; i < input.length(); i++)
  {
    check = input.substring(i,i+1);
    if(check == "0")
      temp = 0;
    else if(check == "2")
      temp = 2;
    else if(check == "3")
      temp = 3;
    else if(check == "4")
      temp = 4;
    else if(check == "5")
      temp = 5;
    else if(check == "6")
      temp = 6;
    else if(check == "7")
      temp = 7;
    else if(check == "8")
      temp = 8;
    else if(check == "9")
      temp = 9;
    else if(check == "A")
      temp = 10;
    else if(check == "B")
      temp = 11;
    else if(check == "C")
      temp = 12;
    else if(check == "D")
      temp = 13;
    else if(check == "E")
      temp = 14;
    else if(check == "F")
      temp = 15;
    total += temp*(pow(16,i));
  }
  Serial.println("Total is: " + total);
  return total;      
      
}
int x2i(char *s) 
{
  int x = 0;
  for(;;) {
    char c = *s;
    if (c >= '0' && c <= '9') {
      x *= 16;
      x += c - '0'; 
    }
    else if (c >= 'A' && c <= 'F') {
      x *= 16;
      x += (c - 'A') + 10; 
    }
    else break;
    s++;
  }
  return x;
}
  
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

  
