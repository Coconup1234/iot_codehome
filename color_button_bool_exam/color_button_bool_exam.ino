int R =12;
int G =13;
int B =14;
int ct = 0;
int bt = 15;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
   pinMode(B,OUTPUT);
   pinMode(bt,INPUT);

   



}

void loop() {
  // put your main code here, to run repeatedly:

if(!digitalRead(bt)){
    ct=(ct+1);
}

if(ct == 1){
digitalWrite(R,HIGH);
delay(100);  
}

if(ct == 2){
digitalWrite(R,LOW);
digitalWrite(G,HIGH);
delay(100);  
}

if(ct ==3){
digitalWrite(G,LOW);
digitalWrite(B,HIGH);
delay(100);  
}


if(ct ==4){
digitalWrite(B,LOW);
delay(100);  
ct = 0;
}


//  Serial.println(digitalRead(bt));
//  delay(1000);

}
