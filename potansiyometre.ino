int a0_digital_deger = 0;
int kirmizi_led= 2;
int sari_led= 3;
int yesil_led= 4;
int beyaz_led= 5;


void setup()
{
  pinMode(A0,INPUT);
  pinMode(kirmizi_led,OUTPUT);
  pinMode(sari_led,OUTPUT);
  pinMode(yesil_led,OUTPUT);
  pinMode(beyaz_led,OUTPUT);
  Serial.begin(9600);
  
  
}

void loop()
    {
    a0_digital_deger=analogRead(A0);
    Serial.println(a0_digital_deger);
    if(a0_digital_deger<= 200)
    {
      digitalWrite(kirmizi_led,HIGH);
      digitalWrite(sari_led,LOW);
      digitalWrite(yesil_led,LOW);
      digitalWrite(beyaz_led,LOW);
    }
  
    else if (a0_digital_deger<= 400)
    {
      
      digitalWrite(kirmizi_led,LOW);
      digitalWrite(sari_led,HIGH);
      digitalWrite(yesil_led,LOW);
      digitalWrite(beyaz_led,LOW);
    }
  
  
    else if (a0_digital_deger<= 600)
    {
      
      digitalWrite(kirmizi_led,LOW);
      digitalWrite(sari_led,LOW);
      digitalWrite(yesil_led,HIGH);
      digitalWrite(beyaz_led,LOW);
 
    }
    else if (a0_digital_deger<= 800)
    {
      digitalWrite(kirmizi_led,LOW);
      digitalWrite(sari_led,LOW);
      digitalWrite(yesil_led,LOW);
      digitalWrite(beyaz_led,HIGH);
    }
    else
    { 
      digitalWrite(kirmizi_led,HIGH);
      digitalWrite(sari_led,HIGH);
      digitalWrite(yesil_led,HIGH);
      digitalWrite(beyaz_led,HIGH);
    }
    delay(1000);
 
}
