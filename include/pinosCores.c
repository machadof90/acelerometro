#include <stdio.h>
#include "pico/stdlib.h"
#include <time.h>
#include "include/pinosCores.h"

#define LED_R 13
#define LED_B 12
#define LED_G 11
#define BUZZER_B 10
#define BUZZER_A 21
#define BUTTON_A 5
#define BUTTON_B 6
#define BUTTON_J 22

void iniciaComponentes()
{
    // iniciando LEDs
    gpio_init(LED_B);
    gpio_set_dir(LED_B, GPIO_OUT);
    gpio_init(LED_R);
    gpio_set_dir(LED_R, GPIO_OUT);
    gpio_init(LED_G);
    gpio_set_dir(LED_G, GPIO_OUT);
    // inciando buzzers
    gpio_init(BUZZER_A);
    gpio_set_dir(BUZZER_A, GPIO_OUT);
    gpio_init(BUZZER_B);
    gpio_set_dir(BUZZER_B, GPIO_OUT);
    // iniciando botoes
    gpio_init(BUTTON_A);
    gpio_set_dir(BUTTON_A, GPIO_IN);
    gpio_pull_up(BUTTON_A);
    gpio_init(BUTTON_B);
    gpio_set_dir(BUTTON_B, GPIO_IN);
    gpio_pull_up(BUTTON_B);
    gpio_init(BUTTON_J);
    gpio_set_dir(BUTTON_J, GPIO_IN);
    gpio_pull_up(BUTTON_J);
}

void apagar(){
gpio_put(LED_R, 0); 
gpio_put(LED_B, 0); 
gpio_put(LED_G, 0);
}
void ciano(){
gpio_put(LED_R, 0);  
gpio_put(LED_B, 1); 
gpio_put(LED_G, 1);
}
void branco(){
gpio_put(LED_R, 1);  
gpio_put(LED_B, 1); 
gpio_put(LED_G, 1);
}
void rosa(){
gpio_put(LED_R, 1); 
gpio_put(LED_B, 1);  
gpio_put(LED_G, 0);
}
void amarelo(){
gpio_put(LED_R, 1); 
gpio_put(LED_B, 0);  
gpio_put(LED_G, 1);
}
void vermelho(){
gpio_put(LED_R, 1); 
gpio_put(LED_B, 0);  
gpio_put(LED_G, 0);
}
void azul(){
gpio_put(LED_R, 0); 
gpio_put(LED_B, 1); 
gpio_put(LED_G, 0); 
}
void verde(){
gpio_put(LED_R, 0); 
gpio_put(LED_B, 0); 
gpio_put(LED_G, 1); 
}


