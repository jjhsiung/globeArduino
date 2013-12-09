char content[16];
char character;
String result[77];
int counter = 0;
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
    for(int a = 0; a < 77; a++){
      if(a != 0){
        Serial.read();
      }

      Serial.readBytes(content, sizeof(content)); //Read the 16 bytes that we need
      result[a] = content;
      
      Serial.read();
    }

    for(int a = 0; a < 77; a++){
      Serial.println(result[a]);
    }
  }
}

















