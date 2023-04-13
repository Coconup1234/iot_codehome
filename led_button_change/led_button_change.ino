int th_L =10;
int th_R =15;
#define R 12
#define B 14
#define TOUCH_L 27
#define TOUCH_R 4


void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(2,OUTPUT);
digitalWrite(2,HIGH);
pinMode(R,OUTPUT);
pinMode(B,OUTPUT);
digitalWrite(R,LOW);
digitalWrite(B,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print("left"); 
Serial.print(touchRead(TOUCH_L));
Serial.print("Right");
Serial.println(touchRead(TOUCH_R));

if(touchRead(TOUCH_L)<th_L&&touchRead(TOUCH_R)>th_R)
  {digitalWrite(R,HIGH);
  digitalWrite(B,LOW);
  Serial.println("Red led on");}
  else if(touchRead(TOUCH_L)>th_L&&touchRead(TOUCH_R)<th_R){
   digitalWrite(R,LOW);
  digitalWrite(B,HIGH);
  Serial.println("BLUE led on"); 
  }
  else if(touchRead(TOUCH_L)<th_L&&touchRead(TOUCH_R)<th_R){
   digitalWrite(R,HIGH);
  digitalWrite(B,HIGH);
  Serial.println("PURPLE led on"); 
  }
  else if(touchRead(TOUCH_L)>th_L&&touchRead(TOUCH_R)>th_R)
{digitalWrite(R,LOW);
  digitalWrite(B,LOW);
}delay(500);}
