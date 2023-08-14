#include <stdio.h>

/*13. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encon-
tram o maior e o menor valor*/

int main()
{
    int numeros[5], i, menor, maior, posicaoMenor, posicaoMaior;

    menor = 9999;
    maior = -999;
    for (i = 0; i <= 4; i++)
    {
        printf("Informe o numero:\n");
        scanf("%f", &numeros[i]);

        if (numeros[i] > maior)
        {
            maior = numeros[i];
            posicaoMaior = i;
        }

        if (numeros[i] < menor)
        {
            menor = numeros[i];
            posicaoMenor = i;
        }
    }

    printf("Posicao do maior valor: %d\nPosicao do menor valor: %d\n", posicaoMaior, posicaoMenor);
}
