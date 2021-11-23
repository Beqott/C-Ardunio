int led=2;
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  

}

void loop() {
if(Serial.available())
{
    char gelen_bilgi=Serial.read();
    if (gelen_bilgi=='1')
    {
      digitalWrite(led,HIGH);
    }
  
    else if (gelen_bilgi == "0")
    {
      digitalWrite(led,LOW);
    
    }
}
delay(100);
  
}
