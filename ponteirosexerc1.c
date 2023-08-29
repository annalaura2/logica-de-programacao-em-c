#include <stdio.h>
#include <stdlib.h>

/*Mostrando o conteúdo*/

int main()
{
    int num = 400;
    int *y;
    y = &num;
    printf("%d\n", *y);
}
