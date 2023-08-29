#include <math.h>
#include <stdio.h>

/*5. Escreva uma função que calcule e retorne a raiz cúbica de um número real.*/

float raizCubica(float numero, float raiz);

int main()
{
    float num, res;

    printf("Informe o numero: \n");
    scanf("%f", &num);
}

float raizCubica(float numero, float raiz)
{
    raiz = sqrt(numero);
    printf("Resposta: %f\n", raiz);
}
