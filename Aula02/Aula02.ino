void setup() {
  //Porta 13, Definir o modo da porta
  pinMode(13,OUTPUT);//pinMode(porta,tipo)define o estado do pino
  //OUTPUT = Saída - INPUT = Entrada

}

void loop() {
 //Definir o estado da porta
  digitalWrite(13, HIGH); //digitalWrite(porta, estado)
  //HIGH = Ligada(5v) - LOW = Desligada(0v)
  delay(2000);//2000 = 2 segundos,
  //delay() faz uma pausa na programação antes de continuar a execução
    //delay(tempo_da_pausa_em_ml)
  digitalWrite(13,LOW);
  delay(2000);
}
