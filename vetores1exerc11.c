#include <stdio.h>

/*6. Faça um programa que calcula a soma dos elementos de um vetor de números
inteiros lidos pelo usuário (vetor de tamanho 5). Imprima a soma dos
elementos do vetor. Utilizar laço de repetição while.*/

int main()
{
    int i, soma, numeros[5];

    soma = 0;
    i = 0;

    while (i < 5)
    {
        i = i + 1;
        printf("Informe os numeros\n");
        scanf("%d", &numeros[i]);
        soma = numeros[i] + soma;
    }

    printf("SOMA: %d\n", soma);
}