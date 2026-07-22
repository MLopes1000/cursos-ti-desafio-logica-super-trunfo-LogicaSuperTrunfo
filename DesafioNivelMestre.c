#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {


    char estado1 [50];
    char estado2 [50];
    char codigoDaCarta1 [50];
    char codigoDaCarta2 [50];
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
    scanf(" %[^\n]", estado1);

    printf("código: ");
    scanf("%s", codigoDaCarta1);

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
    scanf(" %[^\n]", estado2);

    printf("código: ");
    scanf("%s", codigoDaCarta2);

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


   int atributo1, atributo2;
   const char *nomeAtributo1;
   const char *nomeAtributo2;
   float resultado1A, resultado2A, 
          resultado1B, resultado2B;

    
// Início do jogo
printf("Bem-vindo ao jogo!\n");
printf("Segue os atributos de cada carta\n");
printf("1. População\n");
printf("2. Pib\n");
printf("3. Número de Pontos Turísticos\n");
printf("4. Pib Per Capita\n");
printf("5. Área\n");
printf("6. Densidade Populacional\n");
printf("\n");

printf("Escolha o primeiro atributo.\n");
printf("Atributo:  ");
scanf("%d", &atributo1);

printf("\n");

if (atributo1 < 1 || atributo1 > 6)
{
    printf("Opção inválida!\n\n");
    return 1;
}


printf("Escolha o segundo atributo.\n");
printf("Atributo: ");
scanf("%d", &atributo2);

printf("\n");

if (atributo2 < 1 || atributo2 > 6)
{
    printf("Opção inválida!\n\n");
    return 1;
}

printf("\n");

if (atributo1 == atributo2)
{
  printf("Os atributos devem ser diferentes. Tente novamente!\n\n");
  return 1;

}else{


  switch (atributo1)
  {
 case 1:
    nomeAtributo1 = "População\n";
    resultado1A = populacao1;
    resultado2A = populacao2;
    break;

  case 2:
    nomeAtributo1 = "Pib\n";
    resultado1A = pib1;
    resultado2A = pib2;
    break;

  case 3:
    nomeAtributo1 = "Número de Pontos Turísticos\n";
    resultado1A = numeroDePontosTuristicos1;
    resultado2A = numeroDePontosTuristicos2;
    break;

  case 4:
    nomeAtributo1 = "Pib Per Capita\n";
    resultado1A = pibPerCapita1;
    resultado2A = pibPerCapita2;
    break;

  case 5:
    nomeAtributo1 ="Área\n";
    resultado1A = area1;
    resultado2A = area2;
    break;

  case 6:
    nomeAtributo1 = "Densidade Populacional\n";
    resultado1A = -densidadePopulacional1;
    resultado2A = -densidadePopulacional2;
    break;
  
  default:
    printf("Opção inválida\n");
    return 1;
  }


  switch (atributo2)
  {
 case 1:
    nomeAtributo2 = "População\n";
    resultado1B = populacao1;
    resultado2B = populacao2;
    break;

  case 2:
    nomeAtributo2 = "Pib\n";
    resultado1B = pib1;
    resultado2B = pib2;
    break;

  case 3:
    nomeAtributo2 = "Número de Pontos Turísticos\n";
    resultado1B = numeroDePontosTuristicos1;
    resultado2B = numeroDePontosTuristicos2;
    break;

  case 4:
    nomeAtributo2 = "Pib Per Capita\n";
    resultado1B = pibPerCapita1;
    resultado2B = pibPerCapita2;
    break;

  case 5:
    nomeAtributo2 ="Área\n";
    resultado1B = area1;
    resultado2B = area2;
    break;

  case 6:
    nomeAtributo2 = "Densidade Populacional\n";
    resultado1B = -densidadePopulacional1;
    resultado2B = -densidadePopulacional2;
    break;
  
  default:
    printf("Opção inválida\n");
    return 1;
  }

}

float somaCarta1 = resultado1A + resultado1B;
float somaCarta2 = resultado2A + resultado2B;

printf("\n===== COMPARAÇÃO =====\n\n");

printf("Primeiro atributo: %s", nomeAtributo1);

printf("%s: %.2f\n", estado1, resultado1A);
printf("%s: %.2f\n\n", estado2, resultado2A);

printf("Segundo atributo: %s", nomeAtributo2);

printf("%s: %.2f\n", estado1, resultado1B);
printf("%s: %.2f\n\n", estado2, resultado2B);

printf("Soma da Carta 1: %.2f\n", somaCarta1);
printf("Soma da Carta 2: %.2f\n", somaCarta2);

printf("\n");

if (somaCarta1 > somaCarta2)
{
    printf("Carta 1 %s: %.2f - Carta 1 venceu!\n\n", estado1, somaCarta1);
}
else if (somaCarta2 > somaCarta1)
{
    printf("Carta 2 %s: %.2f - Carta 2 venceu!\n\n", estado2, somaCarta2);
}
else
{
    printf("Empate!\n");
}



    return 0;
}
    