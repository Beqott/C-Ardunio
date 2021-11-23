
int LEDdizisi[] = {2,3,4,5,6,7};
void setup()
{
   for(int i = 0;i<6;i++)
 {
   pinMode(LEDdizisi[i],OUTPUT);
 }
       
}

void loop()
{
for(int i=0;i<6;i=i+2)
{
  digitalWrite(LEDdizisi[i],HIGH);
  delay(2000);
  digitalWrite(LEDdizisi[i],LOW);
  
}
  
    for (int j=5;j>-1;j=j-2)
  { 
  digitalWrite(LEDdizisi[j],HIGH);
  delay(2000);
  digitalWrite(LEDdizisi[j],LOW);
  }
}
