#include <stdio.h>
#include <stdlib.h>

int main()
{
int var = 42;
int * ponteiro;
printf("Valor da variável original: ");
cout << var << endl;
ponteiro = &var;
cout << "Endereço apontado pelo ponteiro: ";
cout << ponteiro <<endl;
cout << "Valor guardado por este endereço: ";
cout << *ponteiro <<endl;
cout << "Valor atualizado do ponteiro!"<<endl;
*ponteiro = 12458;
cout << "Novo valor guardado por este endereço: ";
cout << *ponteiro <<endl;
cout << "Novo valor guardado pela variável original: ";
cout << var <<endl;

system("PAUSE > null");
return 0;
}
