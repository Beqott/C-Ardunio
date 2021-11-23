int yesil=2,mavi=3,kirmizi=4;


void setup()
{
 Serial.begin(9600);
  pinMode(yesil,OUTPUT);
  pinMode(mavi,OUTPUT);
  pinMode(kirmizi,OUTPUT);
  
}

void loop()
{
 int ldr_sensor_deger=analogRead(A0);
 Serial.println(ldr_sensor_deger);
 if (ldr_sensor_deger <= 10)
 {
  digitalWrite(kirmizi,LOW);
  digitalWrite(yesil,HIGH);
  delay(1000);
  digitalWrite(yesil,LOW);
  digitalWrite(mavi,HIGH);
  delay(1000);
  digitalWrite(mavi,LOW);
  digitalWrite(kirmizi,HIGH);
  delay(1000);
 }
 else
 {
  digitalWrite(kirmizi,LOW);
  digitalWrite(yesil,LOW);
  
  digitalWrite(mavi,LOW);
  
 }
  delay(500);
}
  
