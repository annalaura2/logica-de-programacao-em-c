#include <stdio.h>

int nulo(int n1)
{
    if (n1 == 0)
    {
        printf("Numero Nulo\n");
    }
}

int main()
{
    int n1;

    printf("Informe o numero:\n");
    scanf("%d", &n1);
    nulo(n1);
}
