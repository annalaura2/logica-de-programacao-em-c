#include <stdio.h>

/*1. Escreva	 uma função	 que	 receba	 dois	 números	inteiros	 retorne	 o	menor
número1*/

int numeros(int num1, int num2)
{
    int menor;

    if (num1 > num2)
    {
        menor = num2;
        printf("Menor: %d\n", menor);
    }
    else
    {
        menor = num1;
        printf("Menor: %d\n", menor);
    }

    return menor;
}

int main()
{
    int num1, num2;

    printf("Informe o numero\n");
    scanf("%d%d", &num1, &num2);
    numeros(num1, num2);
}
