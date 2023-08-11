/*4. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois va-
lores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa
deverá escrever a soma dos valores encontrados nas respectivas posições X e Y .*/

int main(){
    float vetor[8], soma;
    int i, posicao1, posicao2;

    for(i = 0; i <= 7; i++){
        printf("Informe o numero:\n"); 
        scanf("%f", &vetor[i]); 
    }
    printf("Informe as posicoes que deseja somar:\n"); 
    scanf("%d%d", &posicao1, &posicao2); 
    soma = vetor[posicao1] + vetor[posicao2]; 
    printf("SOMA: %.1f\n", soma);
}
