const int VM = 2;// botão Vermelho
const int B = 3;//botão branco
const int VD = 4;//botão Verde
const int led_vm = 11;// led vermelho

boolean botaoVM = false;        
boolean botaoB = false;
boolean botaoVD = false;

void setup() {
  pinMode(VM, INPUT);// input significa entrada
  pinMode(B, INPUT);
  pinMode(VD, INPUT);
  pinMode(led_vm, OUTPUT);// output significa saida
  
}// os colchetes não são necessários no if e no else quando há apenas 1 linha, apartir de 2 já é necessário.
void loop() {
  botaoVM = digitalRead(VM);
  botaoB = digitalRead(B);
  botaoVD = digitalRead(VD); 
  if ((botaoVM && !botaoB && !botaoVD) || (!botaoVM && !botaoB && botaoVD) || (!botaoVM && botaoB && !botaoVD) || (botaoVM && botaoB && botaoVD))
   digitalWrite(led_vm,HIGH);
  else
   digitalWrite(led_vm,LOW); 
}   
