#define RED_LED 8
#define BUTTON 7
#define DEBOUNCE_DELAY 100 


int buttonState = LOW;
int lastButtonState = LOW;


unsigned long lastDebounceTime = 0;

void setup()
{
  pinMode(RED_LED, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP); 
}

void loop()
{
  int reading = digitalRead(BUTTON);

  
  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

 
  if ((millis() - lastDebounceTime) > DEBOUNCE_DELAY) {
    
    if (reading != buttonState) {
      buttonState = reading;

      
      digitalWrite(RED_LED, buttonState == LOW ? HIGH : LOW);  
    }
  }

  
  lastButtonState = reading;
}
