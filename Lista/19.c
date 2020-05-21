#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*


19. O valor ao consumidor de um carro novo é a soma do custo de fábrica com a
percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo
que a percentagem do distribuidor seja de 28% e os impostos de 45%, escrever um
programa em C que leia o custo de fábrica de um carro e escreva o custo ao consumidor.


*/

int main () {
    float custo, total, impostos, distribuidor;
    impostos = 0.28;
    distribuidor = 0.45;

    printf("Qual o custo de fábrica de um carro ");
    scanf("%f",&custo);
    
    total = (custo*impostos)+(custo*distribuidor)+custo;
    printf("\nO carro custará R$ %.2f ao consumidor", total);



    printf("\n\n");
    return 0;
}


