#include <stdio.h>

/*Em uma eleição existem 4 candidatos à vereador e 3 candidatos à
prefeitura. O programa deve realizar a leitura do voto para vereador e para
prefeito.
Os votos são informados através de códigos.
Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:
Para vereador os códigos são: 66666 para candidato A; 77777 para candidato B;
88888 para candidato C; 99999 para candidato D
Para prefeito os códigos são: 99 para candidato X , 88 para Candidato Y; 77 para
candidato Z;
111 = voto em branco (para ambas as votações);
-Outro valor: Voto Nulo;
Elabore um algoritmo que realize a leitura de ambos os votos (vereador e depois
para prefeito) leia os códigos do candidato que receberá o voto. O programa
deverá ler 7 votos (7 para vereador e 7 para prefeito) alternadamente.
Calcule e escreva:
-total de votos para cada candidato e seu respectivo percentual de votos sobre os
votos válidos*; (em cada uma das duas eleições)
-total de votos nulos; (em cada uma das duas eleições)
-total de votos em branco; (em cada uma das duas eleições)
Votos válidos são todos os votos - nulos.
Lembre-se: os votos em branco e nulos podem ser diferentes nas duas
eleições.*/

int main(){ 
   
int a=0,b=0,c=0,d=0,brV=0,nulV=0; // Contadores para votos de vereadores
int x=0,y=0,z=0,brP=0,nulP=0;     // Contadores para votos de prefeitos
int votoV, votoP, i;

    // Loop para ler votos, totalizando 7 para vereador e 7 para prefeito
    for(i=0; i<7; i++){
        // Leitura do voto para vereador
        printf("Digite seu voto para vereador: ");
        scanf("%d", &votoV);
        // Leitura do voto para prefeito
        printf("Digite seu voto para Prefeito: ");
        scanf("%d", &votoP);

        // Contagem dos votos para vereador
        switch(votoV){
            case 66666: a++; break;
            case 77777: b++; break;
            case 88888: c++; break;
            case 99999: d++; break;
            case 111: brV++; break;
            default: nulV++; break;
        }

        // Contagem dos votos para prefeito
        switch(votoP){
            case 99: x++; break;
            case 88: y++; break;
            case 77: z++; break;
            case 111: brP++; break;
            default: nulP++; break;
        }
    }

    // Cálculo e exibição dos resultados para vereadores
    printf("Candidato A: %d votos (%.2f%%)\n", a, a*100.0/(7-nulV));
    printf("Candidato B: %d votos (%.2f%%)\n", b, b*100.0/(7-nulV));
    printf("Candidato C: %d votos (%.2f%%)\n", c, c*100.0/(7-nulV));
    printf("Candidato D: %d votos (%.2f%%)\n", d, d*100.0/(7-nulV));
    printf("Brancos: %d votos.\n", brV);
    printf("Nulos: %d votos.\n\n", nulV);

    // Cálculo e exibição dos resultados para prefeitos
    printf("Candidato X: %d votos (%.2f%%)\n", x, x*100.0/(7-nulP));
    printf("Candidato Y: %d votos (%.2f%%)\n", y, y*100.0/(7-nulP));
    printf("Candidato Z: %d votos (%.2f%%)\n", z, z*100.0/(7-nulP));
    printf("Brancos: %d votos.\n", brP);
    printf("Nulos: %d votos.\n\n", nulP);

    return 0;
}
