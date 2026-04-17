#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado;
    char codigoDaCarta [50];
    char nomeDaCidade [50];
    float populacao;
    int numeroDePontosTuristicos;
    float area, pib;
    float densidadePopulacional;
    float pibPerCapita;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    printf("Carta 1\n");

    printf("Estado: ");
    scanf("%s", &estado);

    printf("código: ");
    scanf("%s", &codigoDaCarta);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade);

    printf("População: ");
    scanf("%f", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    densidadePopulacional = populacao  /area;

     printf("Pib: ");
    scanf("%f", &pib);

    pibPerCapita = (pib * 1000000) / populacao;

    printf("Número de pontos turísticos: ");
    scanf("%f", &numeroDePontosTuristicos);

    printf("Densidade populacional: %.2f\n", densidadePopulacional);
    
    printf("PIB per capita: %f\n", pibPerCapita);

    printf("\n");

    
     printf("Carta 2\n");

    printf("Estado: ");
    scanf("%s", &estado);

    printf("código: ");
    scanf("%s", &codigoDaCarta);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade);

    printf("População: ");
    scanf("%f", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    densidadePopulacional = populacao  /area;

     printf("Pib: ");
    scanf("%f", &pib);

    pibPerCapita = (pib * 1000000) / populacao;

     printf("Número de pontos turísticos: ");
    scanf("%f", &numeroDePontosTuristicos);

    printf("Densidade populacional: %.2f\n", densidadePopulacional);
    
    printf("PIB per capita: %f\n", pibPerCapita);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
