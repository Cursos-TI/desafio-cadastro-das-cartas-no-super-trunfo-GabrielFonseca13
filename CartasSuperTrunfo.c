#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {   
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[3];      
    char nomeCidade1[75];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[3];
    char nomeCidade2[75];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    // Entrada de dados para a primeira carta
    printf("Cadastro da Carta 1: \n");

    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o Número da Carta (ex: 01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade (use '_' para espaços): ");
    scanf("%s", nomeCidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n"); // Linha em branco para separar as entradas
    
    // Entrada de dados para a segunda carta
    printf("Cadastro da Carta 2: \n");

    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Número da Carta (ex: 01): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade (use '_' para espaços): ");
    scanf("%s", nomeCidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n"); // Linha em branco para separar a exibição dos Dados das Cartas:


    // Exibição dos Dados das Cartas:
    // Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: R$ %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n"); // Linha em branco para separar as cartas

    // Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    
    return 0;
}
