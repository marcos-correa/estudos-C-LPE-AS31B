#include <stdio.h>
#include <stdlib.h>
//#include <locale.h>

int main()
{
    //setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
    printf("Meu primeiro programa\n");
    printf("A soma %c = %d\n", 130, 2+3);
    printf("2.5 + 3.5 = %.2f\n",2.5+3.5);
    printf("2.5 + 3.5 = %.1f\n",2.5+3.5);
    printf("2.5 - 3.5 = %.0f\n",2.5-3.5);

    printf("%d %c %d = %d\n",2,'+',5, 2+5);
    printf("%f + %f = %f\n",2.5,3.5, 2.5+3.5);
    printf("%.1f + %.1f = %.1f\n",2.5,3.5, 2.5+3.5);
    printf("%.1f %c %.1f = %.1f\n",2.5,'+',3.5, 2.5+3.5);
    system("pause");
	return 0;
}
