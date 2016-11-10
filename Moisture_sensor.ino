void setup() {
  Serial.begin(9600);
}

void loop() {
  int a=analogRead(14);
  Serial.print(a);
  Serial.print('\n');
  delay(1000);
}
