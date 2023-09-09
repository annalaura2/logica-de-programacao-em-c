#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int vetor[5] = {10, 20, 30, 40, 50};

    void *p; // O ponteiro pode ser atribuído com qualquer tipo de dado
    p = vetor;

    printf("Endereço vetor[0] = %p\n", p);

    /*
    printf("Valor de a[0] = %d\n", *p); // ERRO!
    */

    printf("Valor de vetor[0] = %d\n", *((int *)p)); // Maneira correta

    printf("Endereço errado de vetor[2] = %p\n", p + 1);
    printf("Endereço correto de vetor[2] = %p\n", &vetor[2]); // de 8 em 8 bytes
}
