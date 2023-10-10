const int botao_a = 2;
const int botao_b = 3;
const int led1 = 11;
const int led2 = 12;

void setup() {
pinMode(botao_a, INPUT);
pinMode(botao_b, INPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
}
void loop() {
bool a = digitalRead(botao_a);
bool b = digitalRead(botao_b);

if (a == 1){
  digitalWrite(led1, HIGH);
  digitalWrite(led2,LOW);
}
 if (b == 1){
  digitalWrite(led1, LOW);
  digitalWrite(led2,HIGH);
 }
}
