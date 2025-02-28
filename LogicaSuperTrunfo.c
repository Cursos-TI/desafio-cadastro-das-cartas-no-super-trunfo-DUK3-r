#include <stdio.h>

//A ultima atividade do 2º Tema onde aplicamos toda logica dentro do Jogo para comparação das cartas
//Decidi não implementar Entrada de dados para ficar mais didatico e melhor observável. 
//Caso queira ver meu desenvolvimento em Entrada de Dados, peço que veja o SuperTrunfo3.c

//NESSE CÓDIGO É COMPARADO DUAS CARTAS: Brasil X Alemanha onde o vencedor é exibido dependendo das comparações escolhidas


int main() {
    int escolha1, escolha2;
    
    // Atributos das cartas (Brasil e Alemanha)
    int populacaoBrasil = 214000000, populacaoAlemanha = 83100000;
    float areaBrasil = 8515767.0, areaAlemanha = 357022.0;
    float pibBrasil = 1.87, pibAlemanha = 4.85;
    int pontosTuristicosBrasil = 50, pontosTuristicosAlemanha = 100;
    float densidadeBrasil = populacaoBrasil / areaBrasil;
    float densidadeAlemanha = populacaoAlemanha / areaAlemanha;
    
    // Permite escolher duas comparações
    printf("Bem-vindo ao Super Trunfo!\n");
    printf("Escolha o primeiro atributo para comparacao:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n");
    scanf("%d", &escolha1);
    
    printf("Escolha o segundo atributo para comparacao (diferente do primeiro):\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n");
    scanf("%d", &escolha2);
    
    // Uma estrutura de repetição para que o usuário apenas possa escolher atributos diferentes
    while (escolha1 == escolha2) {
        printf("O segundo atributo deve ser diferente do primeiro! Escolha novamente:\n");
        scanf("%d", &escolha2);
    }
    
    // Variáveis para armazenar os pontos
    int pontosBrasil = 0, pontosAlemanha = 0;
    
    // Função para comparar os atributos
    for (int i = 0; i < 2; i++) {
        int escolha = (i == 0) ? escolha1 : escolha2;
        printf("Comparando atributo %d...\n", escolha);
        
        // a variável de incremento vai somar os pontos entre Brasil e Alemanha nesse switch com base nos atributos escolhidos
        switch (escolha) {
            case 1: // População
                if (populacaoBrasil > populacaoAlemanha) pontosBrasil++;
                else if (populacaoBrasil < populacaoAlemanha) pontosAlemanha++;
                break;
            case 2: // Área
                if (areaBrasil > areaAlemanha) pontosBrasil++;
                else if (areaBrasil < areaAlemanha) pontosAlemanha++;
                break;
            case 3: // PIB
                if (pibBrasil > pibAlemanha) pontosBrasil++;
                else if (pibBrasil < pibAlemanha) pontosAlemanha++;
                break;
            case 4: // Pontos turísticos
                if (pontosTuristicosBrasil > pontosTuristicosAlemanha) pontosBrasil++;
                else if (pontosTuristicosBrasil < pontosTuristicosAlemanha) pontosAlemanha++;
                break;
            case 5: // Densidade Demográfica (regra invertida)
                if (densidadeBrasil < densidadeAlemanha) pontosBrasil++;
                else if (densidadeBrasil > densidadeAlemanha) pontosAlemanha++;
                break;
            default:
                printf("Opção invalida!\n");
                return 1;
        }
    }
    
    // Exibindo o resultado final
    printf("\nResultado final:\n");
    printf("Brasil: %d pontos | Alemanha: %d pontos\n", pontosBrasil, pontosAlemanha);
    
    // logica para determinar o vencedor
    if (pontosBrasil > pontosAlemanha) {
        printf("Brasil venceu!\n");
    } else if (pontosBrasil < pontosAlemanha) {
        printf("Alemanha venceu!\n");
    } else {
        printf("Empate!\n");
    }
    
    return 0;
}