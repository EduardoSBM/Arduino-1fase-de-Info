const int botao_a = 5;
const int botao_b = 4;
const int botao_c = 3;
const int botao_d = 2; // definindo pinos e constantes
const int ld1 = 12;
const int ld2 = 11;
const int ld3 = 10;

void setup() {
pinMode(botao_a, INPUT);
pinMode(botao_b, INPUT);
pinMode(botao_c, INPUT);// definindo entradas
pinMode(botao_d, INPUT); // definindo saídas 
pinMode(ld1, OUTPUT);
pinMode(ld2, OUTPUT);
pinMode(ld3, OUTPUT);
}

void loop() {
bool a = digitalRead(botao_a);
bool b = digitalRead(botao_b);// definindo variaveis locais      
bool c = digitalRead(botao_c);
bool d = digitalRead(botao_d);

if (a == 1){ 
  digitalWrite(ld1,1);
  digitalWrite(ld2,1);// quando o botão_a ligar todos os leds devem ligar.
  digitalWrite(ld3,1);
  }
if (b == 1){ 
  digitalWrite(ld1,0);// quando o  botão_b ligar o led 1 deve desligar.
  } 
if (c == 1){ 
  digitalWrite(ld2,0);// quando o  botão_c ligar o led 2 deve desligar.
  }
if (d == 1){ 
  digitalWrite(ld3,1);// quando o  botão_d ligar o led 3 deve desligar.

  }
}
