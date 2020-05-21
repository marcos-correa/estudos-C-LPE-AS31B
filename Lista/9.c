#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
9. Faça um programa para ler dois valores (altura e raio de um cilindro), calcular e
mostrar o respectivo volume do cilindro. (pesquise a fórmula)
*/

int main () {
    float alt, raio, are, pi = 3.14;

    printf("9. Faça um programa para ler dois valores (altura e raio de um cilindro), calcular e mostrar o respectivo volume do cilindro. (pesquise a fórmula)\n\n");
    
    printf("Escreva a medida da altura do cilindro ");
    scanf("%f", &alt);
    printf("Escreva a medida do raio do cilindro ");
    scanf("%f", &raio);
    are =(pi*(pow(raio,2))*alt); 
    printf("\nO volume do cilindro é %.2f",are);


    printf("\n\n");
    return 0;
}


