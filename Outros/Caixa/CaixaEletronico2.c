#include <stdio.h>
#include <stdlib.h>

int main() {
    //Declarando as variaveis e constantes
    int x50 = 50, x20 = 20, x10 = 10, x5=5, x2=2, valorSaque, verifica, n50=0, n20=0, n10=0, n5=0, n2=0, resto;

    //Tela
    printf("Saque\n");
    printf("Notas disponíveis: %d, %d, %d, %d e %d. \n\n", x50, x20, x10, x5, x2);
    printf("Digite o valor inteiro a ser sacado: ");
    //Valor a ser digitado
    scanf("%d", &valorSaque);

    /*Variavel de verificação. Ela tem o resto da divisão por dez.
    Em caixas que tem notas de 2, qualquer valor pode ser sacado. 
    Valores ímpares e maiores que cinco mesclam notas de 5, de 2, sendo 13 o número absoluto para a mescla.
    Valores ímpares e menores ou iguais a cinco recebem apenas notas de cinco ou de dois.
    */

    //Verificando se é par ou impar. Par=0
    verifica = valorSaque%2;    
    

    /*Código para quando o valor do saque deve mesclar 5 e 2, ou seja, valores ímpares e maiores que 5. 
    Utilizei outro verificador de MOD para um loop do-while.
    imprimo uma nota de dois e diminuo do valor informado 2 reais.
    Faço isso até a divisão por 5 resultar em 0
    */
    if((verifica!=0)&&(valorSaque>5)){
        n2=0;
        do{
            n2++;
            valorSaque=valorSaque-2;
            verifica = valorSaque%5;
        }while(verifica!=0);
        n5=0;
        //O valor máximo de notas de 2 é 5 notas, valor que o MOD5 de qualquer valor de saque maior que 5 dará 0.
        //Porém, ao alcançar 5 notas de 2, poderia ser substituído por uma de 10. Faço isso depois 
        //Esse próximo do-while sempre vai imprimir apenas uma nota.
        do{
            n5++;
            valorSaque=valorSaque-5;
            verifica = valorSaque%5;
        }while(verifica!=0);     
    }
    else{
    }
    //Tirando 5 notas de 2 desnecessárias do código anterior
    //printf("\nNotas sacadas até aqui:%d x 10\n%d x 5\n%d x 2\n", n10, n5, n2);
    //printf("\nVerificando qual o valor restante... %d\n\n ", valorSaque);
    if(n2==5){
        n2--;
        n2--;
        n2--;
        n2--;
        n2--;
        valorSaque=valorSaque+10;
    }
    //Descomentar trecho de teste a seguir para verificar último comentário
    //printf("\nVerificando qual o valor... %d\n\n ", valorSaque);
    //Sacando o resto, que sempre será um número par
    if(valorSaque>=10){
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
        //A partir daqui são quatro outras possibilidades de pagar com notas de dois, agora com números pares
        

        while(valorSaque==8){
            n2=4;
            valorSaque=valorSaque-8;
        }
        while(valorSaque==6){
            n2=6;
            valorSaque=valorSaque-6;
        }
        while(valorSaque==4){
            n2=2;
            valorSaque=valorSaque-4;
        }
        while(valorSaque==2){
            n2=1;
            valorSaque=valorSaque-2;
        };
    }
    else{
         printf("O valor digitado não pode ser sacado");
         printf("Notas disponíveis: %d, %d, %d, %d e %d. \n\n", x50, x20, x10, x5, x2);
    }

    printf("\nNotas sacadas:\n%d x 50\n%d x 20\n%d x 10\n%d x 5\n%d x 2\n", n50, n20, n10, n5, n2);
     

    return 0;
}