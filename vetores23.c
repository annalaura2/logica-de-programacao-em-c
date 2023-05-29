#include <stdio.h>

/*7. Faça um programa que armazene em um vetor a sequência de fibonacci.*/

int main()
{
    int primeiroT, segundoT, sequencia[1000000], i, quantidadeDeTermos;

    primeiroT = 1;
    segundoT = 1;

    printf("Quantos termos tem a sequencia\?\n");
    scanf("%d", &quantidadeDeTermos);
    sequencia[0] = primeiroT;
    sequencia[1] = segundoT;

    for (i = 2; i < quantidadeDeTermos; i++)
    {
        sequencia[i] = sequencia[i - 1] + sequencia[i - 2];
    }

    printf("\nSequencia: ");
    for (i = 0; i < quantidadeDeTermos; i++)
    {
        printf("%d\n", sequencia[i]);
    }
}
