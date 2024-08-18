/******************************************************************************

Calculadora: Escreva um programa onde o usuario podera escolher uma das opcoes:
a - Soma (ler operador 1 e operador 2)
b - Subtracao (ler operador 1 e operador 2)
c - Divisao (ler base e divisor)
d - Multiplicacao (ler base e multiplicador)
e - Fatorial
f - Potencia (ler base e potencia)
g - SAIR

*******************************************************************************/
#include <stdio.h>
#include <math.h> 

// Função para soma
float soma(float n1, float n2) {
    return n1 + n2;
}

// Função para subtração
float subtracao(float n1, float n2) {
    return n1 - n2;
}

// Função para multiplicação
float multiplicacao(float n1, float n2) {
    return n1 * n2;
}

// Função para divisão
float divisao(float n1, float n2) {
    if (n2 == 0) {
        printf("Erro: Divisão por zero.\n");
        return 0;
    }
    return n1 / n2;
}

// Função para cálculo de fatorial
int fatorial(int num) {
    int i;
    int r = 1;
    if (num < 0) {
        printf("Erro: Fatorial de número negativo não definido.\n");
        return 0;
    }
    for (i = 2; i <= num; i++) {
        r *= i;
    }
    return r;
}

// Função para cálculo de potência
float potencia(float base, int exp) {
    float r = 1;
    if (exp < 0) {
        printf("Erro: Expoente negativo não suportado.\n");
        return 0;
    }
    for (int i = 0; i < exp; i++) {
        r *= base;
    }
    return r;
}

int main() {
    float n1, n2, base;
    int expoente, resposta_fat;
    float resposta_soma, resposta_sub, resposta_multi, resposta_divisao, resposta_pot;
    char opcao;

    do {
        printf("\nEscolha uma das opções:\n");
        printf("a - Soma (ler operador 1 e operador 2).\n");
        printf("b - Subtração (ler operador 1 e operador 2).\n");
        printf("c - Divisão (ler base e divisor).\n");
        printf("d - Multiplicação (ler base e multiplicador).\n");
        printf("e - Fatorial.\n");
        printf("f - Potência (ler base e potência).\n");
        printf("g - SAIR\n");
        printf("Escolha uma opção: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case 'a':
                printf("Digite um número: ");
                scanf("%f", &n1);
                printf("Digite outro número: ");
                scanf("%f", &n2);
                resposta_soma = soma(n1, n2);
                printf("A soma dos dois números é: %.2f\n", resposta_soma);
                break;

            case 'b':
                printf("Digite um número: ");
                scanf("%f", &n1);
                printf("Digite outro número: ");
                scanf("%f", &n2);
                resposta_sub = subtracao(n1, n2);
                printf("A subtração dos dois números é: %.2f\n", resposta_sub);
                break;

            case 'c':
                printf("Digite o numerador: ");
                scanf("%f", &n1);
                printf("Digite o denominador: ");
                scanf("%f", &n2);
                resposta_divisao = divisao(n1, n2);
                if (n2 != 0) {
                    printf("A divisão dos dois números é: %.2f\n", resposta_divisao);
                }
                break;

            case 'd':
                printf("Digite um número: ");
                scanf("%f", &n1);
                printf("Digite outro número: ");
                scanf("%f", &n2);
                resposta_multi = multiplicacao(n1, n2);
                printf("A multiplicação dos dois números é: %.2f\n", resposta_multi);
                break;

            case 'e':
                printf("Digite um número inteiro: ");
                scanf("%d", &expoente);
                resposta_fat = fatorial(expoente);
                if (expoente >= 0) {
                    printf("O fatorial de %d é: %d\n", expoente, resposta_fat);
                }
                break;

            case 'f':
                printf("Digite a base: ");
                scanf("%f", &base);
                printf("Digite o expoente: ");
                scanf("%d", &expoente);
                resposta_pot = potencia(base, expoente);
                printf("A potência de %.2f elevado a %d é: %.2f\n", base, expoente, resposta_pot);
                break;

            case 'g':
                printf("Saindo do programa.\n");
                break;

            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 'g');

    return 0;
}
