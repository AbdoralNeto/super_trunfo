#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//funções para calcular a densidade demografica e o pib percapita de cada cidade
float calcular_densDemo(float num1, float num2){
    return num1/num2;
}

float calcular_pibPercapita(float num1, float num2){
    return num1/num2;
}


int main(){

    setlocale(LC_ALL, "Portuguese");

    char estado, codigo_da_carta[10], nome_cidade[30], estado2, codigo_da_carta2[10], nome_cidade2[30];
    int populacao, num_pontos_turistico, populacao2, num_pontos_turistico2;
    float area, pib, area2, pib2, dens_populacional,pib_perCapita,dens_populacional2,pib_perCapita2;

    /*Código simples como pediu o enunciado no desafio,
    fazendo uso de uma estrutura simples, e utilizando o que foi aprendido até agora,
    fazendo o uso de entrada e saída de dados via teclado.
    */
    //Cadastra a 1° carta
    printf("|------------------------|");
    printf("\n|--------CARTA 1---------|");
    printf("\n|------------------------|");

    printf("\nDigite um estado: ");  
    scanf(" %c",&estado);
    fflush(stdin);

    printf("Digite o codigo da carta: ");
    fgets(codigo_da_carta, 10, stdin);
    fflush(stdin);

    printf("Digite o nome da cidade: ");
    fgets(nome_cidade, 30, stdin);
    fflush(stdin);

    printf("Digite a populacao: ");
    scanf(" %d", &populacao);
    fflush(stdin);

    printf("Digite a Area: ");
    scanf(" %f", &area);
    fflush(stdin);

    printf("Digite o PIB: ");
    scanf(" %f", &pib);
    fflush(stdin);

    printf("Digite o N° de Pontos turisticos: ");
    scanf(" %d", &num_pontos_turistico);
    fflush(stdin);

    system("cls");
    //Cadastra a carta 2
    printf("|------------------------|");
    printf("\n|--------CARTA 2---------|");
    printf("\n|------------------------|");

    printf("\nDigite um estado: ");
    scanf(" %c",&estado2);
    fflush(stdin);

    printf("Digite o codigo da carta: ");
    fgets(codigo_da_carta2, 10, stdin);
    fflush(stdin);

    printf("Digite o nome da cidade: ");
    fgets(nome_cidade2, 30, stdin);
    fflush(stdin);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    fflush(stdin);

    printf("Digite a Area: ");
    scanf("%f", &area2);
    fflush(stdin);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    fflush(stdin);

    printf("Digite o N° de Pontos turisticos: ");
    scanf("%d", &num_pontos_turistico2);
    fflush(stdin);

    dens_populacional = calcular_densDemo(populacao, area);
    pib_perCapita = calcular_pibPercapita(pib, populacao);

    dens_populacional2 =calcular_densDemo(populacao2, area2);
    pib_perCapita2 = calcular_pibPercapita(pib2,populacao2);


    system("cls");
     //Exibe o resultado das cartas cadastradas
    printf("Carta1\n");
    printf("Estado: %c\n",estado);
    printf("Codigo da carta: %c%s", estado, codigo_da_carta);
    printf("Nome da cidade: %s", nome_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f Km²\n",area);
    printf("PIB: %.2f\n",pib);
    printf("Numero de Pontos Turisticos: %d\n",num_pontos_turistico);
    printf("Densidade Populacional: %.2f hab/km²\n",dens_populacional);
    printf("PIB per Capita: %.2f\n",pib_perCapita);

    printf("\n");
    printf("Carta2\n");
    printf("Estado: %c\n",estado2);
    printf("Codigo da carta: %c%s", estado2, codigo_da_carta2);
    printf("Nome da cidade: %s", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n",area2);
    printf("PIB: %.2f\n",pib2);
    printf("Numero de Pontos Turisticos: %d\n",num_pontos_turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n",dens_populacional2);
    printf("PIB per Capita: %.2f\n",pib_perCapita2);

    return 0;
}
