//This project was done for the mini project competition 
//Go through Readme.md and Arduino Connections.docx for detailed information and pin connections respectively.
#include <LiquidCrystal.h>
LiquidCrystal mylcd(13,12,11,10,9,8); //mylcd(RS,E,DB4-7)
int i;
int n=0;
const byte countsend=2;
void setup() {
pinMode(5,INPUT); //connect first ir to pin 5 (to enter the room)
pinMode(7,INPUT); //connect second ir to pin 7(to exit the room)
pinMode(4,INPUT);
pinMode(3,OUTPUT);
pinMode(2,INPUT);
Serial.begin(38400);
mylcd.begin(16,2);
mylcd.setCursor(0,0);
mylcd.print("NO OF STUDENTS: ");
mylcd.setCursor(10,1);
mylcd.print("#SAS");
mylcd.setCursor(0,1);
mylcd.print(n);
}

void loop() {
  // put your main code here, to run repeatedly:
if(n<0)
if(digitalRead(5)==0)
IN();
if(digitalRead(2)==1)
{
delay(2000);
COUNT();
}

if(digitalRead(7)==0)
OUT();
if(digitalRead(4)==1)
n=0;
else
n=n;
//Serial.println(n);
 delay(150);
mylcd.setCursor(0,1); 
mylcd.print("  ");
mylcd.setCursor(0,1); 
mylcd.print(n);
//Serial.print(n);
}

void OUT(){
  for(i=1;i<100;i++){
  if(digitalRead(5)==0){
  n--;
  digitalWrite(3,HIGH);
  delay(50);
  digitalWrite(3,LOW); 
  delay(100); 
  
  break;
  }
  delay(10);
  }
  }

void IN(){
  for(i=1;i<100;i++){
  if(digitalRead(7)==0){
  n++;

    digitalWrite(3,HIGH);
  delay(50);
  digitalWrite(3,LOW); 
  delay(100); 
  
  break;
  }
  delay(10);
  }
  }

void COUNT()
{
  
  Serial.print(n); 
}
