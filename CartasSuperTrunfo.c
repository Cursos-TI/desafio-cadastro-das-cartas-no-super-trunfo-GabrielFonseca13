#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {   
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[3];      
    char nomeCidade1[75];
    unsigned long int populacao1; // Alterado o Tipo 
    float area1;
    float pib1;
    int pontosTuristicos1;
    // Atributos incluídos no desafio Aventureiro
    float densidadePopulacional1;
    float pibPerCapita1;
    // Atributo Incluído no Desafio Mestre
    float superPoder1;

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[3];
    char nomeCidade2[75];
    unsigned long int populacao2; // Alterado o Tipo 
    float area2;
    float pib2;
    int pontosTuristicos2;
    // Atributos incluídos no desafio Aventureiro
    float densidadePopulacional2;
    float pibPerCapita2;
    // Atributo Incluído no Desafio Mestre
    float superPoder2;
    
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

    // Cálculando os novos atributos 
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    // Exibição dos Dados das Cartas:
    // Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional Hab/Km: %.2f\n", densidadePopulacional1);
    printf("Pib Per Capita: %.2f\n", pibPerCapita1);
    
    
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
    printf("Densidade Populacional Hab/Km: %.2f\n", densidadePopulacional2);
    printf("Pib Per Capita: %.2f\n", pibPerCapita2);
    
    printf("\n"); // Linha em branco para separar as comparações

    printf("Comparação das cartas: \n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2); // Menor Vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
