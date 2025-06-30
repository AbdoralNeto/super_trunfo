#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char estado, codigo_da_carta[5], nome_cidade[20], estado2, codigo_da_carta2[5], nome_cidade2[20];
    int populacao, num_pontos_turistico, populacao2, num_pontos_turistico2;
    float area, pib, area2, pib2;

    /*Código simples como pediu o enunciado no desafio,
    fazendo uso de uma estrutura simples, e utilizando o que foi aprendido até agora,
    fazendo o uso de entrada e saída de dados via teclado.
    */

    printf("|------------------------|");
    printf("\n|--------CARTA 1---------|");
    printf("\n|------------------------|");

    printf("\nDigite um estado: ");  
    scanf(" %c",&estado);

    printf("\nDigite o codigo da carta: ");
    scanf(" %s",codigo_da_carta);

    printf("\nDigite o nome da cidade: ");
    scanf(" %s",nome_cidade);

    printf("\nDigite a populacao: ");
    scanf(" %d", &populacao);

    printf("\nDigite a Area: ");
    scanf(" %f", &area);

    printf("\nDigite o PIB: ");
    scanf(" %f", &pib);

    printf("\nDigite o N° de Pontos turisticos: ");
    scanf(" %d", &num_pontos_turistico);

    system("cls"); //system("cls") - para limpeza de tela e melhorar a interatividade com usuário.

     printf("|------------------------|");
    printf("\n|--------CARTA 2---------|");
    printf("\n|------------------------|");

    printf("\nDigite um estado: ");
    scanf(" %c",&estado2);

    printf("\nDigite o codigo da carta: ");
    scanf("%s",codigo_da_carta2);

    printf("\nDigite o nome da cidade: ");
    scanf("%s",nome_cidade2);

    printf("\nDigite a populacao: ");
    scanf("%d", &populacao2);

    printf("\nDigite a Area: ");
    scanf("%f", &area2);

    printf("\nDigite o PIB: ");
    scanf("%f", &pib2);

    printf("\nDigite o N° de Pontos turisticos: ");
    scanf("%d", &num_pontos_turistico2);

    system("cls");

    printf("Carta1");
    printf("\nEstado: %c",estado);
    printf("\nCodigo da carta: %c%s", estado, codigo_da_carta);
    printf("\nNome da cidade: %s", nome_cidade);
    printf("\nPopulacao: %d", populacao);
    printf("\nArea: %.2f",area);
    printf("\nPIB: %.2f",pib);
    printf("\nNumero de Pontos Turisticos: %d",num_pontos_turistico);

    printf("\n");
    printf("\nCarta2");
    printf("\nEstado: %c",estado2);
    printf("\nCodigo da carta: %c%s", estado2, codigo_da_carta2);
    printf("\nNome da cidade: %s", nome_cidade2);
    printf("\nPopulacao: %d", populacao2);
    printf("\nArea: %.2f",area2);
    printf("\nPIB: %.2f",pib2);
    printf("\nNumero de Pontos Turisticos: %d",num_pontos_turistico2);

    return 0;
}
