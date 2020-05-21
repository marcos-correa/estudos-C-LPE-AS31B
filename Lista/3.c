#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
3. Faça um programa que leia dois números reais e em seguida mostre: a soma, o
produto, a divisão e a subtração entre eles.
*/

int main () {
    float x, y, som, sub, div, mul;

    printf("3. Faça um programa que leia dois números reais e em seguida mostre: a soma, o produto, a divisão e a subtração entre eles.\n\n");

    printf("Escreva um número real: ");
    scanf("%f", &x);
    printf("Escreva outro número real: \n");
    scanf("%f", &y);
    som = x + y;
    sub = x - y;
    div = x / y;
    mul = x * y;
    printf("A soma desses dois números é: %.2f\n", som);
    printf("O produto desses dois números é: %.2f\n", mul);
    printf("A divisão desses dois números é: %.2f\n", div);
    printf("A subtração desses dois números é: %.2f\n", sub);

    return 0;
}

