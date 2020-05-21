#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
11. Escreva um programa que calcule o consumo de combustível de um automóvel em
Km/L, e o informe na tela.\n\n
Dados:\n
\nKI = Quilometragem inicial
\nKF = Quilometragem final
\nCC = Consumo de combustível (nº de litros)
\nDP = Distância percorrida DP = KF - KI
\nGC = Gasto de combustível GC = DP / CC
*/

int main () {
    float ki, kf, cc, dp, gc;
    printf("11. Escreva um programa que calcule o consumo de combustível de um automóvel em Km/L, e o informe na tela.\n\n");
    printf("Escreva a kilometragem inicial do carro: ");
    scanf("%f", &ki);
    printf("Escreva a kilometragem final do carro: ");
    scanf("%f", &kf);
    dp = kf-ki;
    printf("Quantos litros foram consumidos nesse trajeto:  ");
    scanf("%f", &gc);
    cc = dp / gc;
    printf("\n\nO consumo de combústível do seu carro é de %.2f km/l.", cc);
    


    printf("\n\n");
    return 0;
}


