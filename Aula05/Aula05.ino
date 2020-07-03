#define led_vermelho = 8
#define led_amarelo = 9
#define led_verde = 10
//VANTAGEM DO DEFINE
/*Diretamente o uso de memória do dispositivo:
Quando o programa for compilado, ele não pega esse valor na memória
do arduino. No define ele substitui o texto x por o valor y, deixando de 
acessar a memória da variável
*/
void setup() {
 pinMode(led_vermelho, OUTPUT);
 pinMode(led_amarelo, OUTPUT);
 pinMode(led_verde, OUTPUT);
}
//FUNCOES:
void vermelho(int tmp){
 digitalWrite(led_vermelho, HIGH);
 digitalWrite(led_amarelo, LOW);
 digitalWrite(led_verde, LOW);
 delay(tmp*1000);
}
void verde(int tmp){
 digitalWrite(led_vermelho, LOW);
 digitalWrite(led_amarelo, LOW);
 digitalWrite(led_verde, HIGH);
  delay(tmp*1000);
}
void amarelo(int tmp){
  digitalWrite(led_vermelho, LOW);
 digitalWrite(led_amarelo, HIGH);
 digitalWrite(led_verde, LOW);
  delay(tmp*1000);
}

void loop() {
 vermelho(7);
 verde(9);
 amarelo(2);
}
