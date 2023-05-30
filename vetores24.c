#include <stdio.h>

/*9. Faça um programa com dois vetores de números inteiros de tamanho 10, lidos pelo
usuário, no qual deve ser feito a soma dos elementos dos vetores, sendo que o
primeiro elemento do primeiro vetor deve ser somado com o último elemento do
segundo vetor, o segundo elemento do primeiro vetor deve ser somado com o último
elemento do segundo vetor e assim por diante. Armazene a soma em um terceiro
vetor e imprima-o.*/

int main()
{
    int vetor1[10];
    int vetor2[10];
    int i, vetorSoma[10];

    printf("\nInforme os valores do vetor 1\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor1[i]);
    }

    printf("\nInforme os valores do vetor 2\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor2[i]);
    }

    for (i = 0; i < 10; i++)
    {
        vetorSoma[i] = vetor1[i] + vetor2[9 - i];
    }

    printf("SOMA DOS VETORES\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", vetorSoma[i]);
    }
}
