int m1=8;
int m2=9;
int m3=10;
int m4=11;
int a1=4;
int a2=3;
int a3=2;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
void forward();
void forward();
void right();
void left();
void halt();
void setup() {
  // put your setup code here, to run once:
pinMode(m1,OUTPUT);
pinMode(m2,OUTPUT);
pinMode(m3,OUTPUT);
pinMode(m4,OUTPUT);
pinMode(a1,INPUT);
pinMode(a2,INPUT);
pinMode(a3,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int b1,b2,b3;
  b1=digitalRead(a1);
  b2=digitalRead(a2);
  b3=digitalRead(a3);
if(b1==0 && b2==1 && b3==0)
{
  forward();
}
if(b1==1 && b2==1 && b3==0)
{
 left(); 
}
if(b1==0 && b2==1 && b3==1)
{
right();
}
else
{
halt();
}
}
void forward()
{
digitalWrite(m1,HIGH);
digitalWrite(m2,LOW);
digitalWrite(m3,HIGH);
digitalWrite(m4,LOW);
delay(100);//forward
  
}
void right()
{
digitalWrite(m1,LOW);
digitalWrite(m2,LOW);
digitalWrite(m3,HIGH);
digitalWrite(m4,LOW);
delay(100);//right
  
}
void left()
{
digitalWrite(m1,HIGH);
digitalWrite(m2,LOW);
digitalWrite(m3,LOW);
digitalWrite(m4,LOW);
delay(100);//left
}
void halt()
{
digitalWrite(m1,LOW);
digitalWrite(m2,LOW);
digitalWrite(m3,LOW);
digitalWrite(m4,LOW);
delay(100);//left
  
}
