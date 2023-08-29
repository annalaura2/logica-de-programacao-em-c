#include <stdio.h>
#include <stdlib.h>

/*Mostrando a posicao da variavel*/
int main()
{
    int num = 30;
    int *x;

    x = &num;

    printf("%p\n", x);
}
