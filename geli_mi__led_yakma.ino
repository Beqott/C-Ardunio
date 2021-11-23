int mavi_led=2;
int beyaz_led=3;
int kirmizi_led=4;
int sari_led=5;
void setup() {
  
  pinMode(mavi_led,OUTPUT);
  pinMode(beyaz_led,OUTPUT);
  pinMode(kirmizi_led,OUTPUT);
  pinMode(sari_led,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  
if(Serial.available())
{
  char gelen_bilgi=Serial.read();
  if(gelen_bilgi=='1')
  digitalWrite(mavi_led,HIGH);
  else if(gelen_bilgi=='2')
  digitalWrite(mavi_led,LOW);
  else if(gelen_bilgi=='3')
  digitalWrite(beyaz_led,HIGH);
  else if(gelen_bilgi=='4')
  digitalWrite(beyaz_led,LOW);
  else if(gelen_bilgi=='5')
  digitalWrite(kirmizi_led,HIGH);
  else if(gelen_bilgi=='6')
  digitalWrite(kirmizi_led,LOW);
  else if(gelen_bilgi=='7')
  digitalWrite(sari_led,HIGH);
  else if(gelen_bilgi=='8')
  digitalWrite(sari_led,LOW);
  else if (gelen_bilgi=='0')
  {
  digitalWrite(kirmizi_led,LOW);
  digitalWrite(sari_led,LOW);
  digitalWrite(mavi_led,LOW);
  digitalWrite(beyaz_led,LOW);
  }
  delay(100);
}


}
