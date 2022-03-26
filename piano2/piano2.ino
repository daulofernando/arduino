const int buz = 11;
const int ledvm = 10;
const int ledvr = 9;
const int ledam = 8;
const int btn1 = 7;
const int btn2 = 6;
const int btn3 = 5;

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
  pinMode(ledvm, OUTPUT);
  pinMode(ledvr, OUTPUT);
  pinMode(ledam, OUTPUT);
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
  pinMode(btn3, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  bool estado_btn1 = digitalRead(btn1); //status do botão 1
  bool stbtn2 = digitalRead(btn2); //status do botão 2
  bool stbtn3 = digitalRead(btn3); //status do botão 3

  if (estado_btn1 == HIGH){
    tone(buz, c);
    digitalWrite(ledvm, HIGH);
    digitalWrite(ledvr, LOW);
    digitalWrite(ledam, LOW);
  } else {
    noTone(buz);
    digitalWrite(ledvm, LOW);
    digitalWrite(ledvr, LOW);
    digitalWrite(ledam, LOW);
  }

 
  
}
