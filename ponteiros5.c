#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int vetor[5] = {10, 20, 30, 40, 50};
    int i = 0;
    int *ponteiro = vetor;
    // int *ponteiroBase = vetor;

    printf("&[vetor] = %p / vetor[0] = %d\n\n", ponteiro, *ponteiro);

    // Operação de incremento 1a forma

    /*
    for(i = 0; i < 5; i++){
        ponteiro = ponteiroBase + i;
        printf("&vetor[%d] = %p / vetor[%d] = %d\n", i, ponteiro, i, *ponteiro);
      }
    */

    // Operacao de incremendo 2forma

    for (i = 0; i < 5; i++)
    {
        printf("&vetor[%d] = %p / vetor[%d] = %d\n", i, ponteiro + i, i, *(ponteiro + i));
    }
}
