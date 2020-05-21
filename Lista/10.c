#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
10. Escrever um programa para ler 4 valores, calcular e mostrar a média ponderada
obtida por um aluno para 2 notas bimestrais. Note que desses 4 valores lidos tem-se o
seguinte: duas notas e os dois respectivos pesos das notas. (pesquise a fórmula).*/

int main () {
    float nota1, nota2, peso1, peso2, valor;
    printf("10. Escrever um programa para ler 4 valores, calcular e mostrar a média ponderada obtida por um aluno para 2 notas bimestrais. Note que desses 4 valores lidos tem-se o seguinte: duas notas e os dois respectivos pesos das notas. (pesquise a fórmula).\n\n");

    printf("Escreva a primeira nota: ");
    scanf("%f", &nota1);
    printf("Escreva o peso da primeira nota: ");
    scanf("%f", &peso1);
    printf("Escreva a segunda nota: ");
    scanf("%f", &nota1);
    printf("Escreva o peso da segunda nota: ");
    scanf("%f", &peso2);
    valor = ((nota1*peso1)+(nota2*peso2))/2; 
    printf("\nA média de pontos foi de %.2f",valor);


    printf("\n\n");
    return 0;
}


