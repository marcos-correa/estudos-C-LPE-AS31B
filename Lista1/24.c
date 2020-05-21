#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*

25. Dado um numero inteiro que representa uma quantidade de segundos, determinar o
seu valor equivalente em horas, minutos e segundos. Se a quantidade de segundos for
insuficiente para dar um valor em horas, o valor em horas deve ser 0 (zero). A mesma
observação vale em relação aos minutos e segundos. Por exemplo: 3.600 segundos = 1
hora, 0 minutos, 0 segundos. ; 3.500 segundos = 0 horas, 58 minutos e 20 segundos.

*/

int main () {
    int anos, meses, dias, dias2;
    
    printf("Qual a idade do indivíduo em dias: ");
    scanf("%d",&dias);

    anos = dias/365; 
    meses= dias%365/30;
    dias2= dias%365%30;
    printf("Ele viveu aproximadamente %d anos, %d meses e %d dias",anos,meses,dias2);


    printf("\n\n");
    return 0;
}


