void setup() {
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  pinMode(5, OUTPUT);
}

void loop() {
  digitalWrite(5, HIGH);
  delay(10);
}