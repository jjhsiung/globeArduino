char stuff[18];
char character;
int newData = 0, dataCounter, initialized = 0, hexCounter, magnetDisabled = 0;
String delayString = "";
int delayBetweenColumns = 100;
unsigned long duration;
const int NUM_OF_COLUMNS = 77;
int result[NUM_OF_COLUMNS][8];
String dirtyContent[NUM_OF_COLUMNS];
String cleanedContent[NUM_OF_COLUMNS];
int hexNumbers[NUM_OF_COLUMNS][16];
//group 1
int ledPin0 = 13;                 // LED connected to digital pin 13
int ledPin1 = 12;                 // LED connected to digital pin 13
int ledPin2 = 11;                 // LED connected to digital pin 13t
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
int ledPin12 = 18;                 // LED connected to digital pin 13
int ledPin13 = 19;                 // LED connected to digital pin 13
int ledPin14 = 20;                 // LED connected to digital pin 13
int ledPinEN5 = 21;
//group 6
int ledPin15 = 48;                 // LED connected to digital pin 13
int ledPin16 = 49;                 // LED connected to digital pin 13
int ledPin17 = 50;                 // LED connected to digital pin 13
int ledPinEN6 = 51;
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
  while(Serial.available()){
    Serial.read();
  }
  pinMode(ledPin0, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin1, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin2, OUTPUT);      // sets the digital pin as output
  pinMode(ledPinEN1, OUTPUT);      // sets the digital pin as output

  pinMode(ledPin3, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin4, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin5, OUTPUT);      // sets the digital pin as output
  pinMode(ledPinEN2, OUTPUT);      // sets the digital pin as output

  pinMode(ledPin6, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin7, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin8, OUTPUT);      // sets the digital pin as output
  pinMode(ledPinEN3, OUTPUT);      // sets the digital pin as output

  pinMode(ledPin9, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin10, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin11, OUTPUT);      // sets the digital pin as output
  pinMode(ledPinEN4, OUTPUT);      // sets the digital pin as output

  pinMode(ledPin12, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin13, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin14, OUTPUT);      // sets the digital pin as output
  pinMode(ledPinEN5, OUTPUT);      // sets the digital pin as output

  pinMode(ledPin15, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin16, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin17, OUTPUT);      // sets the digital pin as output
  pinMode(ledPinEN6, OUTPUT);      // sets the digital pin as output

  pinMode(ledPin18, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin19, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin20, OUTPUT);      // sets the digital pin as output
  pinMode(ledPinEN7, OUTPUT);      // sets the digital pin as output

  pinMode(ledPin21, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin22, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin23, OUTPUT);      // sets the digital pin as output
  pinMode(ledPinEN8, OUTPUT);      // sets the digital pin as output

}

String cleaningContent(String dirtyContent){
  String cleanContent = "";
  for(int a = 0; a < dirtyContent.length(); a++)
  {
    if(isxdigit(dirtyContent[a])){
      cleanContent.concat(dirtyContent[a]);
    }
  }
  return cleanContent;
}

int serialReadHexDigit(char c)
{
  if (c >= '0' && c <= '9') {
    return c - '0';
  } 
  else if (c >= 'a' && c <= 'f') {
    return c - 'a' + 10;
  } 
  else if (c >= 'A' && c <= 'F') {
    return c - 'A' + 10;
  } 
  else {
    return -1;   // getting here is bad: it means the character was invalid
  }
}

void loop()
{
  if(newData == 1){
    //Loop through columns, read the data sent, convert to an int
    for(int i = 0; i < NUM_OF_COLUMNS; i++)
    {
      cleanedContent[i] = cleaningContent(dirtyContent[i]);
      hexCounter = 0;
      for(int j = 0; j < 8; j++)
      {
        int first = serialReadHexDigit(cleanedContent[i][hexCounter]);
        hexCounter++;
        int second = serialReadHexDigit(cleanedContent[i][hexCounter]);
        hexCounter++;
        if (first < 0 || second < 0) {
        } 
        else {
          result[i][j] = (first * 16) + second;
        }
      }
    }
    newData = 0;
    initialized = 1;
  }

  if(initialized == 1){
    for(int i = 0; i < 77; i++)
    {  
      printColumn(i);
      delayMicroseconds(delayBetweenColumns - duration);
    }
  }
}

void serialEvent() {
  character = Serial.peek();
  if(character == '%' && (magnetDisabled == 0)){
    Serial.read();
    while(Serial.available() <= 0){
    }
    character = Serial.read();
    if(character == '%'){
      while(Serial.available() > 0){
        character = Serial.read();
        delayString.concat(character);
      }
      delayBetweenColumns = delayString.toInt();
      delayString = "";
    }
  }
  else if((character == '#' || character == '.') && (newData == 0)){
    initialized = 0;
    magnetDisabled = 1;    
    Serial.readBytes(stuff, sizeof(stuff));
    Serial.println(stuff);
    dirtyContent[dataCounter] = stuff;
    dataCounter++;
    if(dataCounter == NUM_OF_COLUMNS){
      newData = 1;
      dataCounter = 0;
      magnetDisabled = 0;
    }
  }
}

//i is the current LED within a group we're controlling 
//(needs to go from 0-7 to control an entire row) 
//j is the current group we're trying to control
void printColumn(int col)
{ 
  unsigned long start = micros();
  int holder = 0;
  for(int i = 0; i < 8; i++)
  {
    for(int j = 0; j < 8; j++)
    {
      if(result[col][j] == 0)
        lightControl(j+1,0,0);
      else{
        holder = (result[col][j] >> i) & 1;
        if(holder == 1)
        {
          lightControl(j+1,7-i,1);
        }
      }
    }
    delayMicroseconds(20);
  }  
  digitalWrite(ledPinEN1, LOW);
  digitalWrite(ledPinEN2, LOW);
  digitalWrite(ledPinEN3, LOW);
  digitalWrite(ledPinEN4, LOW);
  digitalWrite(ledPinEN5, LOW);
  digitalWrite(ledPinEN6, LOW);
  digitalWrite(ledPinEN7, LOW);
  digitalWrite(ledPinEN8, LOW);
  unsigned long finish = micros();
  duration = finish - start;
}

//group is the group number we're going to control
//value is a number from 0-7 which specifies which LED will light up
//allOff will disable the group
void lightControl(int group, int value, int allOff)
{ 
  switch (group) {
  case 1:
    digitalWrite(ledPin0, value & 1);
    digitalWrite(ledPin1, (value>>1) & 1);
    digitalWrite(ledPin2, (value>>2) & 1);
    digitalWrite(ledPinEN1, allOff);       
    break;
  case 2:
    digitalWrite(ledPin3, value & 1);
    digitalWrite(ledPin4, (value>>1) & 1);
    digitalWrite(ledPin5, (value>>2) & 1);
    digitalWrite(ledPinEN2, allOff);
    break;
  case 3:
    digitalWrite(ledPin6, value & 1);
    digitalWrite(ledPin7, (value>>1) & 1);
    digitalWrite(ledPin8, (value>>2) & 1);
    digitalWrite(ledPinEN3, allOff);
    break;
  case 4:
    digitalWrite(ledPin9, value & 1);
    digitalWrite(ledPin10, (value>>1) & 1);
    digitalWrite(ledPin11, (value>>2) & 1);
    digitalWrite(ledPinEN4, allOff); 
    break;
  case 5:
    digitalWrite(ledPin12, value & 1);
    digitalWrite(ledPin13, (value>>1) & 1);
    digitalWrite(ledPin14, (value>>2) & 1);
    digitalWrite(ledPinEN5, allOff);
    break;
  case 6:
    digitalWrite(ledPin15, value & 1);
    digitalWrite(ledPin16, (value>>1) & 1);
    digitalWrite(ledPin17, (value>>2) & 1);
    digitalWrite(ledPinEN6, allOff);
    break;
  case 7:
    digitalWrite(ledPin18, value & 1);
    digitalWrite(ledPin19, (value>>1) & 1);
    digitalWrite(ledPin20, (value>>2) & 1);
    digitalWrite(ledPinEN7, allOff);   
    break;
  case 8:
    digitalWrite(ledPin21, value & 1);
    digitalWrite(ledPin22, (value>>1) & 1);
    digitalWrite(ledPin23, (value>>2) & 1);
    digitalWrite(ledPinEN8, allOff);    
    break;
    //default: 
    // if nothing else matches, do the default
    // default is optional
  }
}








