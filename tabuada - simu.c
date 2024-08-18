/******************************************************************************

Questão 1: Faça um programa em linguagem C que execute as seguintes tarefas:
a) Peça ao usuário números inteiros positivos, deve parar de pedir números
quando o usuário digitar ‘0’ (zero) Nesta tarefa é obrigatório o uso correto de
uma estrutura de repetição (for, while ou do.. while);b) Para cada número inteiro
positivo digitado pelo usuário, o programa deve mostrar os divisores dos valores
ímpares e a tabuada dos valores pares;
c) Quando o laço de repetição terminar (isso ocorrerá quando o usuário digitar ‘0’),
o programa deverá mostrar ao usuário a Média de todos dos valores ímpares
e o Maior valor par digitado pelo usuário: Desconsiderar o valor ‘0’ (zero) para
todos os itens

*******************************************************************************/
#include <stdio.h>

int main() {
    int num, somaImpar = 0, qtdeImpar = 0, maiorPar = 0, i;

    // O loop continua até o usuário digitar '0'
    while (1) {
        printf("Digite um número inteiro positivo (ou '0' para sair): ");
        scanf("%d", &num);

        // Verifica se o usuário digitou '0' para encerrar o programa
        if (num == 0) {
            break;
        }

        // Verifica se o número é par
        if (num % 2 == 0) {
            // Verifica se o número não é zero
            if (num != 0) {
                // Mostra a tabuada do número par
                printf("Tabuada de %d:\n", num);
                for (i = 1; i <= 10; i++) {
                    printf("%d x %d = %d\n", num, i, num * i);
                }
                // Atualiza o maior valor par encontrado
                if (num > maiorPar) {
                    maiorPar = num;
                }
            }
        } else {
            // Atualiza a soma e a quantidade de números ímpares
            somaImpar += num;
            qtdeImpar++;
            // Mostra os divisores do número ímpar
            printf("Divisores de %d: ", num);
            for (i = 1; i <= num; i++) {
                if (num % i == 0) {
                    printf("%d ", i);
                }
            }
            printf("\n");
        }
    }

    // Mostra o maior valor par encontrado
    if (maiorPar != 0) {
        printf("Maior valor par: %d\n", maiorPar);
    } else {
        printf("Nenhum número par foi digitado.\n");
    }

    // Calcula e mostra a média dos valores ímpares, se houver
    if (qtdeImpar != 0) {
        printf("Média dos valores ímpares: %.2f\n", (float)somaImpar / qtdeImpar);
    } else {
        printf("Nenhum número ímpar foi digitado.\n");
    }

    return 0;
}