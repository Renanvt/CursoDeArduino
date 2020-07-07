//PORTAS ANALÓGICAS
//As portas analógicas são portas de entradas no arduino
//O Potenciometro é um resistor variável
//0 = 0v
//256=1,25v
//512 = 2,5v
//768=3,75v
// 1023 = 5v

//PORTAS DIGITAIS
//0v ou 5v(0 ou 1)

//PORTAS DIGITAIS PWM
//Simulam as portas analógicas
//variam de 0 a 255(0v a 5v)

//A relacao de uma Porta analógica com uma porta pwm é:
//O valor da porta da entrada analógica / 4 = saída PWM
//A variacao da PWM chega a 1/4 da variacao da porta analógica

#define an5 A5 //Porta de entrada analógica 5

void setup() {
  //As portas analógicas sao portas de entrada, INPUT
  pinMode(an5, INPUT);
  //Trabalhando com a comunicacao serial
  Serial.begin(9600); //Serial.begin(velocidade_de_comunicacao)
  
}

void loop() {
 //Lendo a entrada da porta analógica
 analogRead(an5);
 Serial.println(analogRead(an5));
 //analogRead-> retorna o valor lido na porta que quero indicar
 //Imprime o valor no console
 delay(100);
}
