int nl1,el1,sl1,wl1,nl2,el2,sl2,wl2,ldrprevm1,ldrnextm1,ldrlevelprevm2,ldrlevelnextm2,flagm1=0,flagm2=0,i,enable1=13,enable2=2,a1=8,b1=9,c1=10,d1=11,a2=3,b2=4,c2=5,d2=6;
void setup() {
  Serial.begin(9600);
  pinMode(a1,OUTPUT);
  pinMode(b1,OUTPUT);
  pinMode(c1,OUTPUT);
  pinMode(d1,OUTPUT);
  pinMode(enable1,OUTPUT);
  pinMode(enable2,OUTPUT);
  pinMode(a2,OUTPUT);
  pinMode(b2,OUTPUT);
  pinMode(c2,OUTPUT);
  pinMode(d2,OUTPUT);
  digitalWrite(enable1,HIGH);
  digitalWrite(enable2,HIGH);
}

void loop() {
  nl1=analogRead(0);
  el1=analogRead(1);
  sl1=analogRead(2);
  wl1=analogRead(3);
  nl2=analogRead(4);
  el2=analogRead(5);
  sl2=analogRead(6);
  wl2=analogRead(7);
  while(flagm1==0 || flagm2==0){
    if(Serial.available()>0){
      if(flagm1==0){
        ldrprevm1=Serial.read()-48;
        flagm1=1;
      }
      else{
        ldrlevelprevm2=Serial.read()-48;
        flagm2=1;
      }
    }
  }
 Serial.print(ldrprevm1);
 Serial.print(ldrlevelprevm2);
 Serial.print('\n');
 Serial.print(nl1);
 Serial.print('\t');
 Serial.print(el1);
 Serial.print('\t');
 Serial.print(sl1);
 Serial.print('\t');
 Serial.print(wl1);
 Serial.print('\t');
 Serial.print(nl2);
 Serial.print('\t');
 Serial.print(el2);
 Serial.print('\t');
 Serial.print(sl2);
 Serial.print('\t');
 Serial.print(wl2);
 Serial.print('\t');
 delay(1000);
 Serial.print('\n');
 if(nl1>=400 || el1>=400 || sl1>=400 || wl1>=400 || nl2>=400 || el2>=400 || sl2>=400 || wl2>=400){
  if(nl1>el1 && nl1>sl1&& nl1>wl1&& nl1>el2 && nl1>sl2&& nl1>wl2&& nl1>nl2){
    ldrnextm1=1;
    ldrlevelnextm2=1;
  }
  else if (el1>nl1 && el1>sl1&& el1>wl1&& el1>el2 && el1>sl2&& el1>wl2&& el1>nl2){
    ldrnextm1=2;
    ldrlevelnextm2=1;
  }
  else if(sl1>nl1 && sl1>el1 && sl1>wl1&& sl1>el2 && sl1>sl2&& sl1>wl2&& sl1>nl2){
    ldrnextm1=3;
    ldrlevelnextm2=1;
  }
  else if (wl1>nl1 && wl1>el1 && wl1>sl1&& wl1>el2 && wl1>sl2&& wl1>wl2&& wl1>nl2){
    ldrnextm1=4;
    ldrlevelnextm2=1;
  }

  else if( nl2>el2 && nl2>sl2 && nl2>wl2 && nl2>el1 && nl2>sl1&& nl2>wl1 && nl2>nl1){
    ldrnextm1=1;
    ldrlevelnextm2=2;
  }
  else if (el2>nl2 && el2>sl2 && el2>wl2 && el2>el1 && el2>sl1 && el2>wl1 && el2>nl1){
    ldrnextm1=2;
    ldrlevelnextm2=2;
  }
  else if (sl2>nl2 && sl2>el2 && sl2>wl2 && sl2>el1 &&  sl2>sl1 && sl2>wl1 && sl2>nl1){
    ldrnextm1=3;
    ldrlevelnextm2=2;
  }
  else if (wl2>nl2  && wl2>el2 && wl2>sl2 && wl2>el1 && wl2>sl1&& wl2>wl1 && wl2>nl1){
    ldrnextm1=4;
    ldrlevelnextm2=2;
  }
  else{
    ldrlevelnextm2=3; 
  }
  if(ldrlevelnextm2==3){
    if(ldrlevelprevm2==1)
      for(i=0;i<3;i++)
      clockwisem2();
    else if(ldrlevelprevm2==2)
      for(i=0;i<2;i++)
      clockwisem2();
  }
  else if(ldrlevelnextm2==2){
    if(ldrlevelprevm2==1)
      for(i=0;i<2;i++)
      clockwisem2();
    else if(ldrlevelprevm2==3)
      for(i=0;i<2;i++)
      anticlockwisem2();
  }
  else if(ldrlevelnextm2==1){
    if(ldrlevelprevm2==2)
      for(i=0;i<2;i++)
      anticlockwisem2();
    else if(ldrlevelprevm2==3)
      for(i=0;i<3;i++)
      anticlockwisem2();
  }
  if(ldrnextm1==1){
    if(ldrprevm1==2)
      for(i=0;i<3;i++)
      anticlockwisem1();
    else if(ldrprevm1==3)
      for(i=0;i<6;i++)
      anticlockwisem1();
    else if(ldrprevm1==4)
      for(i=0;i<3;i++)
      clockwisem1();
  }
  else if(ldrnextm1==2){
    if(ldrprevm1==3)
      for(i=0;i<3;i++)
      anticlockwisem1();
    else if(ldrprevm1==4)
      for(i=0;i<6;i++)
      anticlockwisem1();
    else if(ldrprevm1==1)
      for(i=0;i<3;i++)
      clockwisem1();
  }
  else if(ldrnextm1==3){
    if(ldrprevm1==4)
      for(i=0;i<3;i++)
      anticlockwisem1();
    else if(ldrprevm1==1)
      for(i=0;i<6;i++)
      anticlockwisem1();
    else if(ldrprevm1==2)
      for(i=0;i<3;i++)
      clockwisem1();
  }
  else if(ldrnextm1==4){
    if(ldrprevm1==1)
      for(i=0;i<3;i++)
      anticlockwisem1();
    else if(ldrprevm1==2)
      for(i=0;i<6;i++)
      anticlockwisem1();
    else if(ldrprevm1==3)
      for(i=0;i<3;i++)
      clockwisem1();
  }
  ldrprevm1=ldrnextm1;
  ldrlevelprevm2=ldrlevelnextm2;
}
}

void anticlockwisem1(){
  digitalWrite(a1,LOW);
  digitalWrite(d1,LOW);
  digitalWrite(b1,LOW);
  digitalWrite(c1,HIGH);
  delay(500);
   digitalWrite(d1,LOW);
  digitalWrite(c1,LOW);
  digitalWrite(b1,LOW);  
  digitalWrite(a1,HIGH);
  delay(500);
    digitalWrite(a1,LOW);
  digitalWrite(b1,LOW);
  digitalWrite(c1,LOW);  
  digitalWrite(d1,HIGH);
  delay(500);
  digitalWrite(d1,LOW);
  digitalWrite(c1,LOW);
  digitalWrite(a1,LOW);  
  digitalWrite(b1,HIGH);
  delay(500);

}

void clockwisem1(){
   digitalWrite(d1,LOW);
  digitalWrite(c1,LOW);
  digitalWrite(a1,LOW);  
  digitalWrite(b1,HIGH);
  delay(500);
  digitalWrite(a1,LOW);
  digitalWrite(b1,LOW);
  digitalWrite(c1,LOW);  
  digitalWrite(d1,HIGH);
  delay(500);
   digitalWrite(d1,LOW);
  digitalWrite(c1,LOW);
  digitalWrite(b1,LOW);  
  digitalWrite(a1,HIGH);
  delay(500);
  digitalWrite(a1,LOW);
  digitalWrite(d1,LOW);
  digitalWrite(b1,LOW);
  digitalWrite(c1,HIGH);
  delay(500);
}

void clockwisem2(){
 digitalWrite(a2,LOW);
  digitalWrite(d2,LOW);
  digitalWrite(b2,LOW);
  digitalWrite(c2,HIGH);
  delay(500);
  digitalWrite(d2,LOW);
  digitalWrite(c2,LOW);
  digitalWrite(b2,LOW);  
  digitalWrite(a2,HIGH);
  delay(500);
  digitalWrite(a2,LOW);
  digitalWrite(b2,LOW);
  digitalWrite(c2,LOW);  
  digitalWrite(d2,HIGH);
  delay(500);
  digitalWrite(d2,LOW);
  digitalWrite(c2,LOW);
  digitalWrite(a2,LOW);  
  digitalWrite(b2,HIGH);
  delay(500);
}

void anticlockwisem2(){
  digitalWrite(d2,LOW);
  digitalWrite(c2,LOW);
  digitalWrite(a2,LOW);  
  digitalWrite(b2,HIGH);
  delay(500);
  digitalWrite(a2,LOW);
  digitalWrite(b2,LOW);
  digitalWrite(c2,LOW);  
  digitalWrite(d2,HIGH);
  delay(500);
   digitalWrite(d2,LOW);
  digitalWrite(c2,LOW);
  digitalWrite(b2,LOW);  
  digitalWrite(a2,HIGH);
  delay(500);
  digitalWrite(a2,LOW);
  digitalWrite(d2,LOW);
  digitalWrite(b2,LOW);
  digitalWrite(c2,HIGH);
  delay(500);
}
