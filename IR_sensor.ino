void setup() {
  Serial.begin(9600);

}

void loop() {
  int a=analogRead(15);
  Serial.print(a);
  Serial.print("\n");
}
