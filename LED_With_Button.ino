#define RED_LED 8
#define BUTTON 7
void setup()
{
	pinMode(RED_LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop()
{
  if(digitalRead(BUTTON)==HIGH){
    digitalWrite(RED_LED,HIGH);
  }else{
    digitalWrite(RED_LED,LOW);
  }
}
