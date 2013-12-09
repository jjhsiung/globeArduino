String content = "";
char character;
void setup()
{
  Serial.begin(9600);
  while(Serial.available()){
    Serial.read();
  }
}

void loop()
{
  if(Serial.peek() == '#'){
    Serial.read();
    while(Serial.peek() != '*'){
      while(Serial.peek() == '.'){
        Serial.read();
      }
      Serial.read();
      while(Serial.available() < 17){
      }
      for(int a = 0; a < 16; a++){
        character = Serial.read();
        content.concat(character);
      }
      Serial.println(content); 
      while(Serial.available() > 0){
        Serial.read();
      }
      while(Serial.peek() != '.'){
        Serial.println("O");
      }
    }
  }
}


