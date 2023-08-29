#include <stdio.h>

/*3. Escreva uma função que receba um número e retorne -1 se o número for ímpar ou 1 se for
par.*/

int parOuImpar(int n1);

int main()
{
    int n1, res;

    printf("Informe o numero: \n");
    scanf("%d", &n1);
    res = parOuImpar(n1);
    printf("Resposta: %d\n", res);
}

int parOuImpar(int n1)
{
    if (n1 % 2 == 0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
