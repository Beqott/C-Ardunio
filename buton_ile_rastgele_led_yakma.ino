int dugme=2;
int yesil=3;
int sari=4;
int mavi =5;
int kirmizi=6;
int numara=0;

void setup()
{
  Serial.begin(9600);
  pinMode(dugme,INPUT);
  pinMode(yesil,OUTPUT);
  pinMode(sari,OUTPUT);
  pinMode(mavi,OUTPUT);
  pinMode(kirmizi,OUTPUT);
  randomSeed(analogRead(A0));
  
}

void loop()
{
  if(digitalRead(dugme)==HIGH)
  {
    numara = random(3,7);
    Serial.print(numara);
  }
  
  
  
  switch (numara)
  {
    case 3:
    
    Serial.println(":Yesil");
    digitalWrite(yesil,HIGH);
    digitalWrite(sari,LOW);
    digitalWrite(mavi,LOW);
    digitalWrite(kirmizi,LOW);
    break;
    case 4:
    Serial.println(":Sari");
    digitalWrite(yesil,LOW);
    digitalWrite(sari,HIGH);
    digitalWrite(mavi,LOW);
    digitalWrite(kirmizi,LOW);
    break;
    case 5:
    Serial.println(":Mavi");
    digitalWrite(yesil,LOW);
    digitalWrite(sari,LOW);
    digitalWrite(mavi,HIGH);
    digitalWrite(kirmizi,LOW);
    break;
    case 6:
    Serial.println(":Kırmızı");
    digitalWrite(yesil,LOW);
    digitalWrite(sari,LOW);
    digitalWrite(mavi,LOW);
    digitalWrite(kirmizi,HIGH);
    break;
  }
}
