int R =12;
int G =13;
int B =14;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
   pinMode(B,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(R,HIGH);
delay(1000);
digitalWrite(R,LOW);
digitalWrite(G,HIGH);
delay(1000);
digitalWrite(G,LOW);
digitalWrite(B,HIGH);
delay(1000);
digitalWrite(B,LOW);
//  Serial.println(digitalRead(bt));
//  delay(1000);

}
