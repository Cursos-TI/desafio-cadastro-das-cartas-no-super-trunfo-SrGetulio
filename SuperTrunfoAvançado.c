#include <stdio.h>

int main () {

    printf("Jogo Super Trunfo - Avançado \n"); 

    printf ("Países!\n");

    //Declaração de variáveis
    char estado[1], estado2[1];
    char codigo[3], codigo2[3];
    char cidade[20], cidade2[20];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int turistico, turistico2;
    float densidadepopu1, pibpercap1, densidadepopu2, pibpercap2;
    float superpoderA, superpoderB; 

    int resultadoestado, resultcodigo, resultcidade, resultpopulacao, resultarea, resultpib, resultturistico;
    int resultdensidade, resultpibpercap, resultsuperpoder;

    //País A01
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


    //País B01
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
    

    
    //Resultados País A01
    printf(" - Carta nº 1:\n - Estado: %s\n - Código da Carta: %s\n - Nome da Cidade: %s\n", estado, codigo, cidade);
    printf(" - População: %d\n - Área: %.2f Km² \n - PIB: %f Bilhões de Reais \n - Numero de Pontos turisticos: %d\n", populacao, area, pib, turistico);
    densidadepopu1 = (float)(populacao + area) / 2;
    printf (" - Densidade Populacional %.2f hab/km² \n", densidadepopu1);
    pibpercap1 = (float)(pib + populacao) / 2;
    printf (" - PIB per Capita %.2f reais \n", pibpercap1);
    //soma de: população + area + PIB + PIB per Capta + densidade populacional invertida + pontos turisticos
    superpoderA = (float)(populacao + area + pibpercap1 + (1 / densidadepopu1) +  turistico);
    printf (" - Super poder: %.2f\n", superpoderA);


    //Resultado País B01
    printf(" - Carta nº 2:\n - Estado: %s\n - Código da Carta: %s\n - Nome da Cidade: %s\n", estado2, codigo2, cidade2);
    printf(" - População: %d\n - Área: %.2f Km²\n - PIB: %f Bilhões de Reais\n - Numero de Pontos turisticos: %d\n", populacao2, area2, pib2, turistico2);
    densidadepopu2 = (populacao2 + area2) / 2;
    printf (" - Densidade Populacional %.2f hab/km² \n", densidadepopu2);
    pibpercap2 = (pib2 + populacao2) / 2;
    printf (" - PIB per Capita %.2f reais \n", pibpercap2);
    superpoderB = (float)(populacao2 + area2 + pibpercap2 + (1 / densidadepopu2) +  turistico2);
    printf (" - Super poder: %.2f\n", superpoderB);

    //comparação entre as cartas
    resultpopulacao = populacao > populacao2;
    resultarea = area > area2;
    resultpib = pib > pib2;
    resultturistico = turistico > turistico2;
    resultdensidade = densidadepopu1 > densidadepopu2;
    resultpibpercap = pibpercap1 > pibpercap2;
    resultsuperpoder = superpoderA > superpoderB; 

    printf("Se o resultado for 1 a População da carta A é mais forte. Se for 0 é a carta B: %d \n", resultpopulacao, populacao);
    printf("Se o resultado for 1 a Área da carta A é mais forte. Se for 0 é a carta B: %d \n", resultarea, area);
    printf("Se o resultado for 1 a Área da carta A é mais forte. Se for 0 é a carta B: %d \n", resultpib, pib);  
    printf("Se o resultado for 1 a Área da carta A é mais forte. Se for 0 é a carta B: %d \n", resultturistico, turistico);
    printf("Se o resultado for 1 a Área da carta A é mais forte. Se for 0 é a carta B: %d \n", resultdensidade, densidadepopu1);
    printf("Se o resultado for 1 a Área da carta A é mais forte. Se for 0 é a carta B: %d \n", resultpibpercap, pibpercap1);
    printf("Se o resultado for 1 a Área da carta A é mais forte. Se for 0 é a carta B: %d \n", resultsuperpoder, superpoderA);

    return 0;
}