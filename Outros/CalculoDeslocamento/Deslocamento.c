#include <stdio.h>
#include <stdlib.h>

int main(){
float dist, des, comb, coef, ped, tot; //Todas as variaveis, refatoradas pra ficar mais clean a programação
char resp = 'n'; //A única variável em caractere.

                  printf("Cálculo de Deslocamento - Curitiba / Ponta Grossa\n\n");
                  comb = 4.10; // O programa define essas informações
                  des = 12; // Essa também
                  coef = comb/des; // O Coeficiente é quantos R$ gasta por km rodado.
                  printf ("O valor do combustível é R$ %.2f e o seu carro faz %.1f km/l.\nDeseja alterar essas informações? (s/n) : ", comb, des);
                  scanf("%c", &resp); //Existe a opção de mudar o que eu defini. Se desejar mudar, ele executa o código inteiro.
                  printf("\n");

                  //alterando tudo
                  if (resp=='s') {
                  coef = comb/des;
                  printf("Qual o preço do combustível (em R$): ");
                  scanf("%f",&comb);
                  printf("Quantos km o seu carro faz por litro de combustível: ");
                  scanf("%f",&des);
                  coef = comb/des;
                  printf("Qual a distância percorrida (em km): ");
                  scanf("%f",&dist);
                  printf("Quanto você gasta com pedágio: ");
                  scanf("%f",&ped);
                  printf("\n");
                  tot = dist*coef+ped;
                  printf("Gasto total: R$ %.2f \n",tot);
                  //printf("Informações: \nPreço Combustível: R$ %.2f \nDesempenho: %.2f km/l \nPedágio: R$ %.2f\n\n", comb, des, ped);

                  }

                    //Sem alterar o preço do combustível
                  if (resp=='n') {

                  printf("Qual a distância percorrida (em km): ");
                  scanf("%f",&dist);
                  printf("Quanto você gasta com pedágio: ");
                  scanf("%f",&ped);
                  printf("\n");
                  tot = dist*coef+ped;
                  printf("Gasto total = R$ %.2f \n\n",tot);
                  //printf("Informações: \nPreço Combustível: R$ %.2f \nDesempenho: %.2f km/l \nPedágio: R$ %.2f\n\n", comb, des, ped);


                  }
}
