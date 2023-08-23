#include <stdio.h>

/*16. Faça um programa que leia um vetor de 5 posições para números reais e, depois, um
código inteiro. Se o código for zero, finalize o programa; se for 1, mostre o vetor na ordem
direta; se for 2, mostre o vetor na ordem inversa. Caso, o código for diferente de 1 e 2
escreva uma mensagem informando que o código é inválido.*/

int main()
{

    float numeros[5];
    int i = 0, codigo;

    printf("Informe os numeros\n");

    for (i = 0; i < 5; i++)
    {
        printf("[%i]", i + 1);

        scanf("%f", &numeros[i]);
    }

    do
    {
        printf("Informe o codigo\n");
        scanf("%d", &codigo);

        if (codigo == 0)
        {
            break;
        }
        else
        {
            if (codigo == 1)
            {
                printf("Vetor: \n");
                for (i = 0; i < 5; i++)
                {
                    printf("%2.f\n", numeros[i]);
                }
            }
            else
            {
                if (codigo == 2)
                {
                    printf("Vetor invertido: \n");
                    for (i = 4; i >= 0; i--)
                    {
                        printf("%2.f\n", numeros[i]);
                    }
                }
                else
                {
                    break;
                }
            }
        }

    } while (codigo == 1 || codigo == 2);
}
