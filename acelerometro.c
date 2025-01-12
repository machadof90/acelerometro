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
void cor(int num)
{
    switch (num)
    {
    case 1:
        vermelho();
        break;

    case 2:
        azul();
        break;

    case 3:
        amarelo();
        break;

    case 4:
        rosa();
        break;

    case 5:
        ciano();
        break;

    case 6:
        branco();
        break;

    case 7:
        verde();
        break;
    }
}

int main()
{
    stdio_init_all();
    iniciaComponentes();
    while (true)
    {
        srand(time(NULL));
        int numAleatorio = (rand() % 7) + 1;
        cor(numAleatorio);
        sleep_ms(tempo);
        apagar();
        sleep_ms(tempo);
        if (gpio_get(BUTTON_A) == 0 && tempo > 50)
        {
            tempo = tempo - 50;
        }
        else if (gpio_get(BUTTON_B) == 0 && tempo < 1000)
        {
            tempo = tempo + 50;
        }
        if (gpio_get(BUTTON_J) == 0)
        {
            cor(numAleatorio);
        }
    }
}
