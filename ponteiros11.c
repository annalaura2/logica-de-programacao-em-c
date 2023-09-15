#include <stdio.h>
#include <stdlib.h>

/*4. Faca um programa que leia 2 valores inteiros e chame uma funcao que receba estas
2 variaveis e troque o seu conteudo, ou seja, esta funcao  ́e chamada passando duas
variaveis A e B por exemplo e, apos a execucao da funcao, A contera o valor de B e B
tera o valor de A*/

int trocaValores(int, int);

int main(void)
{
    int n1, n2;

    printf("Informe os dois números: \n");
    scanf("%d%d", &n1, &n2);
    trocaValores(n1, n2);
}

int trocaValores(int a, int b)
{

    int *p1 = &a;
    int *p2 = &b;
    int temp;

    printf("\nA = %d\nB = %d\n", *p1, *p2);

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("\nA = %d\nB = %d", *p1, *p2);

    return 0;
}
