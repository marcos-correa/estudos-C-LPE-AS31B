#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
13. Identifique os dados de entrada, processamento e saída no programa abaixo
• Receba código da peça
• Receba valor da peça
• Receba Quantidade de peças
• Calcule o valor total em estoque (Quantidade * Valor da peça)
• Mostre o código da peça e seu valor total em estoque.
*/

int main () {
    char cod1[10];
    int quant1;
    float valor1, total;

    printf("\nQual o código da primeira peça: ");
    //__fpurge(stdin);
    scanf("%s",cod1);
    printf("Qual o valor unitário da primeira peça: ");
    //__fpurge(stdin);
    scanf("%f",&valor1);
    printf("Qual a quantidade de peça %s recebida: ", cod1);
    scanf("%d",&quant1);
        
    total = (quant1*valor1);
    printf("\nPeça: %s | Quantidade: %d | Valor total: $ %.2f ", cod1, quant1,  total);



    printf("\n\n");
    return 0;
}


