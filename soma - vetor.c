/******************************************************************************

2 - Escreva um programa que leia 10 números inteiros. 
Apresente a soma dos 10 números. 

*******************************************************************************/
#include <stdio.h>

int main() {
    int numeros[10];  
    int i;
    int soma = 0; 

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) 
    {
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 10; i++) 
    {
        soma = soma + numeros[i];  
    }

    printf("\nA soma dos números é: %d\n", soma);

    return 0;
}
