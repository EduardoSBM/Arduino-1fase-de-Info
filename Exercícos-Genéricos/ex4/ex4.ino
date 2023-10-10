const int botao_a = 5;
const int botao_b = 4;
const int botao_c = 3;
const int botao_d = 2;
const int led1 = 13;
const int led2 = 12;
const int led3 = 11;
const int led4 = 10;

void setup() {
pinMode(botao_a, INPUT);
pinMode(botao_b, INPUT);
pinMode(botao_c, INPUT);
pinMode(botao_d, INPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
}

void loop() {
bool a = digitalRead(botao_a);
bool b = digitalRead(botao_b);
bool c = digitalRead(botao_c);
bool d = digitalRead(botao_d);

if ((a == 1) && (b == 1) && (c == 1) && (d == 1)){ 
  digitalWrite(led1,0);
  digitalWrite(led2,1);
  digitalWrite(led3,1);
  digitalWrite(led4,0);
}
if ((a == 0) && (b == 0) && (c == 1) && (d == 1)){
  digitalWrite(led2,0);
  digitalWrite(led3,1);
  digitalWrite(led1,1);
  digitalWrite(led4,0);
}
if ((a == 0) && (b == 0) && (c == 0) && (d == 1)){ 
  digitalWrite(led3,1);
  digitalWrite(led4,1);
  digitalWrite(led1,1); 
}
if ((a == 0) && (b == 0) && (c == 0) && (d == 0)){
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  digitalWrite(led4,1);
  digitalWrite(led1,1);
  }
}
