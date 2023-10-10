const int H = 2;// botão High (vermelho)
const int L = 3;//botão Low (Branco)
const int led_al = 11;// led para alarme (vermelho)
const int led_bmb = 12;// led para bomba (verde)

boolean botaoH = false;        
boolean botaoL = false;

void setup() {
 pinMode(H, INPUT);// input significa entrada
  pinMode(L, INPUT);
  pinMode(led_al, OUTPUT);// output significa saida
  pinMode(led_bmb, OUTPUT);
}
void loop() {
botaoH = digitalRead(H);
botaoL = digitalRead(L);  

  if (botaoH == false) 
   digitalWrite(led_bmb, HIGH);
  else  
   digitalWrite(led_bmb, LOW);
  if (botaoL == false) 
   digitalWrite(led_al, HIGH);
  else  
   digitalWrite(led_al, LOW); 
}   
