#include<Servo.h>
int row=5,column=5,array[5][5]={{0,1,0,0,0},{0,1,0,0,0},{0,1,0,0,0},{0,1,0,0,0},{0,1,0,0,0}},proximity=13,top[5][5],bottom[5][5],left[5][5],right[5][5],i,j,possiblelocation[5][5],top,bottom,left,right;
Servo servol,servor;
void setup() {
  Serial.begin(9600);
  servol.attach(11);
  servor.attach(12);
  for(i=0;i<column;i++){
    top[0][i]=0;
    bottom[4][i]=0;
  }
  for(i=0;i<row;i++){
    left[i][0]=0;
    right[i][4]=0;
    for(j=0;j<column;j++){
      possiblelocation[i][j]=1;
    }
  }
  for(i=1;i<row;i++){
    for(j=0;j<column;j++){
      if(array[i-1][j]==1)
      top[i][j]==1;
      else
      top[i][j]==0;
    }
  }
  for(i=0;i<row-1;i++){
    for(j=0;j<column;j++){
      if(array[i+1][j]==1)
      bottom[i][j]==1;
      else
      bottom[i][j]==0;
    }
  }
  for(i=0;i<row;i++){
    for(j=1;j<column;j++){
      if(array[i][j-1]==1)
      left[i][j]==1;
      else
      left[i][j]==0;
    }
  }
  for(i=0;i<row;i++){
    for(j=0;j<column-1;j++){
      if(array[i][j+1]==1)
      right[i][j]==1;
      else
      right[i][j]==0;
    }
  }
}
void loop() {
  top=analogRead(proximity);
  delay(100);
  servor.write(//angle);//put angle value depending on radius of wheel used
  delay(100);
  left=analogRead(proximity);
  servor.write(
}
