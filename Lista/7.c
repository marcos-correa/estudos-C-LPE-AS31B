#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
7. Faça um programa para ler um valor (o lado de um quadrado), calcular e mostrar a
respectiva área do quadrado.
*/

int main () {
    float ba, alt, are;

    printf("7. Faça um programa para ler um valor (o lado de um quadrado), calcular e mostrar a respectiva área do quadrado.\n\n");
    
    printf("Escreva a medida da base do quadrado ");
    scanf("%f", &ba);
    
    are =(pow(ba,2)); 
    
    printf("A área do quadrado é %.2f",are);


    printf("\n\n");
    return 0;
}


