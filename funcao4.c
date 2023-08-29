#include <stdio.h>

/*
2. Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes de uma equação do segundo grau e retorne o valor do delta, que é dado por 'b² - 4ac'*/
int delta(float a, float b, float c)
{
    float delta;

    delta = (b * b) - (4 * a * b);
    printf("Delta: %f\n", delta);
    return 0;
}

int main()
{
    float a, b, c;

    printf("Informe, respectivamente, os valores da equacao - a, b e c:\n");
    scanf("%f%f%f", &a, &b, &c);
    delta(a, b, c);
}
