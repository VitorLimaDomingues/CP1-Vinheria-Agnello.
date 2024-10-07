![CP1 Vinheria Agnello](Vinheria%20agnello.png)

# CP1. - Edge Computing & Computer Systems. - Vinheria Agnello.

Este projeto monitora a luminosidade do local, utilizando uma placa Arduino. O sensor de luminosidade capta o nível de luz ambiente, e o sistema aciona LEDs de diferentes cores (verde, amarelo, vermelho) e um buzzer, dependendo da intensidade da luz detectada. O código também irá exibir o valor da luminosidade no Monitor Serial.

## Funcionalidades

- **LED Verde**: Ligado quando a luminosidade está em níveis adequados.
- **LED Amarelo**: Ligado quando a luminosidade está em um nível de alerta.
- **LED Vermelho**: Ligado quando a luminosidade está em um nível crítico.
- **Buzzer**: Emite sons em diferentes frequências dependendo do nível de luminosidade. (alerta ou crítico).

## Dependências

Para reproduzir este projeto, você vai precisar dos seguintes materiais

- **Placa Arduino** (ex: Arduino Uno)
- **Sensor de Luminosidade** (ex: LDR - Light Dependent Resistor)
- **3 LEDs** (verde, amarelo, vermelho)
- **1 Buzzer** (sonoro)
- **Jumpers e resistores** (3 resistores de 1 kΩ, e 1 resistor de 10 kΩ)
- **Cabo USB** (para conexão com o computador)
- **Arduino IDE** (para carregar o código no Arduino)

## Montagem do Circuito

1. Conecte o **sensor de luminosidade (LDR)** ao pino analógico A0 do Arduino.
2. Conecte os LEDs aos seguintes pinos digitais:
   - LED Verde no pino 7.
   - LED Amarelo no pino 6.
   - LED Vermelho no pino 5.
3. Conecte o **buzzer** ao pino 3 do Arduino.
4. Certifique-se de que todos os componentes compartilham o **terra (GND)** do Arduino.

## Como Reproduzir

### 1. Instalar a Arduino IDE:
- Você vai precisar de uma IDE compátivel com o nosso código (como o Arduino IDE)

### 2. Fazer upload do código:
- Abra a Arduino IDE e crie um novo sketch.
- Cole o código fornecido no sketch.
- Conecte a placa Arduino ao computador via USB.
- Selecione a placa correta (ex: Arduino Uno) e a porta COM na Arduino IDE.
- Clique no botão de upload para carregar o código na placa.

### 3. Executando o projeto:
- Após o upload, o Arduino começará a monitorar a luminosidade e acionar os LEDs e o buzzer conforme os valores lidos pelo sensor.
- Abra o **Monitor Serial** para vizualizar em tempo real, os valores de luminosidade em tempo real.