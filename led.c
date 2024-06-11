// Pin connected to LED
const int ledPin = 13;

void setup() {
  // Initialize the digital pin as an output.
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on (Note that LOW is the voltage level
  // but actually the LED is on; this is because it
  // is acive low on the ESP-01)
  digitalWrite(ledPin, HIGH);

  // Wait for a second
  delay(1000);

  // Turn the LED off by making the voltage LOW
  digitalWrite(ledPin, LOW);

   // Wait for a second
  delay(1000);
}
