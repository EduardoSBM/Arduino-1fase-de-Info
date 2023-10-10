/* ************************************************************************

Colégio SATC
Curso Técnico em Informática
Disciplina: Sistemas Embarcados
Turma: 1137
Professor: Marcos Antonio Jeremias Coelho

Aluno(a): Maria Joana Apolinario Ceron
Aluno(a): Kauã Wanderlind Frassetto
Data: 22/06/2023

************************************************************************ */

const int botao1 = 2;                         // definindo pinos e constantes
const int botao2 = 3;      

const int red = 13;
const int yell = 12;

int cont = 0;                                  // definindo contador.
int aux = 0;                                   // definindo auxiliar para que o botão conte 1 por clique.
int pare = 0;                                  // definindo auxiliar para poder parar a contagem
int start = 0;                                 // definindo auxiliar para só começar a contar quando o botao2 (que liga a esteira) for pressionado

void setup() {
  pinMode(botao1, INPUT);                     // definindo entradas                 
  pinMode(botao2, INPUT);                     // definindo entradas
  pinMode(red, OUTPUT);                       // definindo saídas 
  pinMode(yell, OUTPUT);                      // definindo saídas 
}

void loop() {

  bool a = digitalRead(botao1);                     // definindo variaveis locais      
  bool b = digitalRead(botao2);   

  if (a == 1){
    digitalWrite(yell, 1);
    start = 1;}

  if (b == 1){                                        // definindo contador, ultilizando auxiliar       
   if (start == 1){
    if (aux == 0){
      if (pare == 0){
      cont++;
      aux = 1;
    }
  }
 }
}
  else 
    aux = 0;
Serial.println(cont);


  if (cont >= 60){                            // definindo condição de contagem de 1 para 1 ate 60                          
    pare = 1;
    cont = 0;
    digitalWrite(yell, 0);
    digitalWrite(red, 1);
    delay(1000);    
    digitalWrite(red, 0);}

  if ((a == 1) && (pare == 1)){               // definindo reinicio com o auxiliar pare     
    pare = 0;
    digitalWrite(yell, 1);}



Serial.println(cont);

}




        
