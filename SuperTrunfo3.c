#include <stdio.h>
#include <string.h>

// Função para calcular o "Super Poder" (soma das propriedades)
float calcular_super_poder(double populacao, double area, double PIB, int pontos_turisticos, float densidade, float PIB_per_capita) {
    return populacao + area + PIB + pontos_turisticos + densidade + PIB_per_capita;
}

int main() {
    // Declaração de variáveis para as duas cartas
    char codigo_cidade1[3], nome1[50];
    double populacao1, area1, PIB1;
    int pontos_turisticos1;
    float densidade1, PIB_per_capita1;

    char codigo_cidade2[3], nome2[50];
    double populacao2, area2, PIB2;
    int pontos_turisticos2;
    float densidade2, PIB_per_capita2;

    // Entrada de dados para a primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Digite o codigo da cidade: ");
    scanf("%2s", codigo_cidade1);
    while (getchar() != '\n'); // Limpa o buffer
    printf("Digite o nome da cidade: ");
    fgets(nome1, 50, stdin);
    nome1[strcspn(nome1, "\n")] = '\0'; // Remove o '\n' do final

    printf("Populacao: ");
    scanf("%lf", &populacao1);

    printf("Qual a area (m2): ");
    scanf("%lf", &area1);

    printf("Qual o PIB: ");
    scanf("%lf", &PIB1);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Calcula as propriedades derivadas
    densidade1 = populacao1 / area1;
    PIB_per_capita1 = PIB1 / populacao1;

    // Entrada de dados para a segunda carta
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o codigo da cidade: ");
    scanf("%2s", codigo_cidade2);
    while (getchar() != '\n');
    printf("Digite o nome da cidade: ");
    fgets(nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    printf("Populacao: ");
    scanf("%lf", &populacao2);

    printf("Qual a area (m2): ");
    scanf("%lf", &area2);

    printf("Qual o PIB: ");
    scanf("%lf", &PIB2);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Calcula as propriedades derivadas
    densidade2 = populacao2 / area2;
    PIB_per_capita2 = PIB2 / populacao2;

    // Exibe as informações das duas cartas
    printf("\n\nInformacoes da Carta 1 - %s %s\n", codigo_cidade1, nome1);
    printf("Populacao: %.2lf\nArea: %.2lfm2\nPIB: %.2lf\nPontos turisticos: %d\nDensidade populacional: %.2f\nPIB per Capita: %.2f\n", 
        populacao1, area1, PIB1, pontos_turisticos1, densidade1, PIB_per_capita1);

    printf("\nInformacoes da Carta 2 - %s %s\n", codigo_cidade2, nome2);
    printf("Populacao: %.2lf\nArea: %.2lfm2\nPIB: %.2lf\nPontos turisticos: %d\nDensidade populacional: %.2f\nPIB per Capita: %.2f\n", 
        populacao2, area2, PIB2, pontos_turisticos2, densidade2, PIB_per_capita2);

    // Comparação das propriedades
    printf("\n\nComparacao de Cartas:\n");
    printf("Densidade Populacional: Vencedora - %s\n", (densidade1 < densidade2) ? nome1 : nome2);
    printf("Populacao: Vencedora - %s\n", (populacao1 > populacao2) ? nome1 : nome2);
    printf("Area: Vencedora - %s\n", (area1 > area2) ? nome1 : nome2);
    printf("PIB: Vencedora - %s\n", (PIB1 > PIB2) ? nome1 : nome2);
    printf("Pontos Turisticos: Vencedora - %s\n", (pontos_turisticos1 > pontos_turisticos2) ? nome1 : nome2);
    printf("PIB per Capita: Vencedora - %s\n", (PIB_per_capita1 > PIB_per_capita2) ? nome1 : nome2);

    // Cálculo do "Super Poder" das cartas
    float super_poder1 = calcular_super_poder(populacao1, area1, PIB1, pontos_turisticos1, densidade1, PIB_per_capita1);
    float super_poder2 = calcular_super_poder(populacao2, area2, PIB2, pontos_turisticos2, densidade2, PIB_per_capita2);

    printf("\nSuper Poder:\n");
    printf("Carta 1: %.2f\n", super_poder1);
    printf("Carta 2: %.2f\n", super_poder2);
    printf("Super Poder Vencedor: %s\n", (super_poder1 > super_poder2) ? nome1 : nome2);

    return 0;
}
