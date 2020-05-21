#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
15. Construa um programa que calcule a seguinte fórmula, e mostre no final o valor de
RESULT:
RESULT = (2 * A mod 3) – A
*/

int main () {
    float result;
    int a, amod;
    a = 8;
    amod = a%3; // 8 / 3 (resto) = 2
    result = (2*(a%3))-a;

    printf("\nA: %d | A MOD 3: %d | Result: %.0f  ",a,amod,result);
    printf("\n\nAgora escreva o valor de A: ");
    scanf("%d", &a);
    amod = a%3;
    result = (2*(a%3))-a;
    printf("\nA: %d | A MOD 3: %d | Result: %.0f  ",a,amod,result);
    


    printf("\n\n");
    return 0;
}


