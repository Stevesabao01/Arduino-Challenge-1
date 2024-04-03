//Desafio 2

#define LEDS 8

//definicao das portas dos LEDs

int pinosLED[LEDS] = {2, 3, 4, 5, 6, 7, 8, 9};

void  setup() {

    //inicializacao das portas dos LEDs como saidas

    for(int i = 0; i < LEDS; i++) {
        pinMode(pinosLED[i], OUTPUT);    
    }         
}

void loop() {

//Acende e apaga os LEDs em sequencia

for(int i = 0; i < LEDS; i++) {
    digitalWrite(pinosLED[i], HIGH); //Acende o LED

    delay(500); //Aguarde 0.5  segundos (500 ms)

    digitalWrite(pinosLED[i], LOW); //Apaga o LED

 }
}
    