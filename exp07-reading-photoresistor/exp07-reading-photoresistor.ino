// Automatic Night Light
const int WLED = PA0;       // White LED Anode on pin PA0 (PWM)
const int LIGHT = PA1;      // Light Sensor on Analog Pin PA1
const int MIN_LIGHT = 200;  // Minimum Expected light value
const int MAX_LIGHT = 900;  // Maximum Expected Light value

int val = 0;  // Variable to hold the analog reading
void setup() {
  pinMode(WLED, OUTPUT);  // Set White LED pin as output
}
void loop() {
  val = analogRead(LIGHT);                       // Read the light level from the sensor
  val = map(val, MIN_LIGHT, MAX_LIGHT, 255, 0);  // Map brightness inversely
  val = constrain(val, 0, 255);                  // Ensure brightness stays within 0–255
  analogWrite(WLED, val);                        // Set the LED brightness
}
