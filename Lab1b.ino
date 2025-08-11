const int buttonPin = 8;  
const int ledPin = 13;    

void setup()
{
  pinMode(buttonPin, INPUT_PULLUP); 
  pinMode(ledPin, OUTPUT);         
}

void loop()
{
  if (digitalRead(buttonPin) == LOW) {
    digitalWrite(ledPin, HIGH); 
  } else {
    digitalWrite(ledPin, LOW); 
  }
}