int main(void)
{
    int num;

    printf("Informe o número: \n");
    scanf("%d", &num);
    divisores(num);
}

int divisores(int n1)
{
    int i, resultado = 0;

    for (i = 1; n1 > i; i++)
    {
        if (n1 % i == 0)
        {
            printf("%d é um divisor de %d\n", i, n1);
        }
    }
}
