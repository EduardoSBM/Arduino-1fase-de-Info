const int botao_a = 5;
const int botao_b = 4;// definindo pinos e constantes
const int botao_c = 3;
const int botao_d = 2;
const int ld1 = 12;
const int ld2 = 11;
const int ld3 = 10;

void setup() {
pinMode(botao_a, INPUT);
pinMode(botao_b, INPUT);// definindo entradas
pinMode(botao_c, INPUT);// definindo saídas 
pinMode(botao_d, INPUT);
pinMode(ld1, OUTPUT);
pinMode(ld2, OUTPUT);
pinMode(ld3, OUTPUT);
}

void loop() {
bool a = digitalRead(botao_a);
bool b = digitalRead(botao_b);
bool c = digitalRead(botao_c);// definindo variaveis locais      
bool d = digitalRead(botao_d);

if ((a == 0) && (b == 0) && (c == 0) && (d == 0)){ // quando os botões forem iguais a zero, o led deve avisar que não há botão clicado.
  digitalWrite(ld3,1);
  digitalWrite(ld2,0);
  digitalWrite(ld1,0);
}
else{
  digitalWrite(ld3,0); 
  }
if ((a == 1) && (b == 0) && (c == 0) && (d == 0)) { // quando o botão "a" for igual a 1, deve ligar o led1 para avisar que é impar.
  digitalWrite(ld1,1);
  digitalWrite(ld2,0);
  digitalWrite(ld3,0);
}
if ((a == 0) && (b == 1) && (c == 0) && (d == 0)) { // quando o botão "b" for igual a 1, deve ligar o led1 para avisar que é impar.
  digitalWrite(ld1,1);
  digitalWrite(ld2,0);
  digitalWrite(ld3,0);
}
if ((a == 0) && (b == 0) && (c == 1) && (d == 0)) { // quando o botão "c" for igual a 1, deve ligar o led1 para avisar que é impar.
  digitalWrite(ld1,1);
  digitalWrite(ld2,0);
  digitalWrite(ld3,0);
}
if ((a == 0) && (b == 0) && (c == 0) && (d == 1)) { // quando o botão "d" for igual a 1, deve ligar o led1 para avisar que é impar.
  digitalWrite(ld1,1);
  digitalWrite(ld2,0);
  digitalWrite(ld3,0);
}
if (((a == 0) && (b == 1) && (c == 1) && (d == 1))||((a == 1) && (b == 1) && (c == 1) && (d == 0))||((a == 1) && (b == 1) && (c == 0) && (d == 1))||((a == 1) && (b == 0) && (c == 1) && (d == 1))) 
{ // aqui todos as condições indicam para que o led1 acenda, pois todos os número a cima são impares.
  digitalWrite(ld1,1);
  digitalWrite(ld2,0);
  digitalWrite(ld3,0);
}
if ((a == 1) && (b == 1) && (c == 1) && (d == 1)){//quando os botões forem todos os botões, forem iguais a 1, o led deve avisar que o número é par.
  digitalWrite(ld3,0);
  digitalWrite(ld2,1);
  digitalWrite(ld1,0);
}
if (((a == 0) && (b == 0) && (c == 1) && (d == 1))||((a == 0) && (b == 1) && (c == 0) && (d == 1))||((a == 0) && (b == 1) && (c == 1) && (d == 0))||((a == 1) && (b == 0) && (c == 0) && (d == 1))||((a == 1) && (b == 0) && (c == 1) && (d == 0))||((a == 1) && (b == 1) && (c == 0) && (d == 0)))
{ // aqui todos as condições indicam para que o led2 acenda, pois todos os número a cima são pares.
  digitalWrite(ld1,0);
  digitalWrite(ld2,1);
  digitalWrite(ld3,0);
}
}
