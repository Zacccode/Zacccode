#include <stdio.h>

int main() {

    //Nivel Novato - Determinando Variáveis
    char carta[50], carta2[50], estado[50], estado2[50], cidade[50], cidade2[50];
    int turistico, turistico2;
    float pib, pib2, area, area2;
    unsigned long int populacao, populacao2;

    // Primeira Carta - Coleta de dados do Usuário
    printf("Bem vindo ao Super Trundo de Países, preencha sua primeira carta:\n");
    printf("Digite o Estado: ");
    fgets(estado, 50, stdin);
    printf("Digite a Cidade: ");
    fgets(cidade, 50, stdin);
    printf("Digite o Código da Carta: ");
    fgets(carta, 50, stdin);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &turistico);
    printf("Digite o Número da População: ");
    scanf("%lu", &populacao);
    printf("Digite o PIB local: ");
    scanf("%f", &pib);
    printf("Digite a Área (em Km2): ");
    scanf("%f", &area);

    while (getchar() != '\n');

    // Segunda Carta - Coleta de Dados do Usuário
    printf("Muito bem, agora preencha a segunda carta:\n");
    printf("Digite o Estado: ");
    fgets(estado2, 50, stdin);
    printf("Digite a Cidade: ");
    fgets(cidade2, 50, stdin);
    printf("Digite o Código da Carta: ");
    fgets(carta2, 50, stdin);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &turistico2);
    printf("Digite o Número da População: ");
    scanf("%lu", &populacao2);
    printf("Digite o PIB local: ");
    scanf("%f", &pib2);
    printf("Digite a Área (em Km2): ");
    scanf("%f", &area2);

    //Nível Aventureiro
    //Dividir População pela área para Densidade Populacional
    float densidade;
    float densidade2;
    densidade = populacao / area;
    densidade2 = populacao2 / area2;

    //Dividir o PIB pela População
    float percapta;
    float percapta2;
    percapta2 = pib2 / populacao2;
    percapta = pib / populacao;

    //Nível Mestre
    /*Variavel do Super poder = 
    soma (população, área, PIB, número de pontos turísticos, 
    PIB per capita e o inverso da densidade populacional) */
    float superpoder;
    float superpoder2;
    superpoder = (float) populacao + area + pib + turistico + percapta + (1/densidade);
    superpoder2 = (float) populacao2 + area2 + pib2 + turistico2 + percapta2 + (1/densidade2);
    //APRESENTAÇÃO DAS CARTAS (Comparação logo abaixo - terceiro comentário)
    //Exibir o resultado da Primeira Carta
    printf("Carta 1:\n");
    printf("Estado: %s", estado);
    printf("Código da Carta: %s", carta);
    printf("Nome da Cidade: %s", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turistico);
    printf("A densidade populacional é: %.2f hab/km²\n", densidade);
    printf("O PIB per Capta é: %.2f reais\n", percapta);
    printf("Super Poder: %.2f\n", superpoder);

    //Exibir o resultado da Segunda Carta
    printf("Carta 2:\n");
    printf("Estado: %s", estado2);
    printf("Código da Carta: %s", carta2);
    printf("Nome da Cidade: %s", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turistico2);
    printf("A densidade populacional é: %.2f hab/km²\n", densidade2);
    printf("O PIB per Capta é: %.2f reais\n", percapta2);
    printf("Super Poder: %.2f\n", superpoder2);

    //Comparação das cartas
    //Onde 1 significa que a carta 1 venceu e 0 a carta 2 (A carta com menor valor em densidade populacional vence)
    printf("\nLadies and Gentlemans, se inicia agora a comparação para determinação do VENCEDOR!\n");
    printf("Se a categoria apresentar o número 1, significa que a carta 1 foi vencedora desta categoria!\n");
    printf("Se a categoria aprensar o número 0, significa que a carta 2 foi vencedora desta categoria!\n");
    printf("População: %d venceu!\n", populacao > populacao2);
    printf("Área: %d venceu!\n", area > area2);
    printf("PIB: %d venceu!\n", pib > pib2);
    printf("Pontos Turísticos: %d venceu!\n", turistico > turistico2);
    printf("Densidade Populacional: %d venceu!\n", densidade < densidade2);
    printf("PIB per Capta: %d venceu!\n", percapta > percapta2);
    printf("Super Poder: %d venceu!\n", superpoder > superpoder2);

    return 0;

}