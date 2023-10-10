/* ************************************************************************

Colégio SATC
Curso Técnico em Informática
Disciplina: Sistemas Embarcados
Turma: 11XX
Professor: Marcos Antonio Jeremias Coelho

Programa: Botão com Pull-down e envio serial

Autor: Marcos Antonio Jeremias Coelho
Data: 06/03/2023
Versão: 1.0

************************************************************************ */

const int pin_botao = 2;
const int botao_vermelho = 11;
const int botao_verde = 12;
const int botao_amarelo = 13;
boolean botao = false;				//

void setup() {
  pinMode(pin_botao, INPUT);
  pinMode(botao_vermelho, OUTPUT);
  pinMode(botao_verde, OUTPUT);
  pinMode(botao_amarelo, OUTPUT);
  Serial.begin(115200); 			// Definição da velocide de transmissão em 115200 bps
}

void loop() {
  botao = digitalRead(pin_botao);		//
  if (botao == true) {				//
    digitalWrite(botao_vermelho, HIGH);	//
    digitalWrite(botao_verde, HIGH);  //
    digitalWrite(botao_amarelo, HIGH);  //
  }
  else {        //
    digitalWrite(botao_vermelho, LOW);
     digitalWrite(botao_verde, LOW);  //
    digitalWrite(botao_amarelo, LOW);  //
  }
}
