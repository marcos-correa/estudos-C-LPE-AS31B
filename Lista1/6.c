#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
6. Elaborar um programa para efetuar o cálculo do valor de uma prestação em atraso,
utilizando a fórmula:
PRESTACAO = VALOR + (VALOR*(TAXA/100)*TEMPO)
*/

int main () {
    float pres, pres_atu, jur;
    int dia;
    float taxa = 0.008;

    printf("6. Elaborar um programa para efetuar o cálculo do valor de uma prestação em atraso, utilizando a fórmula: PRESTACAO = VALOR + (VALOR*(TAXA/100)*TEMPO)\n\n");

    printf("Qual o valor da prestação: ");
    scanf("%f", &pres);
    printf("Quantos dias a prestação está atrasada: ");
    scanf("%d", &dia);
    pres_atu = pres + (pres*taxa*dia);
    jur = pres*taxa*dia;
    printf("\nA nova taxa é de %.2f, pois o valor dos juros é %.2f\n", pres_atu, jur);

    return 0;
}


