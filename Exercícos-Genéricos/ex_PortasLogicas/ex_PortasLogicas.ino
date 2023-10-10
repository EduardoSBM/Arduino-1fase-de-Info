const int V = 2;// botão Vermelho
const int B = 3;//botão Vermelho
const int led_vm = 11;// led vermelho
const int led_vd = 12;// led verde
const int led_a = 13;// led amarelo

boolean botaoV = false;        
boolean botaoB = false;

void setup() {
  pinMode(V, INPUT);// input significa entrada
  pinMode(B, INPUT);
  pinMode(led_vm, OUTPUT);// output significa saida
  pinMode(led_vd, OUTPUT);
  pinMode(led_a, OUTPUT);
}// os colchetes não são necessários no if e no else quando há apenas 1 linha, apartir de 2 já é necessário.
void loop() {
  botaoV = digitalRead(V);
  botaoB = digitalRead(B); 
  if ((botaoV) && (botaoB)) //&& é a função lógica and (multiplicação)
    digitalWrite(led_vm, HIGH); // high é ligado ou "1"
  else // é qualqer coisa ao contrario da condição do if
    digitalWrite(led_vm, LOW);// low é desligado ou "0"
  if ((botaoV == true) || (botaoB == true))// || significa função lógica ou (soma)
     digitalWrite(led_vd, HIGH);      
  else        
     digitalWrite(led_vd, LOW);  
  if (botaoV ^ botaoB) // ^ significa a função lógica xor ( sinais diferentes ligado ou "1"), (sinas iguais desligado ou "0")
     digitalWrite(led_a, HIGH); 
  else        
     digitalWrite(led_a, LOW);
}   
