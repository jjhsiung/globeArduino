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
    counter = 0;
    Serial.read();
    for(int a = 0; a < 77; a++){
      if(a != 0){
        while(Serial.peek() != '.')
          Serial.findUntil(".", "\n\r"); //The first string starts with a # which we already read, successive ones start with a decimal which needs to be read
      }      
      Serial.readBytes(content, sizeof(content)); //Read the 16 bytes that we need

      Serial.println(content);
      Serial.println(Serial.peek());
      result[counter] = content;
      counter++;

      if(Serial.peek() == '.'){ //Read the last comma
        Serial.print("Working");
        Serial.read();
      }

      while(Serial.available() !=0){ //Clear out the buffer
        Serial.print("Stuck");
        Serial.read();
      }

      do{
        Serial.write('/');
      }
      while(Serial.read() != '&');
      
      }
      for(int a = 0; a < 77; a++){
        Serial.println(result[a]);
      }
  }
}














