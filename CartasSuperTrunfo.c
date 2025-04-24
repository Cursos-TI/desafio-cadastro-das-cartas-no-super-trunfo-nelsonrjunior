#include <stdio.h>
int main() {
    //Desafio - Super Trunfo
    //Nível Básico - Cadastro de 2 Cartas para o Desafio
    //Declarando as Variáveis para o Desafio
    int populacao_carta1;
    int populacao_carta2;
    int pontos_turisticos_carta1;
    int pontos_turisticos_carta2;
    float area_carta1;
    float area_carta2;
    float pib_carta1;
    float pib_carta2;
    char carta1[2];
    char carta2[2];
    char estado_carta1[2];
    char estado_carta2[2];
    char codigo_carta1[5];
    char codigo_carta2[5];
    char cidade_carta1[30];
    char cidade_carta2[30];
    //Utilizando PRINTF e SCANF para que o usuário posso cadastrar as cartas manualmente
    printf("Digite um numero para a carta: \n");
    scanf("%s", &carta1);
    printf("Digite uma letra para a carta: \n");
    scanf("%s", &estado_carta1);
    printf("Digite um codigo para a carta: \n");
    scanf ("%s", &codigo_carta1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade_carta1);
    printf("Digite a populacao da cidade: \n");
    scanf("%d", &populacao_carta1);
    printf("Digite a area da cidade: \n");
    scanf("%f", &area_carta1);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_carta1);
    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontos_turisticos_carta1);
    printf("Digite um numero para a carta: \n");
    scanf("%s", &carta2);
    printf("Digite uma letra para a carta: \n");
    scanf("%s", &estado_carta2);
    printf("Digite um codigo para a carta: \n");
    scanf ("%s", &codigo_carta2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade_carta2);
    printf("Digite a populacao da cidade: \n");
    scanf("%d", &populacao_carta2);
    printf("Digite a area da cidade: \n");
    scanf("%f", &area_carta2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_carta2);
    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontos_turisticos_carta2);
    //Apresentando as informações das cartas na tela
    printf("Carta: %s \n", carta1);
    printf("Estado: %s \n", estado_carta1);
    printf("Codigo: %s \n", codigo_carta1);
    printf("Nome da Cidade: %s \n", cidade_carta1);
    printf("Populacao: %d \n", populacao_carta1);
    printf("Area: %f km2 \n", area_carta1, " km²");
    printf("PIB: %f bilhoes de reais \n", pib_carta1, " bilhoes de reais");
    printf("Numero de Pontos Turisticos: %d \n", pontos_turisticos_carta1);
    printf("Carta: %s \n", carta2);
    printf("Estado: %s \n", estado_carta2);
    printf("Codigo: %s \n", codigo_carta2);
    printf("Nome da Cidade: %s \n", cidade_carta2);
    printf("Populacao: %d \n", populacao_carta2);
    printf("Area: %f km2 \n", area_carta2, " km²");
    printf("PIB: %f bilhoes de reais \n", pib_carta2, " bilhoes de reais");
    printf("Numero de Pontos Turisticos: %d \n", pontos_turisticos_carta2);
    return 0;
}
