#include <stdio.h>

/*12. Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
juntamente com o maior, o menor e a média dos valores.*/

int main()
{
    float numeros[5], contNumeros;
    int menor, maior, i;

    menor = 99999;
    maior = 0;
    contNumeros = 0;
    for (i = 0; i <= 4; i++)
    {
        printf("Informe o numero:\n");
        scanf("%f", &numeros[i]);
        contNumeros = contNumeros + numeros[i];

        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }

        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }

    printf("Media dos numeros: %f\nMaior numero: %f\nMenor numero: %f\n", contNumeros / 5, maior, menor);
}
