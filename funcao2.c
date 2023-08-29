#include <stdio.h>

/*0. Crie uma função que receba um valor e informe se ele é positivo ou não.
 */

int positivo(float n1)
{
    if (n1 > 0)
    {
        printf("Positivo\n");
    }
    else
    {
        printf("Negativo\n");
    }
}

int main()
{
    float n1;

    printf("Informe o numero\n");
    scanf("%f", &n1);
    positivo(n1);
}
