/******************************************************************************

Cálculo de Investimento.
O usuário deve informar:
i) o percentual de rendimento mensal de uma aplicação;
ii) o valor mensal de depósito;
iii) Meta a ser atingida (Valor objetivo).
Calcular em quantos meses a meta será atingida.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mes = 1;           // Inicializa o contador de meses
    float saldo = 0;       // Inicializa o saldo com zero
    float depMensal, meta, rend;

    // Solicita ao usuário o valor do depósito mensal
    printf("Digite o valor do Depósito Mensal: "); 
    scanf("%f", &depMensal);

    // Solicita ao usuário o valor da meta a ser atingida
    printf("Digite o valor da Meta: ");
    scanf("%f", &meta);

    // Solicita ao usuário o valor do rendimento mensal em percentual
    printf("Digite o valor do rendimento (em %%): ");
    scanf("%f", &rend);

    // Loop para calcular o saldo mensal e verificar se a meta foi atingida
    do {
        saldo = saldo + depMensal + (saldo * rend) / 100;
        printf("Saldo no mês %d: R$%.2f\n", mes, saldo);
        mes++;
    } while(saldo < meta); // Continua o loop enquanto o saldo for menor que a meta

    printf("\nMeta atingida em %d meses.\n", mes - 1);  // Exibe o número de meses necessários

    return 0;
}

