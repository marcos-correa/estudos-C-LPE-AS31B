#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
23. Desenvolva uma aplicação em linguagem C que receba a idade de um indivíduo em
dias e mostre-a expressa em anos, meses e dias.
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


