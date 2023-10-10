const int LED_BOMBA = 2;// 
const int LED_ALARME = 3;//
const int Bt1 = 12;//
const int Bt2 = 13;//
void setup() {
  pinMode(Bt1, INPUT);
  pinMode(Bt2, INPUT);//entrada
  pinMode(LED_BOMBA, OUTPUT);//saida
  pinMode(LED_ALARME, OUTPUT);// saida 
}
void loop() {
bool L = digitalRead(Bt1);
bool H = digitalRead(Bt2);

if ((H == 1) && (L == 1)){
digitalWrite(LED_BOMBA, LOW);
digitalWrite(LED_ALARME,LOW);
}
if ((H == 0) && (L == 1)){
digitalWrite(LED_BOMBA, HIGH);
digitalWrite(LED_ALARME, LOW);
}
if ((H == 0) && (L == 0)){
digitalWrite(LED_BOMBA, HIGH);
digitalWrite(LED_ALARME, HIGH);
}
if ((H == 1) && (L == 0)){
digitalWrite(LED_BOMBA, LOW);
digitalWrite(LED_ALARME, HIGH);
}
}

  
  
