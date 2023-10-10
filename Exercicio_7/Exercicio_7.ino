const int botao_a = 5;
const int botao_b = 4;// definindo pinos e constantes
const int botao_c = 3;
const int botao_d = 2;
const int ld1 = 12;
const int ld2 = 11;

int aux = 0;// definindo auxiliar para que o botão conte 1 por clique.
int pare = 0;// definindo auxiliar para poder parar a contagem.
int start = 0;//definindo auxiliar que irá começar o preocesso.  

void setup() {
pinMode(botao_a, INPUT);
pinMode(botao_b, INPUT);// definindo entradas
pinMode(botao_c, INPUT);// definindo saídas 
pinMode(botao_d, INPUT);
pinMode(ld1, OUTPUT);
pinMode(ld2, OUTPUT);

}

void loop() {
bool a = digitalRead(botao_a);// definindo variaveis locais   
bool b = digitalRead(botao_b);
bool c = digitalRead(botao_c);
bool d = digitalRead(botao_d);

if ((a == 1) && (b == 0) && (c == 0) && (d == 0)){ 
  digitalWrite(ld1,1);// aqui quando "a" for clicado a esteira começa a andar, logo acende led1 e apaga led2.
  digitalWrite(ld2,0);   
}
if ((a == 1) && (b == 1) && (c == 0) && (d == 0)){ 
  digitalWrite(ld1,0);// aqui quando "a" for clicado novamente a esteira começa para de andar, logo acende led2 para encher a garrafa  e apaga led1.
  digitalWrite(ld2,1);   
    delay(1000);
      if ((a == 1) && (b ==0 ) && (c == 1) && (d == 0)){ 
         digitalWrite(ld1,1);// aqui quando "c" for clicado a garrafa estará cheia, logo acende led1 esteira começar a andar  e apaga led2 para para de encher.
         digitalWrite(ld2,0);   
 }
}
