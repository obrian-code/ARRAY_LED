int timer = 100;        
int ledPins[] = { 2, 7, 4, 6,9, 5, 3,8};
int pinCount = 8;  

void setup() {
   for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    pinMode(ledPins[thisPin], OUTPUT);
   }

 }

void loop() {
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {   
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);  
    digitalWrite(ledPins[thisPin], LOW);
  }

 
  for (int thisPin = pinCount - 1; thisPin >= 0; thisPin--) {
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
    digitalWrite(ledPins[thisPin], LOW);
  }

}
