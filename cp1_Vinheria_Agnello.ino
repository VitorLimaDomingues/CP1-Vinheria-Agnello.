// Definindo os pinos dos LEDs, do buzzer e do sensor de luminosidade
const int ledVerde = 7; // Conecta o pino 7 ao LED verde
const int ledAmarelo = 6; // Conecta o pino 6 ao LED amarelo
const int ledVermelho = 5; // Conecta o pino 5 ao LED vermelho
const int buzzer = 3; // Conecta o pino 3 ao buzzer
const int sensorLuminosidade = A0; // Conecta o pino analógico ao sensor de luminosidade

// Declarando variáveis para o valor de luminosidade e para os limites
int valorLuminosidade = 0; // Armazena o valor lido pelo sensor de luminosidade
int limiteOK = 880; // Define o limite em que a luminosidade é considerada OK
int limiteAlerta = 960; // Define o limite em que a luminosidade é considerada alerta 

// Configurando os pinos e inicializando a comunicação serial
void setup() {
  pinMode(ledVerde, OUTPUT); // Define o pino do LED verde como saída
  pinMode(ledAmarelo, OUTPUT); // Define o pino do LED amarelo como saída
  pinMode(ledVermelho, OUTPUT); // Define o pino do LED vermelho como saída
  pinMode(buzzer, OUTPUT); // Define o pino do buzzer como saída
  pinMode(sensorLuminosidade, INPUT); // Define o pino do sensor de luminosidade como entrada
  Serial.begin(9600); // Inicia a comunicação serial a 9600 bps
}

// Iniciando o loop principal
void loop() {
  valorLuminosidade = analogRead(sensorLuminosidade); // Lê o valor da luminosidade e armazena o mesmo
  Serial.println(valorLuminosidade); // Exibe o valor da luminosidade no monitor serial

  // Definindo estrutura de condição para acionar os LEDs e o buzzer com base no valor da luminosidade
  if (valorLuminosidade < limiteOK) { 
    // Se a luminosidade estiver abaixo do limite OK:
    digitalWrite(ledVerde, HIGH); // Liga o LED verde
    digitalWrite(ledAmarelo, LOW); // Desliga o LED amarelo
    digitalWrite(ledVermelho, LOW); // Desliga o LED vermelho
    noTone(buzzer); // Buzzer não acionado
  } 
  else if (valorLuminosidade >= limiteOK && valorLuminosidade <= limiteAlerta)  {
    // Se a luminosidade estiver entre o limite OK e o limite alerta:
    digitalWrite(ledVerde, LOW); // Desliga o LED verde 
    digitalWrite(ledAmarelo, HIGH); // Liga o LED amarelo
    digitalWrite(ledVermelho, LOW); // Desliga o LED vermelho
    tone(buzzer, 500); // Aciona o buzzer com frequência de 500 Hz
    delay(3000); // Mantém o buzzer acionado por 3 segundos
    noTone(buzzer); // Desliga o buzzer
  } 
  else if (valorLuminosidade > limiteAlerta) {
    // Se a luminosidade estiver acima do limite alerta:
    digitalWrite(ledVerde, LOW); // Desliga o LED verde
    digitalWrite(ledAmarelo, LOW); // Desliga o LED amarelo
    digitalWrite(ledVermelho, HIGH); // Liga o LED vermelho
    tone(buzzer, 1000); // Aciona o buzzer com uma frequência de 1000 Hz
  }

  delay(1000); // Pausa de 1 segundo antes do loop ser repetido
}