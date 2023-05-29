#include <stdio.h>

/*6. Faça um programa que faça uma busca em vetor. O usuário digita o número que
quer encontrar e o programa retorna a posição do elemento caso esteja presente no
vetor.*/

int main()
{
    int i, vetor1[4] = {70, 18, 97, 101}, numero, posicao = -1;

    printf("Informe o numero\n");
    scanf("%d", &numero);
    for (i = 0; i < 4; i++)
    {
        if (numero == vetor1[i])
        {
            posicao = i;
            break;
        }
    }

    if (posicao == -1)
    {
        printf("Valor nao encontrado\n");
    }
    else
    {
        printf("Posicao do valor: %d\n", posicao);
    }
}
