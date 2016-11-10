int A=11,B=10,C=9,D=8,e=13;
void setup() {
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(e,OUTPUT);
}

void loop() {
  digitalWrite(e,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(D,LOW);
  digitalWrite(A,LOW);
  digitalWrite(C,HIGH);
  delay(500);
  digitalWrite(A,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  digitalWrite(B,HIGH);
  delay(500);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  digitalWrite(A,HIGH);
  delay(500);
  digitalWrite(A,LOW);
  digitalWrite(C,LOW);
  digitalWrite(B,LOW);
  digitalWrite(D,HIGH);
  delay(500);

}
