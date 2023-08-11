#include <stdio.h>

/*3. Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm
10 elementos cada. Imprimir todos os conjuntos.*/

int main(){
    float conjuntos[10], quadrado[10];
    int i; 

    for(i = 0; i <= 9; i++){
        printf("Informe um numero real:\n"); 
        scanf("%f", &conjuntos[i]); 
        quadrado[i] = conjuntos[i] * conjuntos[i]; 
        printf("%.1f e o seu quadrado e: %.1f\n", conjuntos[i], quadrado[i]);
    }
    return 0;
}
