#include <stdio.h>
#include <stdlib.h>

int main() {
    int x50 = 50, x20 = 20, x10 = 10, x5=5, x2=2, valorSaque, verifica, n50=0, n20=0, n10=0, n5=0, n2=0, resto;

    printf("Saque\n");
    printf("Notas disponíveis: %d, %d, %d, %d e %d. \n\n", x50, x20, x10, x5, x2);
    printf("Digite o valor inteiro a ser sacado: ");
    scanf("%d", &valorSaque);

    verifica = valorSaque%2;    
   
    if((verifica!=0)&&(valorSaque>5)){
        n2=0;
        do{
            n2++;
            valorSaque=valorSaque-2;
            verifica = valorSaque%5;
            printf("%d ",n2);
        }while(verifica!=0);
            if(n2==5){
                n2=n2-5;
                valorSaque=valorSaque+10;
            }
        n5=0;
         do{
            n5++;
            valorSaque=valorSaque-5;
            verifica = valorSaque%5;
        }while(verifica!=0);     
    }
    else if(verifica==0){
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
        //
        while(valorSaque>=8){
            n2=4;
            valorSaque=valorSaque-8;
        }
        while(valorSaque>=6){
            n2=3;
            valorSaque=valorSaque-6;
        }
        while(valorSaque>=4){
            n2=2;
            valorSaque=valorSaque-4;
        }
        while(valorSaque>=2){
            n2=1;
            valorSaque=valorSaque-2;
        };
    }
    else if (valorSaque==5){
        n5++;
        valorSaque=valorSaque-5;
    }
    else{
         printf("\nO valor digitado não pode ser sacado\n");
         printf("Notas disponíveis: %d, %d, %d, %d e %d. \n\n", x50, x20, x10, x5, x2);
    }
    
    verifica = valorSaque%2;

   

   

    printf("\nNotas sacadas:\n%d x 50\n%d x 20\n%d x 10\n%d x 5\n%d x 2\n", n50, n20, n10, n5, n2);
     

    return 0;
}
