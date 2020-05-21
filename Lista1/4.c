#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
4. Faça um programa no qual o usuário fornece os valores de temperatura em Fahrenheit
e o mesmo converte os valores para Celsius Apresente o resultado. (pesquise a fórmula)
*/

int main () {
    float fa, ce;

    printf("4. Faça um programa no qual o usuário fornece os valores de temperatura em Fahrenheit e o mesmo converte os valores para Celsius Apresente o resultado.\n\n");

    printf("Escreva a temperatura em Fahrenheit: ");
    scanf("%f", &fa);
    ce = (fa-32)/1.8; //sempre 1.8 e não 1,8
    printf("\n%.2fº Fahrenheit é %.2fº Celsius.\n", fa, ce);

    return 0;
}


