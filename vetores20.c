#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int  i, soma, primeiro_termo, razao, quantidade_termos;

    i = 0;
    soma = 0;

    printf("Qual é primeiro termo da PA? ");
    scanf("%d", &primeiro_termo);

    printf("Qual é a razao da PA? ");
    scanf("%d", &razao);

    printf("Qual é a quantidade de termos da PA?");
    scanf("%d", &quantidade_termos);

    int *sequencia = (int *) malloc(quantidade_termos * sizeof(int));
    sequencia[0] = primeiro_termo;

    for(i = 1; i < quantidade_termos; i++) {
        sequencia[i] = razao + sequencia[i - 1];
    }

    printf("\nPA: ");
    for(i = 0; i < quantidade_termos; i++) {
        printf("%d ", sequencia[i]);
    }

    soma = ((primeiro_termo + sequencia[quantidade_termos - 1]) * quantidade_termos)/2;

    printf("\n\nA soma finita dos numeros da lista e: %d", soma);

    free(sequencia);

    return 0;
}
