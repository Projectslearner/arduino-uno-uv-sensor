/*
    Project name : UV Sensor
    Modified Date: 09-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-uv-sensor
*/

const int uvPin = A0; // Analog pin connected to the UV sensor

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int uvValue = analogRead(uvPin); // Read UV sensor value
  
  // Print UV sensor value to Serial Monitor
  Serial.print("UV Sensor Value: ");
  Serial.println(uvValue);

  delay(1000); // Wait for 1 second before taking the next reading
}
