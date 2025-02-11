#include <stdio.h>

/*UTILIZADO AS FUNÇÕES ENSINADAS EM AULA PELO PROFESSOR SERGIO PARA APLICAÇÃO DESSA ATIVIDADE!!!
COM ALGUMAS MELHORIAS CONHECIDAS E OUTRAS QUE PESQUISEI NA INTERNET PARA PODER DEIXAR O PROGRAMA MAIS CLARO!!!
*/
int main(){
    // VARIAVEIS SALVAS SEM CONTEUDO PARA PREENCHER AS INFORMAÇÕES NO FORMULARIO
    char codigo_cidade[2];
    char nome[50];
    double populacao;
    double area;
    double PIB;
    int pontos_turisticos;
    float densidade;// ESSA NOVA VARIAVEL FAZ O CALCULO DA DENSIDADE POPULACIONAL
    float PIB_per_capita;// ESSA NOVA VARIAVEL FAZ O CALCULO DO PIB PER CAPITA
    // TODAS AS OUTRAS VARIAVEIS CONTIUARAM O MESMO


    // FORMULARIO PARA COLETAR OS DADOS DOS USUARIOS (ENTRADA DE DADOS)
    printf("Bem Vindo ao SuperTrunfo - Paises\n");
    printf("Cadastre a nova carta do SuperTrunfo\n");

    printf("Digite o codigo da cidade: ");
    scanf("%2s", codigo_cidade);
    while (getchar() != '\n');  // Limpa o buffer para evitar problemas na leitura de fgets

    printf("Digite o nome da cidade: ");
    fgets(nome, 50, stdin);

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
    densidade = populacao / area;
    printf("Densidade populacional: %.2f\n", densidade);
    PIB_per_capita = PIB / populacao;// INSERI A INFORMAÇÃO ANTES DA SAIDA POIS APRESENTA ERRO SE FICAR NA LINHA 42 POR EXEMPLO
    printf("PIB per Capita: %.2f\n", PIB_per_capita);
    //UTIIZEI .2 PARA DETERMINAR A QUANTIDADE DE DECIMAIS
    return 0;
}
