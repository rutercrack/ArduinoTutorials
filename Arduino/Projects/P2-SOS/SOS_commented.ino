
// SOS: Distress Signal

/*
Description: Morse code generator. It sends a message of S.O.S in morse code using a led.
SOS: . . . _ _ _ . . . 
*/

int ledPin = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  SIterator();
  delay(100);
  OIterator();
  delay(100);
  SIterator();
  delay(5000);
}

void SIterator(){
  for(int x = 0; x<3; x++){
    digitalWrite(ledPin, HIGH);
    delay(150);
    digitalWrite(ledPin, LOW);
    delay(100);
  }
}

void OIterator(){
  for (int x = 0; x<3; x++){
    digitalWrite(ledPin, HIGH);
    delay(400);
    digitalWrite(ledPin, LOW);
    delay(100);
  }
}

