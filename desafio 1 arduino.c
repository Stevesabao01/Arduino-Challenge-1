//Desafio 1
//definir quantidade de leds baseado nos pinos
#define LEDS 8

// Definindo os pinos dos LEDs
int leds[] = {2, 3, 4, 5, 6, 7, 8, 9};
// Definindo o pino do botão
int buttonPin = 10;
// Array para armazenar o estado atual dos LEDs
int ledStates[8] = {LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW};
// Variável para armazenar o estado atual do botão
int buttonState = 0;
// Variável para armazenar o estado anterior do botão (para detectar borda de subida)
int lastButtonState = LOW;
// Variável para armazenar o índice do LED atual
int currentLED = 0;

void setup() {
  // Inicializando os LEDs como saída
  for (int i = 0; i < 8; i++) {
    pinMode(leds[i], OUTPUT);
  }
  // Inicializando o botão como entrada
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Lendo o estado atual do botão
  buttonState = digitalRead(buttonPin);
  
  // Verifica se o estado do botão mudou para HIGH desde a última leitura
  if (buttonState == HIGH && lastButtonState == LOW) {
    // Inverte o estado do LED atual
    ledStates[currentLED] = !ledStates[currentLED];
    digitalWrite(leds[currentLED], ledStates[currentLED]);
    
    // Move para o próximo LED
    currentLED = (currentLED + 1) % 8;
    
    // Espera um pouco para evitar o bounce do botão
    delay;
  }
}
