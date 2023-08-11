#include <stdio.h>

/*2. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.*/

int main(){
    int vetor[6], i; 

    for(i = 0; i <= 5; i++){
        printf("Informe o numero:\n");
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i <= 5; i++){
        printf("%d\n", vetor[i]);
    }
}
