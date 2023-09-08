#include <stdio.h>
#include <stdlib.h>

#define MAX_ELEMENTS 100
// Através do pré-processador define, na hora da compilação o MAX ELEMENTS será substituído pelo valor escolhido

int main(void)
{
    int i;
    int vetor[MAX_ELEMENTS];

    int *ponteiro = NULL;
    int x;

    for (i = 0; i < MAX_ELEMENTS; i++)
    {
        vetor[i] = i;
        printf("vetor[%d] = %d\n\n", i, vetor[i]);
    }

    // armazenando o endereço da primeira posição do vetor;
    ponteiro = &vetor[0];
    printf("ponteiro -> %p\n", ponteiro);

    ponteiro = vetor;
    printf("ponteiro -> %p\n\n\n\n", ponteiro); // outra maneira de armazenar o endereço da primeira posição de vetor
    // pois, o NOME DO VETOR é um sinônimo para a localização do primeiro elemento do vetor;

    x = *ponteiro; // x está armazenando o conteúdo de ponteiro
    printf("conteúdo de pv => %d\n", x);

    x = *(ponteiro + 1); // x está somando o conteúdo de ponteiro + 1; seria equivalente fazer x = v[1]
    printf("conteúdo de pv + 1 => %d\n", x);

    x = *(ponteiro + 2); // seria equivalente fazer x = v[2]
    printf("conteúdo de pv + 2 => %d\n", x);

    for (i = 0; i < MAX_ELEMENTS; i++)
    {

        x = *(ponteiro + i);
        printf("x = %d\n", x);
        printf("vetor[%d] = %d\n\n", i, vetor[i]);
    }
}
