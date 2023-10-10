const int A = 2;// botão High (vermelho)
const int B = 3;//botão Low (Branco)
const int led_EV = 11;// led para ELETROVÁLVULA (vermelho)

boolean botaoA = false;        
boolean botaoB = false;

void setup() {
 pinMode(A, INPUT);// input significa entrada
  pinMode(B, INPUT);
  pinMode(led_EV, OUTPUT);// output significa saida
}
void loop() {
botaoA = digitalRead(A);
botaoB = digitalRead(B);  

  if ((botaoA == false)&&(botaoB == false))
   digitalWrite(led_EV, HIGH);
  else  
   digitalWrite(led_EV, LOW);
}   
