#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*

12. Uma fábrica produz dois tipos de peças de automóveis para venda no varejo.
Escrever um programa que ajuda um cliente de loja de auto-peças a comprar estes tipos
de peças. O programa deve ler:
• a percentagem do IPI a ser acrescido no valor das peças
• o código da peça 1, valor unitário da peça 1, quantidade de peças 1
• o código da peça 2, valor unitário da peça 2, quantidade de peças 2
O programa deve calcular o valor total a ser pago e apresentar o resultado.
Fórmula: (valor1 ∗ quant1 + valor2 ∗ quant2) ∗ (IPI∕100 + 1)
*/

int main () {
    char cod1[10], cod2[10];
    int ipi, quant1, quant2;
    float valor1, valor2, total;

    printf("Qual o percentual do valor do IPI: ");
    scanf("%d",&ipi);
    printf("\nQual o código do primeiro produto: ");
    //__fpurge(stdin);
    scanf("%s",cod1);
    printf("Qual o valor unitário do primeiro produto: ");
    //__fpurge(stdin);
    scanf("%f",&valor1);
    printf("Qual o código do segundo produto: ");
    //__fpurge(stdin);
    scanf("%s",cod2);
    printf("Qual o valor unitário do segundo produto: ");
    //__fpurge(stdin);
    scanf("%f",&valor2);
    printf("\nQual a quantidade do item %s a ser comprado: ", cod1);
    scanf("%d",&quant1);
    printf("Qual a quantidade do item %s a ser comprado: ", cod2);
    scanf("%d",&quant2);
    
    total = (quant1*valor1+quant2*valor2)*((float)ipi/100+1);
    printf("\nO valor a ser pago, com o IPI, é de: %.2f ", total);



    printf("\n\n");
    return 0;
}


