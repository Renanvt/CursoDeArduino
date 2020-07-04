#define led 4
#define btn 3
int btnclicado=0;
int btnliberado=0;

void trocaLed(){
  //se o retorno de digitalRead for igual a HIGH, se estiver entrando 5V na porta 3
  if(digitalRead(led)==HIGH){ //digitalRead -> Lê a porta digital e retorna HIGH ou LOW
    digitalWrite(led,LOW);//Apaga o led
  }else{
    digitalWrite(led,HIGH);//acende o led
  }
}

void keyup(){ //verifica os estados dos botoes
  if((btnclicado==1)and(btnliberado==1)){ //verifica se o botao foi clicado e se foi liberado
    btnclicado=0;
    btnliberado=0;
    trocaLed();
  }
}

void setup() {
 pinMode(led,OUTPUT);
 pinMode(btn,INPUT);

}

void loop() {
  if(digitalRead(btn)==HIGH){ //digitalRead -> Lê a porta digital e retorna HIGH ou LOW
    btnclicado=1;
    btnliberado=0;
  }else{
    btnliberado=1;
  }
  keyup();
}
