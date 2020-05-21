#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
14. Escrever um programa que lê o número de um vendedor, o seu salário fixo, o total
de vendas por ele efetuadas e o percentual que ganha sobre o total de vendas. Calcular o
salário total do vendedor. Escrever número do vendedor e o salário total.

*/

int main () {
    char cod[10];
    float percen, sal, vendas, total;

    printf("Qual o número do vendedor: ");
    scanf("%s",&cod);
    printf("Qual o salário fixo do vendedor %s: ",cod);
    scanf("%f",&sal);
    printf("Qual o total de vendas realizadas pelo vendedor %s: ",cod);
    scanf("%f",&vendas);
    printf("Qual o percentual de comissão sobre vendas do vendedor %s: ",cod);
    scanf("%f",&percen);
           
    total = ((float)percen/100)*vendas + sal;
    printf("\nO vendedor %s receberá $ %.2f de salario. ", cod, total);



    printf("\n\n");
    return 0;
}


