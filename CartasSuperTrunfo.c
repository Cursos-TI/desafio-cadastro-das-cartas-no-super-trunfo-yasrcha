#include <stdio.h>

int main() {

    // Variáveis dos dados das cartas.
    char estado;
    int codigoDaCarta;
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    // Entrada de dados
    printf("Digite o uma letra de A-H para o estado: ");
    scanf("%c", &estado);
    printf("Digite um código de 01-04 para a cidade: ");
    scanf(" %d", &codigoDaCarta);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s”", &nomeCidade); // scanf não reconhece espaço, por isso foi necessário o uso do "%[^\n]s"
    printf("Informe a população da cidade: ");
    scanf(" %d", &populacao);
    printf("Informe a área da cidade: ");
    scanf("%f", &area);
    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib);
    printf("Informe o número de pontos turisticos na cidade: ");
    scanf("%d", &pontosTuristicos);

    // Saída de dados
    printf("\n\n=====================\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %c0%d\n", estado, codigoDaCarta);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: R$%.2f Bilhões\n", pib);
    printf("Número de pontos turísticos: %.2f\n", pib);
    printf("=====================\n");

    return 0;
}