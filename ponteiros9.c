#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para in-
teiro, real, e char. Associe as vari  ́aveis aos ponteiros (use &). Modifique os valores de
cada vari  ́avel usando os ponteiros. Imprima os valores das variaveis antes e apos a
modificacao.*/

int main(void)
{
    int inteiro = 20;
    float real = 4.6;
    char palavra = 'a';

    int *p1 = &inteiro;
    float *p2 = &real;
    char *p3 = &palavra;

    printf("valor = %d\n", inteiro);
    printf("valor = %f\n", real);
    printf("valor = %c\n\n", palavra);

    // Modificando os valores atráves dos ponteiros

    *p1 = 19;
    *p2 = 4.5;
    *p3 = 'b';

    printf("valor alterado = %d\n", inteiro);
    printf("valor alterado = %f\n", real);
    printf("valor alterado = %c\n", palavra);
}
