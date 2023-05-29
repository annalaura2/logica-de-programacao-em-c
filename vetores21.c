#include <stdio.h>

/*5. Faça um programa com dois vetores preenchidos de tamanho 10 e troque os
elementos de um vetor pelo os elementos do outro vetor dessa forma: o último
elemento do primeiro vetor deve ser o primeiro elemento do segundo vetor e assim
por diante. Imprimir os dois vetores no final do programa.*/

int main()
{
    int vetor1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetor2[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i;

    for (i = 0; i < 10; i++)
    {
        int aux = vetor1[i];
        vetor1[i] = vetor2[9 - i];
        vetor2[9 - i] = aux;
    }

    printf("\nVetor 1 alterado: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", vetor1[i]);
    }

    printf("\nVetor 2 alterado: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", vetor2[i]);
    }
}
