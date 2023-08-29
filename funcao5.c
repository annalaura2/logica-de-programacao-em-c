#include <stdio.h>

/*1. Escreva uma função que receba como parâmetro um número inteiro e retorne -1, 0
ou 1 se este número for negativo, nulo ou positivo, respectivamente.*/

int parametros(int num)
{

    if (0 > num)
    {
        printf("-1\n");
    }
    else
    {
        if (num == 0)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
        }
    }
}

int main()
{
    int num;

    printf("Informe o numero:\n");
    scanf("%d", &num);
    parametros(num);
}
