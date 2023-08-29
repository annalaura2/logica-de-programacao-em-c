#include <stdio.h>

/*2. Escreva uma função que receba como parâmetro dois números inteiros e retorne -1 se
o primeiro for menor que o segundo número, 0 se forem iguais ou 1 se o primeiro for maior
que o segundo número.*/

float funcao(int n1, int n2);

int main()
{
    int n1, n2;
    float res;

    printf("Informe o numero\n");
    scanf("%d%d", &n1, &n2);
    res = funcao(n1, n2);
    printf("Resposta: %f\n", res);
}

float funcao(int n1, int n2)
{
    if (n1 > n2)
    {
        return 1;
    }
    else
    {
        if (n2 > n1)
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }
}
