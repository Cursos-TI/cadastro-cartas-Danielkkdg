#include <stdio.h>

int main() {

    
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    int pontos1, pontos2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float capita1, capita2;
    float super1,super2;

    // CARTA 1 
    printf("=== Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código: ");
    scanf("%3s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);


    // cálculos da carta 1
    densidade1 = populacao1 / area1;
    capita1 = (pib1 * 1000000000) / populacao1;



    // CARTA 2 
    printf("\n=== Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf("%3s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);


    // cálculos da carta 2
    densidade2 = populacao2 / area2;
    capita2 = (pib2 * 1000000000) / populacao2;

    // cálculos Super
    
    super1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + capita1 + (1.0f / densidade1);
    super2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + capita2 + (1.0f / densidade2);
 
    //RESULTADOS
    printf("\n\nCarta 1:\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", capita1);

    

    printf("\nCarta 2:\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", capita2);

    // Comparação de Carta 1:

    printf("\n\n Comparação de Carta 1: \n\n");

    printf("População: Carta 1 venceu (%d)\n" , populacao1> populacao2);

    printf("Área: Carta 1 venceu (%d)\n", area1 >area2);

    printf("PIB: Carta 1 venceu (%d)\n" , pib1 > pib2);

    printf("Pontos Turísticos: Carta 1 venceu (%d)\n" , pontos1 > pontos2);

    printf("Densidade Populacional: Carta 2 venceu (%d)\n" ,densidade1 < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n" , (int)capita1 > (int)capita2);

    printf("Super Poder: Carta 1 venceu (%d)\n" , super1 >super2);

    // Comparação de Carta 2:

    printf("\n Comparação de Carta 2: \n\n");

    printf("População: Carta 2 perdeu (%d)\n" , populacao2> populacao1);

    printf("Área: Carta 2 perdeu (%d)\n", area2 >area1);

    printf("PIB: Carta 2 perdeu (%d)\n" , pib2 > pib1);

    printf("Pontos Turísticos: Carta 2 perdeu (%d)\n" , pontos2 > pontos1);

    printf("Densidade Populacional: Carta 1 perdeu (%d)\n" ,densidade2 < densidade1);

    printf("PIB per Capita: Carta 2 perdeu (%d)\n" , (int)capita2 > (int)capita1);

    printf("Super Poder: Carta 2 perdeu (%d)\n" , super2 >super1);

    


    return 0;
}