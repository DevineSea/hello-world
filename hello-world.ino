/*
  Hello World
   Write 'Hello World' to Serial.
 */


void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}


void loop() {
  // Write 'Hello World' to Serial:
  Serial.print('Hello World');
  delay(1000);
}
