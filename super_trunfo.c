#include <stdio.h>

int main() {
    // Variáveis Carta 01
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados da Carta 1
    printf("Digite os dados da Carta 1:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    getchar();
    printf("Nome da Cidade: ");
    fgets(cidade1,sizeof(cidade1), stdin); // Lê nome com espaços

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    getchar();
    printf("Nome da Cidade: ");
    fgets(cidade2,sizeof(cidade2), stdin); // Lê nome com espaços

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculando a Densidade Populacional
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Calculando o PIB per Capita
    float pib_per_capita1 = (populacao1 != 0) ? pib1 / populacao1 : 0;
    float pib_per_capita2 = (populacao2 != 0) ? pib2 / populacao2 : 0;

    // Calculando o Super Poder (soma dos atributos)
    float super_poder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pib_per_capita1 + (1.0 / densidade1);
    float super_poder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pib_per_capita2 + (1.0 / densidade2);

    // Exibição dos dados das Cartas 
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    // Comparação dos atributos
    printf("\nComparacao de Cartas:\n");

    // Comparando População
    printf("Populacao: %s venceu (%d)\n", (populacao1 > populacao2) ? "Carta 1" : "Carta 2", (populacao1 > populacao2));

    // Comparando Área
    printf("Area: %s venceu (%d)\n", (area1 > area2) ? "Carta 1" : "Carta 2", (area1 > area2));

    // Comparando PIB
    printf("PIB: %s venceu (%d)\n", (pib1 > pib2) ? "Carta 1" : "Carta 2", (pib1 > pib2));

    // Comparando Pontos Turísticos
    printf("Pontos Turisticos: %s venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? "Carta 1" : "Carta 2", (pontosTuristicos1 > pontosTuristicos2));

    // Comparando Densidade Populacional (menor vence)
    printf("Densidade Populacional: %s venceu (%d)\n", (densidade1 < densidade2) ? "Carta 1" : "Carta 2", (densidade1 < densidade2));

    // Comparando PIB per Capita
    printf("PIB per Capita: %s venceu (%d)\n", (pib_per_capita1 > pib_per_capita2) ? "Carta 1" : "Carta 2", (pib_per_capita1 > pib_per_capita2));

    // Comparando Super Poder
    printf("Super Poder: %s venceu (%d)\n", (super_poder1 > super_poder2) ? "Carta 1" : "Carta 2", (super_poder1 > super_poder2));


    return 0;
}
