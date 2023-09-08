#include <stdio.h>

/*Escreva    uma    função    que    receba    dois    números    inteiros    retorne    o    menor
número1*/

int comparacao(int n1, int n2, int menor);

int main(void)
{
    int numero1, numero2, res;

    printf("Informe, respectivamente, os dois números: \n");
    scanf("%d%d", &numero1, &numero2);

    res = comparacao(numero1, numero2, res);
    printf("Menor número: %d\n", res);
}

int comparacao(int n1, int n2, int menor)
{
    if (n1 > n2)
    {
        menor = n2;
    }
    else
    {
        menor = n1;
    }
    return menor;
}
