#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
18) Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo,
sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração
máxima de 24 horas.
*/
int main () {
    int hi, hf, mi, mf, durah, duram;

    printf("Digite a hora inicial do jogo: ");
    scanf("%d",&hi);
    if (hi>23){
        do
        {
            printf("A hora deve estar entre 00 e 23\n");
            printf("Digite a hora inicial do jogo: ");
            scanf("%d",&hi);/* code */
        } while (hi>23);
    }
    printf("Digite o minuto inicial do jogo: ");
    scanf("%d",&mi);
    if (mi>59){
        do
        {
            printf("O minuto deve estar entre 00 e 59\n");
            printf("Digite o minuto inicial do jogo: ");
            scanf("%d",&mi);/* code */
        } while (mi>59);
    }
    printf("Digite a hora final do jogo: ");
    scanf("%d",&hf);
    if (hf>23){
        do
        {
            printf("A hora deve estar entre 00 e 23\n");
            printf("Digite a hora final do jogo: ");
            scanf("%d",&hf);/* code */
        } while (hf>23);
    }
    printf("Digite o minuto final do jogo: ");
    scanf("%d",&mf);
    if (mf>59){
        do
        {
            printf("O minuto deve estar entre 00 e 59\n");
            printf("Digite o minuto inicial do jogo: ");
            scanf("%d",&mf);/* code */
        } while (mf>59);
    }



    if (hi>hf)
    {
        durah=24-hi+hf;
        if (mi>mf)
        {
            duram=60-mi+mf;
            durah--;
            printf ("\nA duração do jogo foi de: %dh %dm",durah,duram);
        }
        else if (mi<=mf)
        {
            duram=mf-mi;
            printf ("\nA duração do jogo foi de: %dh %dm",durah,duram);
        }
    }
    else if (hi<hf)
    {
        durah=hf-hi; //22:30 >> 23:30
        if (mi>mf) //22:30 >> 23:10
        {
            duram=60-mi+mf;
            durah--;
            printf ("\nA duração do jogo foi de: %dh %dm",durah,duram);
        }
        else if (mi<=mf)
        {
            duram=mf-mi;
            printf ("A duração do jogo foi de: %dh %dm",durah,duram);
        }/* code */
    }
    else
    {
        if (mi>mf) //23:30 >> 23:10
        {
            durah=hi--;
            duram=60-mi+mf;
            printf ("\n\nA duração do jogo foi de: %dh %dm",durah,duram);
        }
        else if (mi<=mf)
        {
            durah=hf-hi;
            duram=mf-mi;
            printf ("\n\nA duração do jogo foi de: %dh %dm",durah,duram);
        }

    }

    printf("\n%.2d:%.2d - %.2d:%.2d",hi,mi,hf,mf);



    printf("\n\n");
    return 0;
}
