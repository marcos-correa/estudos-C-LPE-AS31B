#include <stdio.h>
#include <stdlib.h>

int main() {
    int x50 = 50, x20 = 20, x10 = 10, x5=5, x2=2, x1=1, valorSaque, verifica, n50=0, n20=0, n10=0, n5=0, n2=0, n1=0, resto;

    printf("Saque\n");
    printf("Notas disponíveis: %d, %d, %d, %d, %d e %d. \n\n", x50, x20, x10, x5, x2, x1);
    printf("Digite o valor inteiro a ser sacado: ");
    scanf("%d", &valorSaque);  
    
    //printf("\nValor Verifica %d", verifica);

    if(valorSaque>0){
        while(valorSaque>=50){
            n50=valorSaque/50;
            valorSaque=valorSaque-(n50*50);
        }
        while(valorSaque>=20){
            n20=valorSaque/20;
            valorSaque=valorSaque-(n20*20);
        }
        while(valorSaque>=10){
            n10=valorSaque/10;
            valorSaque=valorSaque-(n10*10);
        }
        while(valorSaque>=5){
            n5=valorSaque/5;
            valorSaque=valorSaque-(n5*5);
        }
        while(valorSaque>=2){
            n2=valorSaque/2;
            valorSaque=valorSaque-(n2*2);
        }
        while(valorSaque>=1){
            n1=valorSaque/1;
            valorSaque=valorSaque-(n1*1);
        }
        printf("\nNotas sacadas:\n%d x 50\n%d x 20\n%d x 10\n%d x 5\n%d x 2\n%d x 1\n\n", n50, n20, n10, n5, n2, n1);

    }
    else{
                 
        printf("O valor não pode ser sacado");
    }
    return 0;
}