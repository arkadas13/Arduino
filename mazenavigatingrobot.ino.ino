int rows,columns;
void setup() {
  Serial.begin(9600);
  delay(10000);
  while(Serial.available()==0){}
    rows=Serial.read();
  while(Serial.available()==0){}
    columns=Serial.read();
}

void loop() {
  Serial.print(rows,DEC);
  Serial.print('\n');
  Serial.print(columns,DEC);
  Serial.print('\n');
  delay(1000);
}
