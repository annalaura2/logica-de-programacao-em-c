#include <stdio.h>

/*9. Crie um programa que lê 6 valores inteiros pares e, em seguida, mostre na tela os valores
lidos na ordem inversa.*/

int main()
{
    int valoresInteiros[6], i;

    for (i = 0; i < 6; i++)
    {
        printf("Informe um numero inteiro e par:\n");
        scanf("%d", &valoresInteiros[i]);

        if (valoresInteiros[i] % 2 != 0)
        {
            printf("Informe um numero inteiro PAR:\n");
            scanf("%d", &valoresInteiros[i]);
        }
    }

    printf("Valores na ordem inversa:\n");
    for (i = 5; i >= 0; i--)
    {
        printf("%d\n", valoresInteiros[i]);
    }
}
