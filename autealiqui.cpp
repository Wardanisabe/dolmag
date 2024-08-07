void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud
}

void loop() {
  // Example of printing the controller status
  Serial.print(F("Controller status: "));

  // Suppose 'status' is a variable holding the current status
  int status = 1; // Example status value
  Serial.println(status); // Print the status value

  delay(1000); // Wait for 1 second before repeating
}
