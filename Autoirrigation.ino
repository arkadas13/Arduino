int moisturesensor=13,ldr=12,dcmotor1=22,dcmotor2=23,moisture,light,transistor1=24,transistor2=25;
void setup() {
  pinMode(dcmotor1,OUTPUT);
  pinMode(dcmotor2,OUTPUT);
  pinMode(transistor1,OUTPUT);
  pinMode(transistor2,OUTPUT);
}

void loop() {
  light=analogRead(ldr);
  moisture=analogRead(moisturesensor);
  if(light>

}
