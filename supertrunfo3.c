#include <stdio.h> 
int main() {
    char estado1[10];
    int carta1;
    char cidade1[30];
    long signed int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    char estado2[10];
    int carta2;
    char cidade2[30];
    long signed int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade1;
    float densidade2;
    float pibPerCapita1;
    float pibPerCapita2;
    float invdensidade1;
    float invdensidade2;
    float sp1;
    float sp2;

    printf("Estado: ");
    scanf("%s", estado1);
    printf("Codigo da Carta: ");
    scanf("%d", &carta1);
    printf("Cidade: ");
    scanf("%s", cidade1);
    printf("Populacao: ");
    scanf("%1d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    printf("CARTA 1\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da Carta: %d\n", carta1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %1d\n", populacao1);
    printf("Area: %.2f km quadrado\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n");

    printf("Estado: ");
    scanf("%s", estado2);
    printf("Codigo da Carta: ");
    scanf("%d", &carta2);
    printf("Cidade: ");
    scanf("%s", cidade2);
    printf("Populacao: ");
    scanf("%1d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2); 

    printf("\n");

    printf("CARTA 2\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da Carta: %d\n", carta2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %1d\n", populacao2);
    printf("Area: %.2f km quadrado\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
   
    printf("\n");

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    invdensidade1 = area1 / populacao1;
    invdensidade2 = area2 / populacao2;

    printf("Densidade da carta 1: %.2f\n", densidade1);
    printf("Densidade da carta 2: %.2f\n", densidade2);

    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    printf("PIB per capita da carta 1: %.2f\n", pibPerCapita1);
    printf("PIB per capita da carta 2: %.2f\n", pibPerCapita2);

    sp1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + invdensidade1;
    sp2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + invdensidade2;

    printf("Superpoder da carta 1: %.2f\n", sp1);
    printf("Superpoder da carta 2: %.2f\n", sp2);

    printf("Comparação de atributos:\n");
    printf("Populacao: Carta %1d venceu (%1d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? 1 : 0);
    printf("Area: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2) ? 1 : 0);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos1) ? 1 : 2, (pontosTuristicos1 > pontosTuristicos1) ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", ( densidade1 < densidade2) ? 1 : 2, ( densidade1 < densidade2) ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 >  pibPerCapita2) ? 1 : 2, (pibPerCapita1 >  pibPerCapita2) ? 1 : 0);
    printf("Superpoder: Carta %d venceu (%d)\n", (sp1 > sp2) ? 1 : 2, (sp1 > sp2) ? 1 : 0);
    
    return 0;
}