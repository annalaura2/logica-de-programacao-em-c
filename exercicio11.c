#include <stdio.h>

/*11. Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a
quantidade de números negativos e a soma dos números positivos desse vetor.*/

int main()
{
    float numeros[10], somaPositivos, contNegativos;
    int i;

    somaPositivos = 0;
    contNegativos = 0;
    for (i = 0; i <= 9; i++)
    {
        printf("Informe o numero:\n");
        scanf("%f", &numeros[i]);

        if (numeros[i] > 0)
        {
            somaPositivos = somaPositivos + numeros[i];
        }
        else
        {
            contNegativos++;
        }
    }

    printf("Quantidade de numeros negativos: %f\nSoma dos positivos: %f\n", contNegativos, somaPositivos);
}
