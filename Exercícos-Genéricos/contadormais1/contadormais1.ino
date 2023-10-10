const int Br = 2;// botão para contador mais
const int vd = 3;// botão para contador menos
int contador = 0;
bool aux = 0;// auxiliar para verificação mais
bool aux2 = 0;// auxiliar de verificação menos
void setup() {
  Serial.begin(115200);
  pinMode(Br, INPUT);
  pinMode(vd, INPUT);//entrada 
}
void loop() {
 bool mais = digitalRead(Br);// botao de menos é o branco(br)
 bool menos = digitalRead(vd);// botao de menos é o verde(vd)
  if (mais == true){ 
    if (aux == false) {
      contador++;
      Serial.print("contador = ");
      Serial.println(contador);
      aux = 1;
    }
  }
  else {
    aux = 0;
  }
  if (menos == true){
    if (aux2 == false){
    contador--;
    Serial.print("contador = ");
    Serial.println(contador);
      aux2 = 1;
  }
}
else {
    aux2 = 0;
   }  
} 
