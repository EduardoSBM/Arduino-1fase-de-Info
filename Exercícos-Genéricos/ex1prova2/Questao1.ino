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

const int botao1 = 2;                         // definindo pinos e cosntantes
const int botao2 = 3;      
const int botao3 = 4;

const int red = 13;
const int yell = 12;
const int blue = 11;



void setup() {
  pinMode(botao1, INPUT);                     // definindo entradas                   
  pinMode(botao2, INPUT);                     // definindo entradas   
  pinMode(botao3, INPUT);                     // definindo entradas    
  pinMode(red, OUTPUT);                       // definindo saídas   
  pinMode(yell, OUTPUT);                      // definindo saídas   
  pinMode(blue, OUTPUT);                      // definindo saídas   
}

void loop() {

  bool a = digitalRead(botao1);                     // definindo entradas e saídas      
  bool b = digitalRead(botao2); 
  bool c = digitalRead(botao3); 

  if (a == 1){
  digitalWrite(blue, 1);}                            // definindo condições
  else if (a == 0){
  digitalWrite(blue, 0);}  

  
  if (b == 1){                                      // definindo condições
  digitalWrite(yell, 1);}
  else if (b == 0){
  digitalWrite(yell, 0);}  

  
  if (c == 1){                                      // definindo condições
  digitalWrite(red, 1);}
  else if (a == 0){
  digitalWrite(red, 0);}  

}
