void setup()
{
  Serial.begin(9600);
  while(Serial.available()){
    Serial.read();
  }
}
void loop()
{
  Serial.write("OK");
}
