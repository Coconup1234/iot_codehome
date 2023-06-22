
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH,SCREEN_HEIGHT, &Wire,-1);
#define R 12
#define G 13
#define B 14
#define LIGHT 36


void setup() {
  Serial.begin(115200);
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT);
  display.begin(SSD1306_SWITCHCAPVCC,0x3D);
  display.clearDisplay();
  
  }

void loop() {

  int light=analogRead(LIGHT);
 
  
  Serial.println(light);
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,10);
  
  if(light >= 3000){
    display.println("30605kimyeunseo");
    display.println(light);
    display.println("warning");
    digitalWrite(R, HIGH);
    
    display.display();
    delay(1000);
    display.clearDisplay();
  }
  
  if(light < 3000){
    display.println("30605kimyeunseo");
    display.println(light);
    digitalWrite(R, LOW);
    
    display.println("");
    display.display();
  }
  Serial.println(light);
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,10);
  display.println("30605kimyeunseo");
  display.println(light);
  display.display();
  display.clearDisplay();
  }










  
