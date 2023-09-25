#include <stdio.h> 

/*2.  Escreva  uma  função  que  verifique  se  um  número  é  primo.  Sua  função  deve  retornar 
verdadeiro ou falso. O parâmetro de entrada é o número a ser verificado.*/

int primo(int n1);

int main(void){
    int numero; 

    printf("Informe o número: \n"); 
    scanf("%d", &numero); 
    primo(numero);

}

int primo(int n1){
    int i; 
    int resultado = 0;

    for(i = 2; i <= n1 / 2; i++){
        if(n1 % i == 0){
            resultado++; 
            break;
        }
    }

    if(resultado == 0){
        return printf("é número primo\n"); 
    }else{
        return printf("não é número primo\n");
    }

}
