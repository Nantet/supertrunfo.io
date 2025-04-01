#include <stdio.h>

int main() {
    // Variáveis da primeira carta
    char estado1;
    char codigo1[4];
    char nomedacidade1[50];         
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    
    // Dados da Carta 1
    printf("Cadastro da carta 1:\n");

    printf("Digite seu Estado (A-H): ");
    scanf(" %c", &estado1);  // Lê o estado

    printf("Codigo da Carta: ");
    scanf("%s", codigo1);  // Lê o código da carta (como "A01")

    printf("Digite o nome da Cidade: ");
    getchar();  // Limpa o buffer de entrada
    scanf("%[^\n]", nomedacidade1);  // Lê o nome da cidade, permitindo espaços

    printf("Populacao: ");
    scanf("%d", &populacao1);  // Lê a população

    printf("Area (em km2): ");
    scanf("%f", &area1);  // Lê a área em km²

    printf("Pib (Em bilhoes de reais): ");
    scanf("%f", &pib1);  // Lê o PIB em bilhões de reais

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos1);  // Lê o número de pontos turísticos

    // Exibindo os dados da carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);

    // Variáveis da primeira carta
    char estado2;
    char codigo2[4];
    char nomedacidade2[50];         
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
 
    // Dados da Carta 1
    printf("Cadastro da carta 2:\n");

    printf("Digite seu Estado (A-H): ");
    scanf(" %c", &estado2);  // Lê o estado

    printf("Codigo da Carta: ");
    scanf("%s", codigo2);  // Lê o código da carta (como "A01")

    printf("Digite o nome da Cidade: ");
    getchar();  // Limpa o buffer de entrada
    scanf("%[^\n]", nomedacidade2);  // Lê o nome da cidade, permitindo espaços

    printf("Populacao: ");
    scanf("%d", &populacao2);  // Lê a população

    printf("Area (em km2): ");
    scanf("%f", &area2);  // Lê a área em km²

     printf("Pib (Em bilhoes de reais): ");
    scanf("%f", &pib2);  // Lê o PIB em bilhões de reais

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos2);  // Lê o número de pontos turísticos

    // Exibindo os dados da carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);
    return 0;
}
