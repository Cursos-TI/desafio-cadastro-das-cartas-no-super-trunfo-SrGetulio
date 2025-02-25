#include <stdio.h>

int main () {

    printf("Jogo Super Trunfo - Iniciante \n"); 

    printf ("Países!\n");

    //Declaração de variáveis;
    char estado[1], estado2[1];
    char codigo[3], codigo2[3];
    char cidade[20], cidade2[20];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int turistico, turistico2;
    float mediaA01, mediaA02, mediaB01, mediaB02;

    //A01;
    printf("Carta 1\n");

    printf("Digite o Primeiro Estado:\n");
    scanf("%s", &estado);

    printf("Digite o Código:\n");
    scanf ("%s", &codigo);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", &cidade);

    printf("Qual a População:\n");
    scanf("%d", &populacao);

    printf("Digite a area:\n");
    scanf("%f", &area);

    printf("Qual o PIB?\n");
    scanf("%f", &pib);

    printf("Quantos Pontos Turisticos?\n");
    scanf("%d", &turistico);
    
    //Resultados; 
    //A01;
    printf(" - Carta nº 1:\n - Estado: %s\n - Código da Carta: %s\n - Nome da Cidade: %s\n", estado, codigo, cidade);
    printf(" - População: %d\n - Área: %.2f Km² \n - PIB: %f Bilhões de Reais \n - Numero de Pontos turisticos: %d\n", populacao, area, pib, turistico);
    mediaA01 = (float)(populacao + area) / 2;
    printf (" - Densidade Populacional %.2f hab/km² \n", mediaA01);
    mediaA02 = (float)(pib + populacao) / 2;
    printf (" - PIB per Capita %.2f reais \n", mediaA02);

    //*************;

    //B01;
    printf("Carta 2\n");

    printf("Digite o Segundo Estado:\n");
    scanf("%s", &estado2);

    printf("Digite o Código:\n");
    scanf ("%s", &codigo2);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", &cidade2);

    printf("Qual a População:\n");
    scanf("%d", &populacao2);

    printf("Digite a area:\n");
    scanf("%f", &area2);

    printf("Qual o PIB?\n");
    scanf("%f", &pib2);

    printf("Quantos Pontos Turisticos?\n");
    scanf("%d", &turistico2);
    

    //B01
    printf(" - Carta nº 2:\n - Estado: %s\n - Código da Carta: %s\n - Nome da Cidade: %s\n", estado2, codigo2, cidade2);
    printf(" - População: %d\n - Área: %.2f Km²\n - PIB: %f Bilhões de Reais\n - Numero de Pontos turisticos: %d\n", populacao2, area2, pib2, turistico2);
    mediaB01 = (populacao2 + area2) / 2;
    printf (" - Densidade Populacional %.2f hab/km² \n", mediaB01);
    mediaB02 = (pib + populacao2) / 2;
    printf (" - PIB per Capita %.2f reais \n", mediaB02);


    return 0;
}