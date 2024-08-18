/******************************************************************************
Código do lanche | Especificação   | Preço unitário
100              | Cachorro quente | 11,00
101              | Bauru simples   | 13,00
102              | Bauru c/ovo     | 15,00
103              | Hamburger       | 11,00
104              | Cheeseburger    | 13,00
105              | Refrigerante    | 3,00

O programa deverá apresentar as seguintes opções:
A - Novo pedido (Zerar Valor total do pedido)
B - Incluir Item e quantidade
C - Fechar pedido e Imprimir total (Apenas valor, somar total ao total do dia)
D - Total do Dia (apenas valor)
E - SAIR do programa
O Programa deverá ter uma função que receba como parâmetros o código do item e a quantidade, esta função deverá retornar o valor daquela quantidade de items.

*******************************************************************************/
#include <stdio.h>

float mostrar_item(int codigo) {
    float preco;
    switch (codigo) {
        case 100:
            preco = 11.00;
            printf("Cachorro quente - R$%.2f\n", preco);
            break;
        case 101:
            preco = 13.00;
            printf("Bauru simples - R$%.2f\n", preco);
            break;
        case 102:
            preco = 15.00;
            printf("Bauru com ovo - R$%.2f\n", preco);
            break;
        case 103:
            preco = 11.00;
            printf("Hamburger - R$%.2f\n", preco);
            break;
        case 104:
            preco = 13.00;
            printf("Cheeseburger - R$%.2f\n", preco);
            break;
        case 105:
            preco = 3.00;
            printf("Refrigerante - R$%.2f\n", preco);
            break;
        default:
            printf("Código inválido.\n");
            return 0;
    }
    return preco;
}

void mostrar_cardapio() {
    printf("\nCardápio:\n");
    printf("100 - Cachorro quente     - R$11.00\n");
    printf("101 - Bauru simples       - R$13.00\n");
    printf("102 - Bauru com ovo       - R$15.00\n");
    printf("103 - Hamburger           - R$11.00\n");
    printf("104 - Cheeseburger        - R$13.00\n");
    printf("105 - Refrigerante        - R$3.00\n");
}

int main() {
    char opcao;
    float total_pedido = 0;
    float total_dia = 0;
    int codigo, quantidade;

    mostrar_cardapio();

    do {
        printf("\nMenu:\n");
        printf("A - Novo pedido\n");
        printf("B - Incluir Item e quantidade\n");
        printf("C - Fechar pedido e Imprimir total\n");
        printf("D - Total do Dia\n");
        printf("E - SAIR do programa\n");
        printf("Escolha uma opção: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case 'a': // Novo pedido
                total_pedido = 0;
                break;
            case 'b': // Incluir Item e quantidade
                printf("Digite o código do item: ");
                scanf("%d", &codigo);
                printf("Digite a quantidade: ");
                scanf("%d", &quantidade);
                total_pedido += mostrar_item(codigo) * quantidade;
                break;
            case 'c': // Fechar pedido e Imprimir total
                printf("Total do pedido: R$ %.2f\n", total_pedido);
                total_dia += total_pedido;
                total_pedido = 0;
                break;
            case 'd': // Total do Dia
                printf("Total do dia: R$ %.2f\n", total_dia);
                break;
            case 'e': // Sair
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 'e');

    return 0;
}
