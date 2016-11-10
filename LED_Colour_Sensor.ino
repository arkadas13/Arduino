int red=10,green=11,blue=12,yellow=13,ldrR,ldrG,ldrB,ldrY;
void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(yellow,OUTPUT);
  Serial.begin(9600);
}

void loop() {
    digitalWrite(yellow,HIGH);
    delay(500);
    ldrY=analogRead(0);
    delay(500);
    digitalWrite(yellow,LOW);
    digitalWrite(blue,HIGH);
    delay(500);
    ldrB=analogRead(0);
    delay(500);
    digitalWrite(blue,LOW);
    digitalWrite(red,HIGH);
    delay(500);
    ldrR=analogRead(0);
    delay(500);
    digitalWrite(red,LOW);
    digitalWrite(green,HIGH);
    delay(500);
    ldrG=analogRead(0);
    delay(500);
    digitalWrite(green,LOW);
    Serial.println("RED\tBLUE\tGREEN\tYELLOW");
    Serial.print(ldrR);
    Serial.print("\t");
    Serial.print(ldrB);
    Serial.print("\t");
    Serial.print(ldrG);
    Serial.print("\t");
    Serial.print(ldrY);
    Serial.println();
}

/*note- analog read is reading 0th analogpin where LDR is. if you are using 2 LDRs then use 0 & 1 respectively.
connect one end of the LEDs to their respective digital pins of arduino as mentioned during initialization*/
