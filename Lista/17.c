#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*

17. Sabe-se que,para iluminar de maneira correta os cômodos de uma casa, para cada
m2 deve-se usar 18W de potência. Faça um programa que recebe as duas dimensões de
um cômodo (em metros), calcule e mostre a sua área (em m2) e a potência de
iluminação que deverá ser usada.

*/

int main () {
    float lad1, lad2, total, pot;
    
    printf("Digite o valor em metros dos lados dos comodos.\nLado 1: ");
    scanf("%f", &lad1);
    printf("Lado 2: ");
    scanf("%f", &lad2);
    pot = (float)(lad1*lad2)*18;
    printf("A área total do comodo é %.2f m² e a potencia necessária para iluminá-lo de maneira correta é %.2f W",(float)lad1*lad2,pot);

    printf("\n\n");
    return 0;
}


