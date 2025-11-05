#include <stdio.h>

int main() {
    char estado1[3], estado2[3];
    char namecity1[50], namecity2[50];
    char codecity1[4], codecity2[4];
    int pointturiscity1, pointturiscity2;
    unsigned long int populcity1, populcity2;
    float areacity1, areacity2;
    float pibcity1, pibcity2;
    float calcpib1, calcpib2; // PIB per Capita
    float cdp1, cdp2; // Densidade Populacional
    float SuperPoder1, SuperPoder2;

   

    // COLETANDO DADOS

    // Primeira carta

    printf("\n--------------------------------------\n");
    printf("------CADASTRO DA PRIMEIRA CARTA------\n");
    printf("--------------------------------------\n\n");

    printf("Nome do estado (ex: SP): ");
    scanf("%2s", estado1);

    printf("Código da carta: ");
    scanf("%3s", codecity1);

    printf("Nome da cidade: ");
    scanf("%49s", namecity1);

    printf("Número de população: ");
    scanf("%u", &populcity1);

    printf("Área da cidade (km²): ");
    scanf("%f", &areacity1);

    printf("PIB da cidade (em bilhões): ");
    scanf("%f", &pibcity1);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pointturiscity1);

    printf("\n--------------------------------------\n");
    printf("----------CADASTRO CONCLUÍDO----------\n");
    printf("--------------------------------------\n");

    // Segunda carta

    printf("\n--------------------------------------\n");
    printf("------CADASTRO DA SEGUNDA CARTA-------\n");
    printf("--------------------------------------\n\n");

    printf("Nome do estado (ex: RJ): ");
    scanf("%2s", estado2);

    printf("Código da carta: ");
    scanf("%3s", codecity2);

    printf("Nome da cidade: ");
    scanf("%49s", namecity2);

    printf("Número de população: ");
    scanf("%u", &populcity2);

    printf("Área da cidade (km²): ");
    scanf("%f", &areacity2);

    printf("PIB da cidade (em bilhões): ");
    scanf("%f", &pibcity2);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pointturiscity2);

    printf("\n--------------------------------------\n");
    printf("----------CADASTRO CONCLUÍDO----------\n");
    printf("--------------------------------------\n");


    // Calculo do Pib per Capita

    calcpib1 = (pibcity1 * 1000000000) / populcity1;
    calcpib2 = (pibcity2 * 1000000000) / populcity2; 

    // Calculo do Densidade Populacional

    cdp1 = populcity1 / areacity1;
    cdp2 = populcity2 / areacity2;

    // Calculo do Super Poder

    SuperPoder1 = populcity1 + areacity1 + pibcity1 + calcpib1 + (1 / cdp1);

    SuperPoder2 = populcity2 + areacity2 + pibcity2 + calcpib2 + (1 / cdp2);


    // Exibindo os resultados


    printf("\n--------------------------------------\n");
    printf("----------PRIMEIRA CARTA--------------\n");
    printf("--------------------------------------\n");

    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codecity1);
    printf("Cidade: %s\n", namecity1);
    printf("População: %u\n", populcity1);
    printf("Área: %.2f km²\n", areacity1);
    printf("PIB: %.2f bilhões\n", pibcity1);
    printf("Pontos Turísticos: %d\n", pointturiscity1);
    printf("Densidade Populacional: %.2f hab/km² \n", cdp1);
    printf("Pib per Capita: %.2f reais \n", calcpib1);
    printf("Super Poder: %.2f \n", SuperPoder1 / 1000000);

    printf("\n--------------------------------------\n");
    printf("-----------SEGUNDA CARTA--------------\n");
    printf("--------------------------------------\n");

    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codecity2);
    printf("Cidade: %s\n", namecity2);
    printf("População: %u\n", populcity2);
    printf("Área: %.2f km²\n", areacity2);
    printf("PIB: %.2f bilhões\n", pibcity2);
    printf("Pontos Turísticos: %d\n", pointturiscity2);
    printf("Densidade Populacional: %.2f hab/km² \n", cdp2);
    printf("Pib per Capita: %.2f reais \n", calcpib2);
    printf("Super Poder: %.2f \n", SuperPoder2 / 1000000);
    

    // Resultado da comparação de Cartas


    if (SuperPoder1 > SuperPoder2)
    {
        printf("A Carta 1 venceu!\n");
    } else
    {
        printf("A Carta 2 venceu!\n");
    }

    return 0;
}
