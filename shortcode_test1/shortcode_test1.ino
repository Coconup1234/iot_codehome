#define buzzer 2
#define btn 26

int cnt = 0;

int first[] = {262, 294, 330, 349};
int second[] = {330, 294, 261, 294, 330, 330, 330, 294, 294, 294, 330, 392, 392, 330, 294, 261, 294, 330, 330, 330, 294, 294, 330, 294, 261};

void setup() {
  pinMode(btn, INPUT);
  pinMode(buzzer, OUTPUT);
  digitalWrite(buzzer, HIGH);

  ledcSetup(0, 2000, 8);
  ledcAttachPin(25, 0);
}

void playMelody(int* melody, int length) {
  for (int i=0; i<length; i++) {
    ledcWriteTone(0, melody[i]);
    delay(300);
    if (!digitalRead(btn)) break;
  }
  ledcWriteTone(0, 0);
  while(digitalRead(btn)){}
}

void loop() {
  if (cnt == 1) {
    playMelody(first, 4);
  }
  else if (cnt == 2) {
    playMelody(second, 25);
  }
  else {
    while (digitalRead(btn)) {}
  }
  cnt = (cnt + 1) % 3;
  delay(300);
}
