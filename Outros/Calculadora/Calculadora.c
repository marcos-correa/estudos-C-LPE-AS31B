#include <stdlib.h>
#include <stdio.h>
//#include <lolale.h> //Windows

int main() { //setlocale(LC_ALL, "Portuguese"); //Windows
    int num1, num2, resp1, resp2, ttlint;
    float num3, num4, ttlfloat;
    char resp3='s';

    do {

        do {
            printf("Você deseja realizar qual operação matemática?\n\n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n\n");
            scanf("%d", &resp1);
            system("clear");
        } while (resp1 < 1 || resp1 > 4);


        if (resp1==1) {
            printf("Soma de dois números\n\n");
            printf("Digite o primeiro número: ");
            scanf("%f",&num3);
            printf("Digite o segundo número: ");
            scanf("%f",&num4);
            ttlfloat=num3+num4;
            printf("%.2f + %.2f = %.2f\n\n",num3,num4,ttlfloat);

        }
        if (resp1==2) {
            printf("Subtração de dois números\n\n");
            printf("Digite o primeiro número: ");
            scanf("%f",&num3);
            printf("Digite o segundo número: ");
            scanf("%f",&num4);
            ttlfloat=num3-num4;
            printf("%.2f - %.2f = %.2f\n\n",num3,num4,ttlfloat);
        }
        if (resp1==3) {
            printf("Multiplicação de dois números\n\n");
            printf("Digite o primeiro número: ");
            scanf("%f",&num3);
            printf("Digite o segundo número: ");
            scanf("%f",&num4);
            ttlfloat=num3*num4;
            printf("%.2f x %.2f = %.2f\n\n",num3,num4,ttlfloat);
        }
        if (resp1==4) {
            printf("Divisão de dois números\n\n");
            printf("Digite o primeiro número: ");
            scanf("%f",&num3);
            printf("Digite o segundo número: ");
            scanf("%f",&num4);
            ttlfloat=num3/num4;
            printf("%.2f / %.2f = %.2f\n\n",num3,num4,ttlfloat);
        }

        printf("Você deseja realizar mais uma operação matemática? (1 = Sim | 2 = Não) ");
        scanf("%d", &resp2);
        system("clear");
    } while (resp2==1);
    printf("Obrigado por utilizar a calculadora! :D\n\n\n");


    //system("pause"); //windows
}
