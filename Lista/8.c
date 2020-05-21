#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
8. Sabendo que a área de um triângulo é a medida da sua base multiplicada pela medida
de sua altura dividida por dois. Escreva um programa que peça os valores da base e da
altura e forneça a área do triângulo.
*/

int main () {
    float ba, alt, are;

    printf("8. Sabendo que a área de um triângulo é a medida da sua base multiplicada pela medida de sua altura dividida por dois. Escreva um programa que peça os valores da base e da altura e forneça a área do triângulo.\n\n");
    
    printf("Escreva a medida da base do triângulo ");
    scanf("%f", &ba);
    printf("Escreva a medida da altura do triângulo ");
    scanf("%f", &alt);
    are =(ba*alt)/2; 
    printf("\nA área do triângulo é %.2f",are);


    printf("\n\n");
    return 0;
}


