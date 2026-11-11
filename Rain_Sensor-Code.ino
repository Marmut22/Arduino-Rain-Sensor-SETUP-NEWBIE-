/*
  Rain Sensor Project - Arduino UNO
  Compatible with common FC-37 / YL-83 rain sensor modules.

  Wiring:
    Rain sensor AO  -> Arduino A0
    Rain sensor VCC -> Arduino 5V
    Rain sensor GND -> Arduino GND
    (Optional) Rain sensor DO -> Arduino D2 (not used by this sketch)
    Built-in LED    -> Arduino D13

  Open Serial Monitor at 9600 baud.
  Adjust RAIN_THRESHOLD after checking the readings in your environment.
*/

const byte RAIN_SENSOR_PIN = A0;
const byte STATUS_LED_PIN = LED_BUILTIN;

// On many modules, a lower analog reading means more water.
// Tune this threshold using the Serial Monitor readings.
const int RAIN_THRESHOLD = 700;

void setup() {
  pinMode(RAIN_SENSOR_PIN, INPUT);
  pinMode(STATUS_LED_PIN, OUTPUT);

  Serial.begin(9600);
  Serial.println(F("Arduino Rain Sensor"));
  Serial.println(F("Monitoring sensor..."));
}

void loop() {
  int sensorValue = analogRead(RAIN_SENSOR_PIN);

  // Typical FC-37/YL-83 behavior: lower value = wetter.
  bool rainDetected = (sensorValue < RAIN_THRESHOLD);

  digitalWrite(STATUS_LED_PIN, rainDetected ? HIGH : LOW);

  Serial.print(F("Analog value: "));
  Serial.print(sensorValue);
  Serial.print(F(" | Status: "));

  if (rainDetected) {
    Serial.println(F("RAIN DETECTED"));
  } else {
    Serial.println(F("NO RAIN"));
  }

  delay(500);
}
