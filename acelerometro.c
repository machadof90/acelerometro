#include <stdio.h>
#include "pico/stdlib.h"
#include "include/pinosCores.c" 
#include <time.h>  

#define LED_R 13
#define LED_B 12
#define LED_G 11
#define BUZZER_B 10
#define BUZZER_A 21
#define BUTTON_A 5
#define BUTTON_B 6
#define BUTTON_J 22

// inicia componentes
int tempo = 50;

int main()
{
    stdio_init_all();
    iniciaComponentes();
    while (true)
    {           
        vermelho();
        sleep_ms(tempo);
        apagar();
        sleep_ms(tempo);
        if(gpio_get(BUTTON_A) == 0 && tempo > 50){
            tempo = tempo - 50;            
        }else if(gpio_get(BUTTON_B) == 0 && tempo < 1000){
            tempo = tempo + 50;
        }        
    }
}
