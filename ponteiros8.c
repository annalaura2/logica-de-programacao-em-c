#include <stdio.h>
#include <stdlib.h>

void numeroMaximo(int *, int *, int *);
void numeroMinimo(int *, int *, int *);
int *nMax(int *, int *);
int *nMin(int *, int *);
void rSwap(int *, int *);

int main(void)
{
    int n1 = 67, n2 = 45, resMax, resMin;

    printf("Valores(n1, n2) = %d e %d\n\n", n1, n2);

    numeroMaximo(&n1, &n2, &resMax); // dessa maneira o código está utilizando os endereços
    numeroMinimo(&n1, &n2, &resMin);

    printf("NúmeroMáximo(&n1, &n2, &resMax) = %d\n", resMax);
    printf("NúmeroMinímo(&n1, &n2, &resMin) = %d\n\n", resMin);
    printf("NúmeroMáximo(&n1, &n2) = %d\n", *nMax(&n1, &n2));
    printf("NúmeroMinímo(&n1, &n2) = %d\n\n", *nMin(&n1, &n2));

    rSwap(&n1, &n2);

    printf("n1 depois do swap = %d, n2 depois do swap = %d\n\n", n1, n2);
}

void numeroMaximo(int *p1, int *p2, int *resultado)
{
    if (*p1 > *p2)
    {
        *resultado = *p1;
    }
    else
    {
        *resultado = *p2;
    }
}

void numeroMinimo(int *p3, int *p4, int *resposta)
{
    if (*p3 > *p4)
    {
        *resposta = *p4;
    }
    else
    {
        *resposta = *p3;
    }
}

int *nMin(int *a, int *b)
{
    int *result = NULL;

    if (*a > *b)
    {
        result = b;
    }
    else
    {
        result = a;
    }

    return result;
}

int *nMax(int *a, int *b)
{
    int *result = NULL;

    if (*a > *b)
    {
        result = a;
    }
    else
    {
        result = b;
    }

    return result;
}

void rSwap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
