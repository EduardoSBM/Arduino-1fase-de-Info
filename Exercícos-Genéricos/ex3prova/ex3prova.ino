const int botao_a = 2;
const int botao_b =3;
const int led1 = 13;
const int led2 = 12;
const int led3 = 11;
const int led4 = 10;

bool aux_a = 0;
bool aux_b = 0;
int conta = 0;

void setup() {
Serial.begin(115200);
pinMode(botao_a, INPUT);
pinMode(botao_b, INPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
}

void loop() {
bool a = digitalRead(botao_a);
bool b = digitalRead(botao_b);
if (a == 1){
  if (aux_a == 0) {
    conta++;
    aux_a = 1;
  }
}
else{
  aux_a = 0;
}
if (b == 1) {
  if (aux_b == 0) {
    conta --;
    aux_b = 1;
  }
 }
else{
  aux_b = 0; 
}
if (conta > 15){
   conta = 0; 
}
if (conta < 0){
   conta = 15;}
   
if (conta == 0){
  digitalWrite(led1, 0);
  digitalWrite(led2, 0);
  digitalWrite(led3, 0);
  digitalWrite(led4, 0);
}
if (conta == 1){
  digitalWrite(led1, 1);
  digitalWrite(led2, 0);
  digitalWrite(led3, 0);
  digitalWrite(led4, 0);
}
if (conta == 2){
  digitalWrite(led1, 0);
  digitalWrite(led2, 1);
  digitalWrite(led3, 0);
  digitalWrite(led4, 0);
}
if (conta == 3){
  digitalWrite(led1, 1);
  digitalWrite(led2, 1);
  digitalWrite(led3, 0);
  digitalWrite(led4, 0);
}
if (conta == 4){
  digitalWrite(led1, 0);
  digitalWrite(led2, 0);
  digitalWrite(led3, 1);
  digitalWrite(led4, 0);
}
if (conta == 5){
  digitalWrite(led1, 1);
  digitalWrite(led2, 0);
  digitalWrite(led3, 1);
  digitalWrite(led4, 0);
}
if (conta == 6){
  digitalWrite(led1, 0);
  digitalWrite(led2, 1);
  digitalWrite(led3, 1);
  digitalWrite(led4, 0);
}
if (conta == 7){
  digitalWrite(led1, 1);
  digitalWrite(led2, 1);
  digitalWrite(led3, 1);
  digitalWrite(led4, 0);
}
if (conta == 8){
  digitalWrite(led1, 0);
  digitalWrite(led2, 0);
  digitalWrite(led3, 0);
  digitalWrite(led4, 1);
}
if (conta == 9){
  digitalWrite(led1, 1);
  digitalWrite(led2, 0);
  digitalWrite(led3, 0);
  digitalWrite(led4, 1);
}
if (conta == 10){
  digitalWrite(led1, 0);
  digitalWrite(led2, 1);
  digitalWrite(led3, 0);
  digitalWrite(led4, 1);
}
if (conta == 11){
  digitalWrite(led1, 1);
  digitalWrite(led2, 1);
  digitalWrite(led3, 0);
  digitalWrite(led4, 1);
}
if (conta == 12){
  digitalWrite(led1, 0);
  digitalWrite(led2, 0);
  digitalWrite(led3, 1);
  digitalWrite(led4, 1);
}
if (conta == 13){
  digitalWrite(led1, 1);
  digitalWrite(led2, 0);
  digitalWrite(led3, 1);
  digitalWrite(led4, 1);
}
if (conta == 14){
  digitalWrite(led1, 0);
  digitalWrite(led2, 1);
  digitalWrite(led3, 1);
  digitalWrite(led4, 1);
}
if (conta == 15){
  digitalWrite(led1, 1);
  digitalWrite(led2, 1);
  digitalWrite(led3, 1);
  digitalWrite(led4, 1);
 }
 Serial.print("contador= ");
 Serial.print(conta);
 
} 
