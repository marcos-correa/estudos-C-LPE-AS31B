#include <stdio.h>
#include <stdlib.h>

int main(){
float distancia, desempenho, combustivel, pedagio, total;

                  printf("Deslocamento\n\n");
                  printf("Qual a distância percorrida (em km):");
                  scanf("%f",&distancia);
                  printf("Quantos km o seu carro faz por litro de combustível:");
                  scanf("%f",&desempenho);
                  printf("Qual o preço do combustível:");
                  scanf("%f",&combustivel);
                  printf("Quanto você gasta com pedágio:");
                  scanf("%f",&pedagio);
                  printf("\n");
                  total = distancia/desempenho*combustivel+pedagio;
                  printf("Gasto total com deslocamento entre CWB e Ponta Grossa: R$ %.2f \n",total);
                  getchar();
}
