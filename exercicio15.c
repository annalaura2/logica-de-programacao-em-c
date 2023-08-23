#include <stdio.h>
#include <stdbool.h>

/*
Leia um vetor com 20 numeros inteiros. Escreva os elementos do vetor eliminando ele-
mentos repetidos.
*/

#define TAM  20

int main() {

    int vet[TAM], i,j;
    bool rept;  //variavel auxiliar para indicar se existe numero repetido


    for (i=0; i<TAM; i++) {
        printf("Digite o %do valor: ", i+1);
        scanf("%d", &vet[i]);
    }

    for (i=0; i<TAM; i++) {
        rept = false;
        for (j = 0; j < i; j++) {
            if (vet[i] == vet[j]) {
                rept = true; //indica que o numero esta repetido
                break;
            }
        }
        if (!rept) { //apenas imprime os numeros nao repetidos
            printf("%d ", vet[i]);
        }
    }

    return 0;
}
