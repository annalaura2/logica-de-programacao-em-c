#include <stdio.h>

/*10. Faça um programa que realize a soma de todos os números ímpares de um vetor e
imprima o vetor.*/

int main()
{
    int i, somaImpares = 0;
    int numeros[5];
    int numerosImpares[5], impares = 0;
    int pares = 0, numerosPares[5];

    for (i = 0; i < 5; i++)
    {
        printf("Informe o numero\n", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0)
        {
            numerosPares[pares] = numeros[i];
            pares++;
        }
        else
        {
            numerosImpares[impares] = numeros[i];
            impares++;
        }
    }

    printf("\nPares: ");
    for (i = 0; i < pares; i++)
    {
        printf("%d\n", numerosPares[i]);
    }

    printf("\nImpares: ");
    for (i = 0; i < impares; i++)
    {
        printf("%d\n", numerosImpares[i]);
    }

    int j = 0;
    while (j < impares)
    {
        somaImpares = somaImpares + numerosImpares[j];
        j++;
    }

    printf("Soma Impares: %d\n", somaImpares);
}
