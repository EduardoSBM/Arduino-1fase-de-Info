const int botao = 2;
const int led = 10;
void setup() {
pinMode(led,OUTPUT);
pinMode(botao,INPUT);
}
void loop() {
bool a = digitalRead(botao);

if (a == 1){
  digitalWrite(led,HIGH);
}
}
