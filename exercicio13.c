#include <stdio.h>

/*13. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encon-
tram o maior e o menor valor*/

int main()
{
    int valores[5], menorValor, i, posicaoMenorValor, maiorValor, posicaoDoMaiorValor;

    for (i = 0; i <= 4; i++)
    {
        printf("Informe o numero:\n");
        scanf("%d", &valores[i]);

        if (i == 0)
        {
            menorValor = valores[i];
            maiorValor = valores[i];
        }

        if (menorValor > valores[i])
        {
            menorValor = valores[i];
            posicaoMenorValor = i;
        }

        if (valores[i] > maiorValor)
        {
            maiorValor = valores[i];
            posicaoDoMaiorValor = i;
        }
    }

    printf("Posicao do menor: %d\nPosicao do maior valor: %d\n", posicaoMenorValor, posicaoDoMaiorValor);
}
