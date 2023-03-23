int bt(15);
int led(26);
int bz(32);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(bt,INPUT);
  pinMode(led,OUTPUT);
   pinMode(bz,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(bt)){
  Serial.println("detect!!");
  digitalWrite(led,HIGH);
  digitalWrite(bz,HIGH);
}
else{
  Serial.println("notdetect!!");
  digitalWrite(led,LOW);
  digitalWrite(bz,LOW);
}
delay(1000);


//  Serial.println(digitalRead(bt));
//  delay(1000);

}
