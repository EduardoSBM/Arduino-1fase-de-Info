/* ************************************************************************

Colégio SATC
Curso Técnico em Informática
Disciplina: Sistemas Embarcados
Turma: 11XX
Professor: Marcos Antonio Jeremias Coelho

Programa: Acionamento de LED por botão com Pull-Up interno 

Autor: Marcos Antonio Jeremias Coelho
Data: 06/03/2023
Versão: 1.0

************************************************************************ */

const int led = 11;				//
const int pin_botao = 2;			//

void setup() {
  pinMode(led, OUTPUT);				//
  pinMode(pin_botao, INPUT_PULLUP);		//
}

void loop() {
  int valor = digitalRead(pin_botao);		//
  if (valor == HIGH) {				//
    digitalWrite(led, HIGH); 			// Acende o led
  }
  if (valor == HIGH){	
    digitalWrite(led, LOW); 			// Apaga o led
  }
}
