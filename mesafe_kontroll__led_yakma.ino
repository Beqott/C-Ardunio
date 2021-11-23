int trigPin=9;
int echoPin=10;
int kirmizi =2,mavi=3,sari=4,beyaz=5;
long sure,uzaklik;
int buzzer = 6;

void setup()
{
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(kirmizi,OUTPUT);
  pinMode(sari,OUTPUT);
  pinMode(mavi,OUTPUT);
  pinMode(beyaz,OUTPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  sure=pulseIn(echoPin,HIGH);
  uzaklik=(sure/2)/29.154;
  
  
  if(uzaklik <=10)
  {
    digitalWrite(kirmizi,HIGH);
    
    digitalWrite(sari,LOW);
    digitalWrite(mavi,LOW);
    digitalWrite(beyaz,LOW);
    digitalWrite(buzzer,HIGH);
    delay(10);
    
    
  }
  else if (uzaklik<=20)
    {
    digitalWrite(kirmizi,LOW);
    
    digitalWrite(sari,LOW);
    digitalWrite(mavi,LOW);
    digitalWrite(beyaz,LOW);
    digitalWrite(buzzer,HIGH);
    delay(15);
    
  }
   else if (uzaklik<=30)
    {
    digitalWrite(kirmizi,LOW);
    
    digitalWrite(sari,HIGH);
    digitalWrite(mavi,LOW);
    digitalWrite(beyaz,LOW);
    digitalWrite(buzzer,HIGH);
    delay(20);
    
  }
   else if (uzaklik<=40)
    {
    digitalWrite(kirmizi,LOW);
   
    digitalWrite(sari,LOW);
    digitalWrite(mavi,HIGH);
    digitalWrite(beyaz,LOW);
    digitalWrite(buzzer,HIGH);
    delay(30);
    
  }
  else if (uzaklik<=50)
    {
    digitalWrite(kirmizi,LOW);
    
    digitalWrite(sari,LOW);
    digitalWrite(mavi,LOW);
    digitalWrite(beyaz,HIGH);
    digitalWrite(buzzer,HIGH);
    delay(40);
    
  }
  
  else
  {
    digitalWrite(kirmizi,LOW);
    
    digitalWrite(sari,LOW);
    digitalWrite(mavi,LOW);
    digitalWrite(beyaz,LOW);
    digitalWrite(buzzer,LOW);
    
    
  }
  delay(50);
  
}
