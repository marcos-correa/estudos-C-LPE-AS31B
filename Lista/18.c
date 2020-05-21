#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*

18. Faça um programa que leia o número do funcionário, o número de horas trabalhadas
mensais, o valor que recebe por hora e o número de filhos com idade menor de 14 anos.
Calcular e escrever o salário deste funcionário, sendo que cada filho menor de 14 anos
acrescenta 10% do salário.

*/

int main () {
    char cod[10];
    float htmes, porhora, fil, total;

    printf("Qual o código do funcionário ");
    scanf("%s",&cod);
    printf("Qual o número de horas que o funcionário %s trabalhou no mês: ", cod);
    scanf("%f",&htmes);
    printf("Quanto o funcionário %s ganha por hora ",cod);
    scanf("%f",&porhora);
    printf("Quantos filhos menores de 14 anos o funcionário %s tem: ",cod);
    scanf("%f",&fil);

    total = (htmes*porhora)+((htmes*porhora/10)*fil);
    printf("\nO funcionário %s receberá $ %.2f de salario. ", cod, total);



    printf("\n\n");
    return 0;
}


