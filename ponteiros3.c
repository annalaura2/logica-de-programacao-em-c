/*1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de ´
cada variavel usando os ponteiros. Imprima os valores das vari ´ aveis antes e ap ´ os a ´
modificac¸ao.*/

int main(void)
{
    int numero = 45;
    char letra = 'd';
    float numero2 = 8.79;

    int *ponteiro1 = &numero;
    char *ponteiro2 = &letra;
    float *ponteiro3 = &numero2;

    *ponteiro1 = 20;
    *ponteiro2 = 'f';
    *ponteiro3 = 40;

    printf("%d\n", numero);
    printf("%c\n", letra);
    printf("%f\n", numero2);
}
