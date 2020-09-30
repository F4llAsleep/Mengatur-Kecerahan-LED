int pot= A0;
int led= 6;

int nilaiPot;
int brightness;

void setup() {
  pinMode (pot, INPUT);
  pinMode (led, OUTPUT);

}

void loop() {
  nilaiPot = analogRead(pot);

  brightness = map(nilaiPot, 0, 1023, 0, 255);
  analogWrite(led, brightness);

}
