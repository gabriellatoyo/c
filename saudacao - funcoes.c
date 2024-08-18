/******************************************************************************
Esse programa deve ter uma função receba como parâmetros: Língua e Turno e imprima na tela a saudação correta.
os parâmetros para língua são: 1 português, 2 inglês, 3 espanhol, 4 italiano, 5 alemão. (pesquisar as saudações no google :)
Para o turno o parâmetro é dado pelos caracteres 'm', 't' e 'n'.
O programa deve repetir o processo até que a língua informada seja '0' (zero); 

*******************************************************************************/

#include <stdio.h>

// Funções para cada idioma
void portugues(char turno) {
    switch(turno) {
        case 'm':
            printf("BOM DIA\n");
            break;
        case 't':
            printf("BOA TARDE\n");
            break;
        case 'n':
            printf("BOA NOITE\n");
            break;
        default:
            printf("Turno inválido.\n");
    }
}

void ingles(char turno) {
    switch(turno) {
        case 'm':
            printf("GOOD MORNING\n");
            break;
        case 't':
            printf("GOOD AFTERNOON\n");
            break;
        case 'n':
            printf("GOOD NIGHT\n");
            break;
        default:
            printf("Invalid shift.\n");
    }
}

void espanhol(char turno) {
    switch(turno) {
        case 'm':
            printf("BUENOS DÍAS\n");
            break;
        case 't':
            printf("BUENAS TARDES\n");
            break;
        case 'n':
            printf("BUENAS NOCHES\n");
            break;
        default:
            printf("Turno inválido.\n");
    }
}

void italiano(char turno) {
    switch(turno) {
        case 'm':
            printf("BUONGIORNO\n");
            break;
        case 't':
            printf("BUON POMERIGGIO\n");
            break;
        case 'n':
            printf("BUONA NOTTE\n");
            break;
        default:
            printf("Turno inválido.\n");
    }
}

void alemao(char turno) {
    switch(turno) {
        case 'm':
            printf("GUTEN MORGEN\n");
            break;
        case 't':
            printf("GUTEN TAG\n");
            break;
        case 'n':
            printf("GUTE NACHT\n");
            break;
        default:
            printf("Turno inválido.\n");
    }
}

int main() {
    int idioma;
    char turno;

    do {
        printf("Informe o idioma (1 - Português, 2 - Inglês, 3 - Espanhol, 4 - Italiano, 5 - Alemão, 0 - Sair): ");
        scanf("%d", &idioma);
        
        if (idioma == 0) {
            break;
        }

        printf("Informe o turno (m - manhã, t - tarde, n - noite): ");
        scanf(" %c", &turno);

        switch(idioma) {
            case 1:
                portugues(turno);
                break;
            case 2:
                ingles(turno);
                break;
            case 3:
                espanhol(turno);
                break;
            case 4:
                italiano(turno);
                break;
            case 5:
                alemao(turno);
                break;
            default:
                printf("Idioma inválido.\n");
        }
    } while (idioma != 0);

    return 0;
}
