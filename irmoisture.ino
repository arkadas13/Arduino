int opm=26, ipm=13, pin1=2, pin2=3;
void setup() {
  Serial.begin(9600);
  pinMode(opm,OUTPUT);
  pinMode(ipm,OUTPUT);
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,LOW );
}

void loop() {
  int ms=analogRead(1);
  int ir=analogRead(0);
  Serial.print(ms);
  Serial.print('\n');
  Serial.print(ir);
  Serial.print('\n');
  Serial.print('\n');
  delay(500);
  if(ms>500)
  digitalWrite(ipm,HIGH);
  else
  digitalWrite(ipm,LOW);
  if(ir<100)
  digitalWrite(ipm,LOW);
  delay(2000);
}
