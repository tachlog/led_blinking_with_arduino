// Set up the digital pin as an output
void setup() {
  pinMode(13, OUTPUT);
}

// Turn LED on and off repeatedly
void loop() {
  digitalWrite(13, HIGH); // Turn the LED on
  delay(1000);            // Wait for 1 second (1000 milliseconds)
  digitalWrite(13, LOW);  // Turn the LED off
  delay(1000);            // Wait for 1 second (1000 milliseconds)
}
