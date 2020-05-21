#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
5. Elaborar um programa que calcule e apresente o volume de uma caixa retangular, por
meio da fórmula: VOLUME = COMPRIMENTO * LARGURA * ALTURA
*/

int main () {
    float comp, lar, alt, vol;

    printf("5. Elaborar um programa que calcule e apresente o volume de uma caixa retangular, por meio da fórmula: VOLUME = COMPRIMENTO * LARGURA * ALTURA \n\n");

    printf("Digite o comprimento da caixa: ");
    scanf("%f", &comp);
    printf("Digite a largura da caixa: ");
    scanf("%f", &lar);
    printf("Digite a altura da caixa: ");
    scanf("%f", &alt);
    vol = comp * lar * alt;
    printf("\nO volume da caixa é %.2f\n", vol);

    return 0;
}


