#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
16. Desenvolva um programa para ler valores para as variaveis y e z. Depois, calcule e
mostre o valor de x, através
expressão:
x=RAIZQUADRADADE(y*(y²² + z³³)
*/

int main () {
    int z, y;
    float total;
    
    printf("Digite o valor inteiro do número y: ");
    scanf("%d", &y);
    printf("Digite o valor inteiro do número z: ");
    scanf("%d", &z);
    total = sqrt(y*(pow(y,22)+pow(z,33)));

    printf("O resultado de X é %f",total);

    printf("\n\n");
    return 0;
}


