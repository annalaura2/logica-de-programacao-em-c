#include <stdio.h>

/*5. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.*/

int main(){

    int valoresPares = 0, i, vetor[10]; 

    for(i = 0; i <=9; i++){
        printf("Informe o numero:\n"); 
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){
            valoresPares++;
        }
    }
    printf("Quantidade de valores pares: %d\n", valoresPares);
}
