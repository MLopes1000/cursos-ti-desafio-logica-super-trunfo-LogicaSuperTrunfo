#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

//
    char estado [50];
    char codigoDaCarta [50];
    char nomeDaCidade1 [50];
    char nomeDaCidade2 [50];
    unsigned long int populacao1;
    unsigned long int populacao2;
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
    scanf("%lu", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    densidadePopulacional1 = populacao1  /area1;

    printf("Pib: ");
    scanf("%f", &pib1);

    pibPerCapita1 = (pib1 * 1000000) / populacao1;

    printf("Número de pontos turísticos: ");
    scanf("%d", &numeroDePontosTuristicos1);

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
    scanf("%lu", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    densidadePopulacional2 = populacao2  /area2;

    printf("Pib: ");
    scanf("%f", &pib2);

    pibPerCapita2 = (pib2 * 1000000) / populacao2;

    printf("Número de pontos turísticos: ");
    scanf("%d", &numeroDePontosTuristicos2);

    printf("Densidade populacional: %.2f\n", densidadePopulacional2);
    
    printf("PIB per capita: %f\n", pibPerCapita2);

    printf("\n");

int escolhaJogador;  
  
  printf("--- Comparação de cartas---\n");  
  printf("Escolha sua opcao:\n");  
  printf("1. População\n");  
  printf("2. Área\n");  
  printf("3. Pib\n");  
  printf("4. Densidade populacional\n");  
  printf("5. Número de Pontos Turísticos\n");  
  scanf("%d", &escolhaJogador);  

  switch (escolhaJogador)
  {
  case 1:
      if (populacao1 > populacao2)
            printf("Carta 1 venceu\n");

        else if (populacao1 < populacao2)
            printf("Carta 2 venceu\n");

        else
            printf("Empatou\n"); 
    break; 
    
  case 2:
   
        if (area1 > area2)
            printf("Carta 1 venceu\n");

        else if (area1 < area2)
            printf("Carta 2 venceu\n");

        else
            printf("Empatou\n");
    break;

  case 3:
     if (pib1 > pib2)
            printf("Carta 1 venceu\n");
        else if (pib1 < pib2)
            printf("Carta 2 venceu\n");
        else
            printf("Empatou\n");
    break;  

  case 4:
      if (densidadePopulacional1 < densidadePopulacional2)
            printf("Carta 1 venceu\n");
        else if (densidadePopulacional1 > densidadePopulacional2)
            printf("Carta 2 venceu\n");
        else
            printf("Empatou\n");
    break;  

    case 5:
       if (numeroDePontosTuristicos1 > numeroDePontosTuristicos2)
        printf("Carta 1 venceu\n");
    else if (numeroDePontosTuristicos1 < numeroDePontosTuristicos2)
        printf("Carta 2 venceu\n");
    else
        printf("Empatou\n");

break; 
  
  default:
   printf("Opção invalida\n");  
    break;
  }




 



 
    return 0;
}