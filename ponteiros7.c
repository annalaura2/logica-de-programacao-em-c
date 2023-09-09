#include <stdio.h>
#include <stdlib.h>

int max(int a, int b);
int min(int a, int b);
float aumentoPercentual(int, float);
float descontoPercentual(int, float);

int main(void)
{
    int numero1 = 20, numero2 = 45; // numero1 e numero2 são os argumentos da função

    printf("numero1 = %d, numero2 = %d\n", numero1, numero2);

    printf("max(numero1, numero2) = %d\n", max(numero1, numero2));
    printf("min(numero1, numero2) = %d\n\n", min(numero1, numero2));
    printf("aumentoPercentual(numero1, 10) = %f\n", aumentoPercentual(numero2, 10));
    printf("descontoPercentual(numero2, 5) = %f\n\n", descontoPercentual(numero1, 5));
}

int max(int a, int b)
{ // a e b são parâmetros da função

    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int min(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

float aumentoPercentual(int valor, float aumento)
{
    return (float)(valor + (valor * aumento / 100));
}

float descontoPercentual(int valor, float desconto)
{
    return (float)(valor - (valor * desconto / 100));
}
