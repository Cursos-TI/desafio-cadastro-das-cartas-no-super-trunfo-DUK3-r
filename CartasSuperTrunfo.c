#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
#include <stdio.h>

/*UTILIZADO AS FUNÇÕES ENSINADAS EM AULA PELO PROFESSOR SERGIO PARA APLICAÇÃO DESSA ATIVIDADE!!!
COM ALGUMAS MELHORIAS CONHECIDAS E OUTRAS QUE PESQUISEI NA INTERNET PARA PODER DEIXAR O PROGRAMA MAIS CLARO!!!
*/
int main()
{
    // VARIAVEIS SALVAS SEM CONTEUDO PARA PREENCHER AS INFORMAÇÕES NO FORMULARIO
    char codigo_cidade[3];
    char nome[50];
    double populacao;
    double area;
    double PIB;
    int pontos_turisticos;

    // FORMULARIO PARA COLETAR OS DADOS DOS USUARIOS (ENTRADA DE DADOS)
    printf("Bem Vindo ao SuperTrunfo - Paises\n");
    printf("Cadastre a nova carta do SuperTrunfo\n");

    printf("Digite o codigo da cidade: ");
    scanf("%2s", codigo_cidade);
    while (getchar() != '\n');  // Limpa o buffer para evitar problemas na leitura de fgets


    printf("Digite o nome da cidade: ");
    fgets(nome, 50, stdin);// UTILIZANDO FGETS PARA CASO O PAIS TENHA ESPAÇO ENTRE OS NOMES

    printf("Populacao: "),
    scanf("%lf", &populacao);

    printf("Qual a area (m2): ");
    scanf("%lf", &area);

    printf("Qual o PIB: ");
    scanf("%lf", &PIB);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    // RESULTADO DA ENTRADA DE DADOS (SAIDA DE DADOS)
    printf("\n\nInformacoes da Carta - %s %s \n", codigo_cidade, nome);

    printf("Populacao: %.2lf\n", populacao);
    printf("Area: %.2lfm2\n", area);
    printf("PIB: %.2lf\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);
    //UTIIZEI .2 PARA DETERMINAR A QUANTIDADE DE DECIMAIS
    return 0;
}

