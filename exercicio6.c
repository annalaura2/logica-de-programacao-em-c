#include <stdio.h> 

/*6. Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá
ser impresso o maior e o menor elemento do vetor.*/

int main(){
    int vetor[10], menor = 999, maior = 0, i, aux; 

    for(i = 0; i <=9; i++){
        printf("Escreva o numero:\n"); 
        scanf("%d", &vetor[i]);
        
        
        if(vetor[i] < menor){
            menor = vetor[i];
        }

        if(vetor[i] > maior){
            maior = vetor[i];
        }

    }

    printf("%d e o menor numero e %d e o maior", menor, maior);
}
