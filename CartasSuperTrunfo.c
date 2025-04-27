#include <stdio.h>
int main() {
    //Desafio - Super Trunfo
    //Declarando as Variáveis para o Desafio
    unsigned long int populacao_carta1;
    unsigned long int populacao_carta2;
    int pontos_turisticos_carta1;
    int pontos_turisticos_carta2;
    float area_carta1;
    float area_carta2;
    float pib_carta1;
    float pib_carta2;
    float densidade_populacional_carta1;
    float densidade_populacional_carta2;
    float pib_percapita_carta1;
    float pib_percapita_carta2;
    float super_poder_carta1;
    float super_poder_carta2;
    char carta1[2];
    char carta2[2];
    char estado_carta1[2];
    char estado_carta2[2];
    char codigo_carta1[5];
    char codigo_carta2[5];
    char cidade_carta1[30];
    char cidade_carta2[30];
    //Utilizando PRINTF e SCANF para o CADASTRO da CARTA 1
    printf("Digite um numero para a carta: \n");
    scanf("%s", &carta1);
    printf("Digite uma letra para a carta: \n");
    scanf("%s", &estado_carta1);
    printf("Digite um codigo para a carta: \n");
    scanf ("%s", &codigo_carta1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade_carta1);
    printf("Digite a populacao da cidade: \n");
    scanf("%u", &populacao_carta1);
    printf("Digite a area da cidade: \n");
    scanf("%f", &area_carta1);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_carta1);
    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontos_turisticos_carta1);
    // Calculando a DENSIDADE POPULACIONAL e PIB PER CAPITA para a CARTA 1
    densidade_populacional_carta1 = (populacao_carta1 / area_carta1);
    pib_percapita_carta1 = ((pib_carta1 * 10000000) / populacao_carta1);
    // Calculando SUPER PODER para CARTA 1
    super_poder_carta1 = (populacao_carta1 + area_carta1 + pib_carta1 + pontos_turisticos_carta1 + pib_percapita_carta1 + 1/densidade_populacional_carta1);
    //Utilizando PRINTF e SCANF para o CADASTRO da CARTA 2
    printf("Digite um numero para a carta: \n");
    scanf("%s", &carta2);
    printf("Digite uma letra para a carta: \n");
    scanf("%s", &estado_carta2);
    printf("Digite um codigo para a carta: \n");
    scanf ("%s", &codigo_carta2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade_carta2);
    printf("Digite a populacao da cidade: \n");
    scanf("%u", &populacao_carta2);
    printf("Digite a area da cidade: \n");
    scanf("%f", &area_carta2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_carta2);
    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontos_turisticos_carta2);
    // Calculando a DENSIDADE POPULACIONAL e PIB PER CAPITA para a CARTA 2
    densidade_populacional_carta2 = (populacao_carta2 / area_carta2);
    pib_percapita_carta2 = ((pib_carta2 * 10000000) / populacao_carta2);
    // Calculando SUPER PODER para CARTA 2
    super_poder_carta2 = (populacao_carta2 + area_carta2 + pib_carta2 + pontos_turisticos_carta2 + pib_percapita_carta2 + 1/densidade_populacional_carta2);
    //Apresentando as INFORMAÇÕES das CARTAS na tela
    printf("Carta: %s \n", carta1);
    printf("Estado: %s \n", estado_carta1);
    printf("Codigo: %s \n", codigo_carta1);
    printf("Nome da Cidade: %s \n", cidade_carta1);
    printf("Populacao: %u \n", populacao_carta1);
    printf("Area: %.2f km2 \n", area_carta1, " km2");
    printf("PIB: %.2f bilhoes de reais \n", pib_carta1, " bilhoes de reais");
    printf("Numero de Pontos Turisticos: %d \n", pontos_turisticos_carta1);
    printf("Densidade Populacional: %.2f hab/km2 \n", densidade_populacional_carta1);
    printf("PIB per Capita: %.2f reais \n", pib_percapita_carta1);
    printf("Carta: %s \n", carta2);
    printf("Estado: %s \n", estado_carta2);
    printf("Codigo: %s \n", codigo_carta2);
    printf("Nome da Cidade: %s \n", cidade_carta2);
    printf("Populacao: %u \n", populacao_carta2);
    printf("Area: %.2f km2 \n", area_carta2, " km2");
    printf("PIB: %.2f bilhoes de reais \n", pib_carta2, " bilhoes de reais");
    printf("Numero de Pontos Turisticos: %d \n", pontos_turisticos_carta2);
    printf("Densidade Populacional: %.2f hab/km2 \n", densidade_populacional_carta2);
    printf("PIB per Capita: %.2f reais \n", pib_percapita_carta2);
    //Comparando INFORMAÇÕES entre as CARTAS
    printf("COMPARACAO de CARTAS:\n");
    printf("Populacao: Carta 1 venceu (%d)\n", (populacao_carta1 > populacao_carta2));
    printf("Area: Carta 1 venceu (%d)\n", (area_carta1 > area_carta2));
    printf("PIB: Carta 1 venceu (%d)\n", (pib_carta1 > pib_carta2));
    printf("Numero de Pontos Turisticos: Carta 1 venceu (%d)\n", (pontos_turisticos_carta1 > pontos_turisticos_carta2));
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", (densidade_populacional_carta1 > densidade_populacional_carta2));
    printf("PIB per CAPITA: Carta 1 venceu (%d)\n", (pib_percapita_carta1 > pib_percapita_carta2));
    printf("SUPER PODER: Carta 1 venceu (%d)\n", (super_poder_carta1 > super_poder_carta2));
    return 0;
}
