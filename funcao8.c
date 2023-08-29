#include <stdio.h>

float fatorial(int num)
{
    int fat, i;
    printf("Informe o numero: \n");
    scanf("%d", &num);
    fat = 1;
    for (i = 1; i <= num; i = i + 1)
        fat = fat * i;
    printf("%d\n", fat);
    return 0;
}

int main()
{
    float n;
    fatorial(n);
}
