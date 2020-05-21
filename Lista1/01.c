#include <stdio.h>
#include <stdlib.h>


/*
1. Escreva um programa para ler, calcular e escrever a média aritmética entre dois
números.
*/

int main () {
    float numero1, numero2, numero3;

    printf("1. Escreva um programa para ler, calcular e escrever a média aritmética entre dois números\n\n");

    printf("Escreva o primeiro número: ");
    scanf("%f", &numero1);
    printf("Escreva o segundo número: ");
    scanf("%f", &numero2);
    numero3 = (numero1 + numero2) / 2;
    printf("A média aritmética entre os dois números é: %.1f\n\n\n", numero3);

    return 0;
}
