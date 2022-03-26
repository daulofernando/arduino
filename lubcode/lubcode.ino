const int ledr=8; 
const int ledy=9; 
const int reset1=10; 
const int reset2= 11; 
const int btn=12; 
 
int i =0; 
int lub=10; 

void setup() {

  pinMode(ledr, OUTPUT);
  pinMode(ledy, OUTPUT);
  pinMode(reset1, INPUT_PULLUP);
  pinMode(reset2, INPUT_PULLUP);
  pinMode(btn, INPUT_PULLUP);
  Serial.begin(9600);
  
}

void loop() {

if (digitalRead(btn)==LOW){ 
  i++;
}

if(i<lub){
  digitalWrite(ledy,HIGH); 
  digitalWrite(ledr, LOW);
 }else{
  digitalWrite(ledy,LOW);
  digitalWrite(ledr,HIGH);
}

if((digitalRead(reset1)==LOW) && (digitalRead(reset2)==LOW) && (digitalRead(btn)==HIGH) && (i>lub)){ 
  i=0;
}

Serial.println("Tempo de uso da máquina:");
Serial.print(i);
Serial.println("");

delay(1000);

}


  
