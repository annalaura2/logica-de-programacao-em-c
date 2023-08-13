#include <stdio.h>

/*10. Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
e imprima a média geral.*/

int main()
{

    int i;
    float notas[15], cont;

    for (i = 0; i <= 14; i++)
    {
        printf("Informe a nota:\n");
        scanf("%f", &notas[i]);
        cont = notas[i] + cont;
    }

    printf("Media Geral: %f\n", cont / 15);
}
