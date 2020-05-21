#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
26. Dado um número inteiro não nulo de três dígitos, imprimir este número ao contrario,
isto e, se a entrada for 123 (cento e vinte e três), imprimir 321 (trezentos e vinte e um).
Usar operações sobre inteiros, por exemplo, divisões sucessivas por 10.
*/

int main () {
    int numero, numero2, centena, dezena, unidade;
    
    printf("Digite um número inteiro de 3 dígitos: ");
    scanf("%d",&numero);

    centena = numero/100;
    dezena = numero/10%10; 
    unidade = numero%10;
    printf("\nC: %d | D: %d | U: %d",centena,dezena,unidade);

    numero2 = (unidade*100) + (dezena*10) + (centena*1);
    printf("\n\n%d << | >> %d",numero,numero2);


    printf("\n\n");
    return 0;
}


