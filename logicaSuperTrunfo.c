#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
struct Carta{
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    // Cadastro das Cartas:
    struct Carta carta1;
    struct Carta carta2;
    
    // Entrada de dados - carta 1
    printf ("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf("%c", &carta1.estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", &carta1.codigo);

    printf("Nome da Cidade: ");
    scanf("%[^\n]", &carta1.nomeCidade);

    printf ("População:");
    scanf("%d", &carta1.populacao);

    printf("Área (em km²): ");
    scanf ("%f", &carta1.area);

    printf("PIB: ");
    scanf ("%f", &carta1.pib);

    printf("Números de pontos Turísticos: ");
    scanf ("%d", &carta1.pontosTuristicos);

    //Calculos de dados - carta 2

    printf("\n=== Cadastro da Carta 2===\n");

    printf("Estado (A-H): ");
    scanf ("%c", &carta2.estado);

    printf("Código da Carta (ex: B03):");
    scanf ("%s", &carta2.codigo);

    printf("Nome da Cidade:");
    scanf("%[^\n]", &carta2.nomeCidade);

    printf("População:");
    scanf("%d", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2. area);

    printf("PIB:");
    scanf("%f", &carta2.pib);

    printf("Número de Pontos Turísticos:");
    scanf("%d", &carta2.pontosTuristicos);
    
    // Cálculos - Carta 2
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    //Exibição dos dados
    printf("\n==== Carta 1 ====\n");
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("Populção: %d\n", carta1.populacao);
    printf("Área: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Densidade populacional: %.2f hab/km² \n" , carta1.densidadePopulacional);
    printf("PIB per capita: %.2f\n", carta1.pibPerCapita);

    printf("\n==== Carta 2 ====\n");
    printf("Código: %s\n", carta2.codigo);
    printf(" Cidade: %s\n", carta2.nomeCidade);
    printf("Populçao: %s\n", carta2.populacao);
    printf("Área: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Densidade Populacional: %.2f\n", carta2.densidadePopulacional);
    printf("PIB per capita: %.2f hab/km²\n", carta2. pibPerCapita);

    //Comparação (usando o PIB per capita)

    return 0;
}
