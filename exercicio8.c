#include <stdio.h>

/*8. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos
na ordem inversa.*/

int main()
{
    int valores[6], i;

    for (i = 0; i < 6; i++)
    {
        printf("Informe o numero:\n");
        scanf("%d", &valores[i]);
    }

    for (i = 5; i >= 0; i--)
    {
        printf("%d\n", valores[i]);
    }
}
