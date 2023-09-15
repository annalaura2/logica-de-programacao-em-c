#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que contenha duas variáveis inteiras. Compare seus enderecos e
exiba o maior endereco*/

int main(void)
{
    int x, y;
    printf("Digite o primeiro valor: \n");
    scanf("%d", &x);
    printf("Digite o segundo valor: \n");
    scanf("%d", &y);

    int *p1 = &x;
    int *p2 = &y;

    if (&p1 > &p2)
    {
        printf("O endereço do ponteiro um é maior: %p\n", p1);
    }
    else
    {
        printf("O endereço do segundo ponteiro é maior: %p\n", p2);
    }
}
