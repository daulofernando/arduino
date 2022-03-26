const int btnRed = 5; 
const int btnGreen = 6; 
const int btnBlue = 7; 

const int ledRed = 8;
const int ledGreen = 9;
const int ledBlue = 10;
 
int leituraBtnRed;
int leituraBtnGreen;
int leituraBtnBlue;

void setup() {
  // put your setup code here, to run once:  
  pinMode(btnRed, INPUT_PULLUP);
  pinMode(btnGreen, INPUT_PULLUP);
  pinMode(btnBlue, INPUT_PULLUP);
  pinMode (ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  leituraBtnRed = digitalRead(btnRed);
  leituraBtnGreen = digitalRead(btnGreen);
  leituraBtnBlue = digitalRead(btnBlue);

  if (leituraBtnRed == LOW){
    analogWrite(ledRed, 255);
  } else {
    analogWrite(ledRed, 0);
  } 
  
  if (leituraBtnGreen == LOW){
    analogWrite(ledGreen, 255);
  } else {
    analogWrite(ledGreen, 0);
  }

  if (leituraBtnBlue == LOW){
    analogWrite(ledBlue, 255);
  } else {
    analogWrite(ledBlue, 0);
  }



  delay(100);
}
