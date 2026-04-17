#include <stdio.h>


int main() {


    char estado;
    char codigoDaCarta [50];
    char nomeDaCidade1 [50];
    char nomeDaCidade2 [50];
    float populacao1;
    float populacao2;
    int numeroDePontosTuristicos1;
    int numeroDePontosTuristicos2;
    float area1, pib1;
    float area2, pib2;
    float densidadePopulacional1;
    float densidadePopulacional2;
    float pibPerCapita1;
    float pibPerCapita2;

 

    printf("Carta 1\n");

    printf("Estado: ");
    scanf("%s", &estado);

    printf("código: ");
    scanf("%s", &codigoDaCarta);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade1);

    printf("População: ");
    scanf("%f", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    densidadePopulacional1 = populacao1  /area1;

    printf("Pib: ");
    scanf("%f", &pib1);

    pibPerCapita1 = (pib1 * 1000000) / populacao1;

    printf("Número de pontos turísticos: ");
    scanf("%f", &numeroDePontosTuristicos1);

    printf("Densidade populacional: %.2f\n", densidadePopulacional1);
    
    printf("PIB per capita: %f\n", pibPerCapita1);

    printf("\n");


    
    printf("Carta 2\n");

    printf("Estado: ");
    scanf("%s", &estado);

    printf("código: ");
    scanf("%s", &codigoDaCarta);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade2);

    printf("População: ");
    scanf("%f", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    densidadePopulacional2 = populacao2  /area2;

    printf("Pib: ");
    scanf("%f", &pib2);

    pibPerCapita2 = (pib2 * 1000000) / populacao2;

    printf("Número de pontos turísticos: ");
    scanf("%f", &numeroDePontosTuristicos2);

    printf("Densidade populacional: %.2f\n", densidadePopulacional2);
    
    printf("PIB per capita: %f\n", pibPerCapita2);

    printf("\n");

 

  printf("Comparação de cartas (Atributo: População):\n" );

  printf("\n");

    if (populacao1 > populacao2) {

    printf("Carta 1 - %s: %.0f\n", nomeDaCidade1, populacao1);
    printf("Carta 2 - %s: %.0f\n", nomeDaCidade2, populacao2);
    printf("A cidade vencedora é: %s\n", nomeDaCidade1);

    } else {
    printf("Carta 1 - %s: %.0f\n", nomeDaCidade1, populacao1);
    printf("Carta 2 - %s: %.0f\n", nomeDaCidade2, populacao2);
    printf("A cidade vencedora é: %s\n", nomeDaCidade2);
    }

    printf("\n");


    return 0;
}