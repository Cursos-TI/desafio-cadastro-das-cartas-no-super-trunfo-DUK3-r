#include <stdio.h>

// Desafio Super Trunfo - Países
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
/*UTILIZADO AS FUNÇÕES ENSINADAS EM AULA PELO PROFESSOR SERGIO PARA APLICAÇÃO DESSA ATIVIDADE!!!
COM ALGUMAS MELHORIAS CONHECIDAS E OUTRAS QUE PESQUISEI NA INTERNET PARA PODER DEIXAR O PROGRAMA MAIS CLARO!!!
*/
//ESTE SERÁ O ARQUIVO PRINCIPAL PARA ATUALIZAR O JOGO SEMPRE QUE A MATERIA FOR EVOLUINDO!!

/*O INTUITO DESSE NOVO DESAFIO DE SUPERTRUNFO DO TEMA 2 É ENTENDER COMO FUNCIONA OS OPERADORES LOGICOS PARA COMPARAR
DUAS CARTAS E VER QUAL VENCE NO JOGO!!
*/

//PREFERI DEIXAR AS VARIAVEIS PREDEFINIDAS MAS EU JÁ ETENDO BEM O CONCEITO DE ENTRADA DE DADOS!
int main (){

    //VARIAVEIS PARA A PRIMEIRA CARTA
    char codigo_cidade_carta1[3] = "A1";
    char nome_carta1[50] = "Brasil";
    double populacao_carta1 = 211100000;
    double area_carta1 = 8510000;
    double PIB_carta1 = 2174000000000;
    int pontos_turisticos_carta1 = 350;
    float densidade_carta1 = populacao_carta1 / area_carta1;
    float PIB_per_capita_carta1 = PIB_carta1 / populacao_carta1;

    // VARIAVEIS PARA A SEGUNDA CARTA
    char codigo_cidade_carta2[3] = "A2";
    char nome_carta2[50] = "Mexico";
    double populacao_carta2 = 129700000;
    double area_carta2 = 1973000;
    double PIB_carta2 = 1789000000000;
    int pontos_turisticos_carta2 = 247;
    float densidade_carta2 = populacao_carta2 / area_carta2;
    float PIB_per_capita_carta2 = PIB_carta2 / populacao_carta2;

    // Contadores de vitórias para somar o valor final e mostrar qual pais teve mais ponto
    int vitorias_carta1 = 0;
    int vitorias_carta2 = 0;

    //SAIDAS DA PRIMEIRA CARTA
    printf("Informacoes das Cartas Cadastradas\n\n");
    printf("Carta %s - Pais: %s\n", codigo_cidade_carta1, nome_carta1);
    printf("Populacao: %.0lf\n", populacao_carta1); // utilizando double para não ficar o valor negativo
    printf("Area m2: %.0lfm2\n", area_carta1); // mantendo o .0 para nao haver casas decimais
    printf("PIB: %.0lf\n", PIB_carta1); // uma forma diferente de trazer um número inteiro com variavel tipo float
    printf("Pontos Turisticos: %d\n", pontos_turisticos_carta1);
    printf("Densidade: %.2f\n", densidade_carta1);
    printf("PIB Per Capita: %.2f\n\n", PIB_per_capita_carta1);

    //SAIDAS DA SEGUNDA CARTA
    printf("Carta %s - Pais: %s\n", codigo_cidade_carta2, nome_carta2);
    printf("Populacao: %.0lf\n", populacao_carta2); // utilizando double para não ficar o valor negativo
    printf("Area m2: %.0lfm2\n", area_carta2); // mantendo o .0 para nao haver casas decimais
    printf("PIB: %.0lf\n", PIB_carta2); // uma forma diferente de trazer um número inteiro com variavel tipo float
    printf("Pontos Turisticos: %d\n", pontos_turisticos_carta2);
    printf("Densidade: %.2f\n", densidade_carta2);
    printf("PIB Per Capita: %.2f\n\n", PIB_per_capita_carta2);

    //Exibe resultado de cada parametro, sendo apresentado qual pais venceu!
    // Utilizando if / else para comparar qual carta tem maior valor
    printf("Combate entre as Cartas!!\n");
    if(populacao_carta1 > populacao_carta2){
        printf("A Carta %s - %s Venceu! Sendo o pais mais populoso\n", codigo_cidade_carta1, nome_carta1);
        vitorias_carta1++; // cada vez que a carta1 vence, soma mais 1 ponto para ela
    } else{
        printf("A Carta %s - %s Venceu! Sendo o pais mais populoso\n", codigo_cidade_carta2, nome_carta2);
        vitorias_carta2++; // cada vez que a carta2 vence, soma mais 1 ponto para ela
    }

    if(area_carta1 > area_carta2){
        printf("A Carta %s - %s Venceu! Possui maior territorio!\n", codigo_cidade_carta1, nome_carta1);
        vitorias_carta1++;
    } else{
        printf("A Carta %s - %s Venceu! Possui maior territorio\n", codigo_cidade_carta2, nome_carta2);
        vitorias_carta2++;
    }

    if(PIB_carta1 > PIB_carta2){
        printf("A Carta %s - %s Venceu! Tem o maior PIB\n", codigo_cidade_carta1, nome_carta1);
        vitorias_carta1++;
    } else{
        printf("A Carta %s - %s Venceu! Tem o maior PIB\n", codigo_cidade_carta2, nome_carta2);
        vitorias_carta2++;
    }

    if(pontos_turisticos_carta1 > pontos_turisticos_carta2){
        printf("A Carta %s - %s Venceu! Possui mais pontos turisticos\n", codigo_cidade_carta1, nome_carta1);
        vitorias_carta1++;
    } else{
        printf("A Carta %s - %s Venceu! Possui mais pontos turisticos\n", codigo_cidade_carta2, nome_carta2);
        vitorias_carta2++;
    }

    if(densidade_carta1 < densidade_carta2){
        printf("A Carta %s - %s Venceu! E menos densa\n", codigo_cidade_carta1, nome_carta1);
        vitorias_carta1++;
    } else{
        printf("A Carta %s - %s Venceu! E menos densa\n", codigo_cidade_carta2, nome_carta2);
        vitorias_carta2++;
    }

    if(PIB_per_capita_carta1 > PIB_per_capita_carta2){
        printf("A Carta %s - %s Venceu! Tem o maior PIB per Capita\n", codigo_cidade_carta1, nome_carta1);
        vitorias_carta1++;
    } else{
        printf("A Carta %s - %s Venceu! Tem o maior PIB per Capita\n\n", codigo_cidade_carta2, nome_carta2);
        vitorias_carta2++;
    }

    //Exibe o total de pontuação das duas cartas
    ("Total de Vitorias:\n");
    printf("%s: %d vitorias\n", nome_carta1, vitorias_carta1);
    printf("%s: %d vitorias\n\n", nome_carta2, vitorias_carta2);

    //Compara para mostrar o resultado de qual carta foi a vencedora
    if(vitorias_carta1 > vitorias_carta2){
        printf("A Carta %s - %s e a Grande Vencedora com %d pontos", codigo_cidade_carta1, nome_carta1, vitorias_carta1);
    } else if(vitorias_carta2 > vitorias_carta1){
        printf("A Carta %s - %s e a Grande Vencedora com %d pontos", codigo_cidade_carta2, nome_carta2, vitorias_carta2);
    } else{
        printf("Empate!! Ambas as Cartas tiveram o mesmo numero de Vitorias");
    }

    return 0;
}
