//ANTIclockwisem1
int a=8,b=9,c=10,d=11,u=13;
void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(u,OUTPUT);
}

void loop() {
  digitalWrite(u,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(d,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  delay(500);
   digitalWrite(d,LOW);
  digitalWrite(c,LOW);
  digitalWrite(b,LOW);  
  digitalWrite(a,HIGH);
  delay(500);
    digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);  
  digitalWrite(d,HIGH);
  delay(500);
  digitalWrite(d,LOW);
  digitalWrite(c,LOW);
  digitalWrite(a,LOW);  
  digitalWrite(b,HIGH);
  delay(500);

  

}
