#include <stdio.h>

int main(){
      
       // Declaração de variáveis para as cartas
    char estado1, estado2;
    char codigoCarta1[5], codigoCarta2[5];
    char nomeCidade1[50] = "londrina", nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Leitura dos dados para a carta 1
    printf("Digite o estado da carta 1 (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta 1 (XX3YY): ");
    scanf(" %s", codigoCarta1);
    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %49s", nomeCidade1);
    printf("Digite a população da cidade da carta 1: ");
    scanf(" %d", &populacao1);
    printf("Digite a área da cidade da carta 1 (em km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade da carta 1 (em bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos da cidade da carta 1: ");
    scanf(" %d", &pontosTuristicos1);

    // Leitura dos dados para a carta 2
    printf("Digite o estado da carta 2 (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta 2 (XXYY): ");
    scanf(" %s", codigoCarta2);
    printf("Digite o nome da cidade da carta 2: ");
    scanf(" %49s", nomeCidade2);
    printf("Digite a população da cidade da carta 2: ");
    scanf(" %d", &populacao2);
    printf("Digite a área da cidade da carta 2 (em km²): ");
    scanf(" %f", &area2);
    printf("Digite o PIB da cidade da carta 2 (em bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos da cidade da carta 2: ");
    scanf(" %d", &pontosTuristicos2);

    // Exibição dos dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);




    return 0;
}