int A=13,C=12,B=11,D=10,N,S,E,W;
int threshold=600;
void setup() {
  Serial.begin(9600);
  pinMode(A,OUTPUT);
}

void loop() {
  Serial.print('N');
  Serial.print('\t');
  Serial.print('S');
  Serial.print('\t');
  Serial.print('E');
  Serial.print('\t');
  Serial.print('W');
  Serial.println();
  N=analogRead(0);
  S=analogRead(1);
  E=analogRead(2);
  W=analogRead(3);
  Serial.print(N);
  Serial.print('\t');
  Serial.print(S);
  Serial.print('\t');
  Serial.print(E);
  Serial.print('\t');
  Serial.print(W);
  Serial.println('\n');
  delay(1000);
  if(N==0 && S==0 && W==0 && E==0)
  {
  digitalWrite(B,LOW);
  digitalWrite(D,LOW);
  digitalWrite(C,LOW);
  digitalWrite(A,LOW);
  }
  else if(N<threshold){
  if(S>threshold || W>threshold){
  digitalWrite(B,LOW);
  digitalWrite(D,LOW);
  digitalWrite(C,LOW);
  digitalWrite(A,HIGH);
  delay(500);
  digitalWrite(A,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  digitalWrite(B,HIGH);
  delay(500);
  digitalWrite(B,LOW);
  digitalWrite(A,LOW);
  digitalWrite(D,LOW);
  digitalWrite(C,HIGH);
  delay(500);
  digitalWrite(A,LOW);
  digitalWrite(C,LOW);
  digitalWrite(B,LOW);
  digitalWrite(D,HIGH);
  delay(500);
  }
  else if(E>threshold){
  digitalWrite(B,LOW);
  digitalWrite(A,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,HIGH);
  delay(500);
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(D,LOW);
  digitalWrite(C,HIGH);
  delay(500);
  digitalWrite(C,LOW);
  digitalWrite(A,LOW);
  digitalWrite(D,LOW);
  digitalWrite(B,HIGH);
  delay(500);
  digitalWrite(D,LOW);
  digitalWrite(C,LOW);
  digitalWrite(B,LOW);
  digitalWrite(A,HIGH);
  delay(500);
  } 
}
}

