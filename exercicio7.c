#include <stdio.h>
/*7. Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima
o vetor, o maior elemento e a posição que ele se encontra.*/

int main()
{
    int numeros[10], maior, i, posicao;

    maior = 0;
    for (i = 0; i <= 9; i++)
    {
        printf("Escreva o numero:\n");
        scanf("%d", &numeros[i]);
        if (numeros[i] > maior)
        {
            maior = numeros[i];
            posicao = i;
        }
    }

    printf("%d e o maior numero\nSua posicao e: %d", maior, posicao);
}
