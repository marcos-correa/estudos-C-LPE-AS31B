#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
2. Faça um programa para ler dois valores (x e y), calcular e mostrar x elevado à
potência de y.
*/

int main () {
    int y;
    float x, result;

    printf("2. Faça um programa para ler dois valores (x e y), calcular e mostrar x elevado à potência de y.\n\n");

    printf("Escreva um numero: ");
    scanf("%f", &x);
    printf("Escreva a potencia desejada (inteira): ");
    scanf("%d", &y);
    result = pow(x,y);
    printf("O resultado de e %.2f", result);

    return 0;
}

