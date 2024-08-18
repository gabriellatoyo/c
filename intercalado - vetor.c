/******************************************************************************

Faça um programa que carregue automaticamente 2 vetores. 
O primeiro com 10 elementos numéricos e o segundo com 10 caracteres. 
Imprima o conteúdo destes vetores intercalados. Ex:1a2b3c4d5e...

*******************************************************************************/
#include <stdio.h>

int main() {
    int numeros[10];       
    char caracteres[10];   
    int i;

    // Lendo 10 números inteiros
    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    // Lendo 10 caracteres
    printf("Digite 10 caracteres:\n");
    for (i = 0; i < 10; i++) {
        scanf(" %c", &caracteres[i]);  // O espaço antes de %c é importante para ignorar o \n
    }

    // Imprimindo os vetores intercalados
    printf("\nVetores intercalados:\n");
    for (i = 0; i < 10; i++) {
        printf("%d%c", numeros[i], caracteres[i]);
    }
    printf("\n");

    return 0;
}
