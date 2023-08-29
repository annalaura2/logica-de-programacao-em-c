#include <stdio.h>

/*4 . Escreva uma função que receba dois números: base e expoente e calcule a base elevada ao
expoente.*/

float potenciacao(float base, float expoente);

int main()
{
    float base, expoente;

    printf("Informe, respectivamente, a base e o expoente: \n");
    scanf("%f%f", &base, &expoente);
    potenciacao(base, expoente);
}

float potenciacao(float base, float expoente)
{
    float resultado;
    int i;
    resultado = 1;

    if (expoente == 0)
    {
        resultado = 0;
    }
    else if (expoente == 1)
    {
        resultado = base;
    }
    else
    {
        for (int i = 1; i <= expoente; i++)
        {
            resultado = resultado * base;
        }
    }

    printf("Resutado: %f\n", resultado);
}
