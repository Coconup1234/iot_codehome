int R = 12;
int G = 13;
int B = 14;
int freq = 5000;
int resolution = 8;
int channel = 0;
void setup() {
  // put your setup code here, to run once:
 ledcSetup(channel,freq,resolution);
 ledcAttachPin(R,channel);
 ledcSetup(channel+1,freq,resolution);
 ledcAttachPin(G,channel+1);
 ledcSetup(channel+2,freq,resolution);
 ledcAttachPin(B,channel+2);
}
//밝기조정 루프 랍니다 :)
void loop() {
  
for(int i = 0;i<3;i++){
  for(int dutyCycle = 0;dutyCycle <=255;dutyCycle++){
    ledcWrite(channel + i, dutyCycle);
    delay(10); 
//올렸다 줄였다 딜레이 
  }
  for(int dutyCycle= 255;dutyCycle>=0;dutyCycle--){
    ledcWrite(channel +i,dutyCycle);
    delay(10);
  }
}
}
