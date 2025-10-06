// Aluno: Guilherme Camargo Valese
//
// Super Trunfo

#include <stdio.h>

int main()
{
    char estado_1;        // Letra que representa o estado
    char cod_carta_1[4];  // Código da carta(letra + numero de 01 a 04)
    char nome_1[50];      // Nome da cidade
    int populacao_1;      // Numero de habitantes da cidade
    float area_1;         // Area da cidade em km²
    float pib_1;          // Produto Interno Bruto da cidade
    int pts_turisticos_1; // Pontos turísticos da cidade

    char estado_2;        // Letra que representa o estado
    char cod_carta_2[4];  // Código da carta(letra + numero de 01 a 04)
    char nome_2[50];      // Nome da cidade
    int populacao_2;      // Numero de habitantes da cidade
    float area_2;         // Area da cidade em km²
    float pib_2;          // Produto Interno Bruto da cidade
    int pts_turisticos_2; // Pontos turísticos da cidade

    printf("Super Trunfo - Cadastro de Cartas\n");
    printf("Insira as informações da primeira carta:\n");
    printf("Digite a letra do estado: ");
    scanf(" %c", &estado_1);

    printf("Digite o código da carta:");
    scanf("%s", cod_carta_1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome_1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao_1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area_1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_1); 

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pts_turisticos_1);

    printf("Agora insira as informações da segunda carta:\n");
    printf("Digite a letra do estado: ");
    scanf(" %c", &estado_2);

    printf("Digite o código da carta:");
    scanf("%s", cod_carta_2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome_2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao_2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area_2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pts_turisticos_2);

    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado_1);
    printf("Código da carta: %s\n", cod_carta_1);
    printf("Nome da cidade: %s\n", nome_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f\n", pib_1);
    printf("Pontos turísticos: %d\n", pts_turisticos_1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado_2);
    printf("Código da carta: %s\n", cod_carta_2);
    printf("Nome da cidade: %s\n", nome_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f\n", pib_2);
    printf("Pontos turísticos: %d\n", pts_turisticos_2);

    return 0;
}
