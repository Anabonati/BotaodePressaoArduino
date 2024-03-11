//Declaração de constantes 
const int led = 8;  //led no pino 8
const int botao = 7;  //led no pino 7
//variável que conterá os estados do botão (0 LOW, 1 HIGH)
int estadoBotao = 0;

//método setup, executado uma vez ao ligar o arduino
void setup()
{
  pinMode(led, OUTPUT); //pino 8 como saída
  pinMode(botao, INPUT); //definindo pino digital 7 como entrada
}

//método loop, executado enquanto o arduino estiver ligado
void loop()
{
  //lendo o estdo do pino 7, constante botao e atribuido
  //o resultado a variável estadoBotao
  estadoBotao =digitalRead(botao);
  
  //verificando o estdo do botao para definir se acenderá ou apagará
  if (estadoBotao == HIGH) 
  {
    digitalWrite(led,HIGH);//botao pressionado acende o led
  } else 
  {
    digitalWrite(led,LOW);//botao não pressionado apaga o led
  }
}
