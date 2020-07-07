#define ledR 2
#define ledG 4
#define ledB 3
#define botao 7

class Btn{
  //Vantagem de utilizar classe -> Intanciar um objeto para cada botao no caso de muitos botões
  public:
    int btnclicado, btnliberado, pino;
    //Inicializacao classica
    Btn(int p){ //construtor
      pino=p;
      btnclicado=btnliberado=0;
    }
    bool press(){
      //se o botao for pressionado retorna true, senao false
      if(digitalRead(pino) == HIGH){
        btnclicado=1;
        btnliberado=0;
      }else{
        btnliberado=1;
      }
      if( (btnclicado==1)and(btnliberado==1) ){
        //Quando o botao é clicado
        btnclicado=0;
        btnliberado=0;
        return true;
      }else{
        return false;
      }
    }
};
//classe que controlar a cor do led
class Cor{
  public:
    int pinoR,pinoG,pinoB,ciclo,maximo;
    //Inicializacao com lista de inicializacao
    Cor(int pr, int pg, int pb):pinoR(pr),pinoG(pg),pinoB(pb){ 
      //Associo os parametros de entrada da cor: pr, pg e pb para o pinoR, pinoG e pinoB
      ciclo=0;
      maximo=3;
    }
    //Troca a cor do led
    void trocaLed(){
      if(ciclo==0){
        corLed(1,0,0); //Vermelho  
      }else if(ciclo==1){
        corLed(0,1,0); //Azul
      }else if(ciclo==2){
        corLed(0,0,1); //Verde
      }
      ciclo++;
      if(ciclo > maximo-1){
        ciclo=0;
      }
    }
  private:
    //Define a cor do led
    void corLed(int r, int g, int b){
      digitalWrite(pinoR,r);//Pino R recebe o valor do parametro inteiro r, HIGH ==1 | LOW==0
      digitalWrite(pinoG,g);
      digitalWrite(pinoB,b);      
    }  
};
//INSTANCIANDO UM NOVO OBJETO
Btn btn(botao);
Cor cor(ledR,ledG,ledB);
//Btn btn2(8);
//Btn btn3(9);

void setup() {
  pinMode(ledR,OUTPUT);
  pinMode(ledG,OUTPUT);
  pinMode(ledB,OUTPUT);
  pinMode(botao,INPUT);

}

void loop() {
  if(btn.press()){
    cor.trocaLed();
  }

}
