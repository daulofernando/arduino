const int sensor= A0; // sensor dth11 no pino A0
const int led = 12; // led no pino 12
const int buz = 11; // buzzer no pino 11
const int btn = 10; // botão no pino 10
int leitura = 0; // leitura dos dados do sensor, inicia em 0
int tom = 1000; // tom do apito do buzzer

void setup() {

  pinMode(sensor, INPUT); // sensor entrada
  pinMode(led, OUTPUT); // led saida
  pinMode(buz, OUTPUT); // buzzer saida
  pinMode(btn, INPUT_PULLUP); // botão entrada pressionada
}

void loop() {
    
  leitura = analogRead(sensor); // leitura recebe os dados do sensor
  
  if (digitalRead(btn) == LOW){ // se o botão estiver pressionado
    digitalWrite(led, LOW); // led desliga
    noTone(buz); // buzzer desliga
  } else if (leitura < 110){ // se não, se a leitura do sensor for menor que 110
    digitalWrite(led, HIGH); // o led acende
    tone(buz, tom); // e o buzzer apita
  } else{
    digitalWrite(led, LOW); // se não for o led apaga
    noTone(buz); // e o buzzer desliga
  }
delay(100); // tempo de verificação

}
