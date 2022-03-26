const int buz = 11;

const int c = 261; // Dó
const int d = 293; // Ré
const int e = 329; // Mi
const int f = 349; // Fá
const int g = 391; // Sol
const int a = 440; // Lá
const int b = 493; // Si

void setup() {
  // put your setup code here, to run once:
  pinMode(buz, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  tone(buz, c);
  delay(1000);

  tone(buz, d);
  delay(1000);

  tone(buz, e);
  delay(1000);

  tone(buz, f);
  delay(1000);

  tone(buz, g);
  delay(1000);

  tone(buz, a);
  delay(1000);

  tone(buz, b);
  delay(1000);

  noTone(buz);
  delay(2000);
}
