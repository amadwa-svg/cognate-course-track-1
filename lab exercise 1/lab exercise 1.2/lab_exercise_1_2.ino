void setup() {
 
  for (int pin = 2; pin <= 12; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
 
  for (int i = 0; i <= 5; i++) {
    int leftPin = 2 + i;
    int rightPin = 12 - i;
   
   
    digitalWrite(leftPin, HIGH);
    digitalWrite(rightPin, HIGH);
    delay(150);
   
 
    digitalWrite(leftPin, LOW);
    digitalWrite(rightPin, LOW);
  }

 
  for (int i = 4; i >= 1; i--) {
    int leftPin = 2 + i;
    int rightPin = 12 - i;
   
    digitalWrite(leftPin, HIGH);
    digitalWrite(rightPin, HIGH);
    delay(150);
   
    digitalWrite(leftPin, LOW);
    digitalWrite(rightPin, LOW);
  }
 
 
}