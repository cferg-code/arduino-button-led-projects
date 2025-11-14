int const buttonPin = 7;
void setup() {
	pinMode(13, OUTPUT);
  	pinMode(12, OUTPUT);
  	pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  if(buttonState == HIGH) {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
  } else {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
  }
}
