void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);

  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32-C3!");
}

void loop() {
  // put your main code here, to run repeatedly:
  // this speeds up the simulation
  digitalWrite(2, HIGH);
  delay(200);
  digitalWrite(2, LOW);
  delay(200);
  digitalWrite(3, HIGH);
  delay(200);
  digitalWrite(3, LOW);
  delay(200);
}
