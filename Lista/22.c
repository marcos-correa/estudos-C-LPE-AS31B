#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
22. Desenvolva uma aplicação em linguagem C que receba a idade de um indivíduo em
anos, meses e dias e mostre-a expressa apenas em dias.
*/

int main () {
    int anos, meses, dias, total;
    
    printf("Qual a idade do indivíduo:\nEm anos: ");
    scanf("%d",&anos);
    printf("Em meses: ");
    scanf("%d",&meses);
    printf("Em dias: ");
    scanf("%d",&dias);
    total = (anos*365) + (meses*30) + dias;
    printf("Ele viveu aproximadamente %d dias",total);
    scanf("%d",&dias);

    

    printf("\n\n");
    return 0;
}


