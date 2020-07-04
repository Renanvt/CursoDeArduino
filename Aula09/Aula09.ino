#define ledR 2
#define ledG 4
#define ledB 3
#define botao 7
#define maximo 3 //total de cores que serão configuradas

int btnclicado=0;
int btnliberado=0;
int ciclo=0; //indica qual cor o led vai acender

void vermelho(){
  //defini os estados do pino vermelho
  digitalWrite(ledR, HIGH);
  digitalWrite(ledG, LOW);
  digitalWrite(ledB, LOW);
}
void verde(){
  //defini os estados do pino verde
  digitalWrite(ledR, LOW);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledB, LOW);
}
void azul(){
  //defini os estados do pino azul
  digitalWrite(ledR, LOW);
  digitalWrite(ledG, LOW);
  digitalWrite(ledB, HIGH);
}

void trocaLed(){
  if(ciclo==0){
    vermelho();
  }else if(ciclo==1){
    verde();
  }else if(ciclo==2){
    azul();
  }
  ciclo++;
  if(ciclo>maximo-1){ //ciclo comeca em 0
    ciclo=0;
  }
}
void verificaBtn(){
  if(digitalRead(botao)==HIGH){
    btnclicado=1;
    btnliberado=0;
  }else{
    btnliberado=1;
  }
  if((btnclicado==1)and(btnliberado==1)){
    btnclicado=0;
    btnliberado=0;
    trocaLed();
  }
}
void setup() {
  //Cada perna equivale a 1 cor
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(botao, INPUT);
}
void loop() {
 verificaBtn();

}
