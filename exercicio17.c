#include <stdio.h>

/*17. Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuı́rem
valores negativos.*/

int main()
{
    float numeros[10];
    int i = 0;

    printf("Informe os numeros: \n");

    for (i = 0; i < 10; i++)
    {
        printf("[%i]", i + 1);

        scanf("%f", &numeros[i]);

        if (0 > numeros[i])
        {
            numeros[i] = 0;
        }
    }

    printf("Vetor: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%2.f\n", numeros[i]);
    }
}
