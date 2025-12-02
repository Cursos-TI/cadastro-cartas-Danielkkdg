#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado2;
    char codigo2 [3];
    char cidade2 [20];
    int população2;
    int pontos2 ;
    float  pib2; 
    float area2;

    char estado1;
    char codigo1 [3];
    char cidade1 [20];
    int população1;
    int pontos1 ;
    float  pib1; 
    float area1;

  // Área para entrada de dados

  printf("Carta 1");
    printf("\nEstado (A-H):");
    scanf(" %c", &estado1);
    
    printf("Digite o codigo: ");
    scanf("%s" , &codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);

    printf("Digite a quantidade da  população: ");
    scanf("%d" , &população1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f" , &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    printf("Carta 2");

    printf("\nEstado (A-H):");
    scanf(" %c", &estado2);
    
    printf("Digite o codigo: ");
    scanf("%s" , &codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);

    printf("Digite a quantidade da  população: ");
    scanf("%d" , &população2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f" , &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);
    
    printf("\n");

  // Área para exibição dos dados da cidade

  printf("Carta 1\n");
    printf("Estado:%c\n" , estado1);
    printf("Código da Carta:%s\n" ,codigo1);
    printf("Nome da Cidade:%s\n" , cidade1);
    printf("População:%d\n" ,população1 );
    printf("Área (em km²):%f%f\n" , area1 );
    printf("PIB:%f\n",pib1 );
    printf("Número de Pontos Turísticos:%d\n");

    printf("\n");
    printf("Carta 2\n");
    
    printf("Estado:%c\n" ,estado2);
    printf("Código da Carta:%s\n" ,codigo2);
    printf("Nome da Cidade:%s\n" ,cidade2);
    printf("População:%d\n", população2);
    printf("Área (em km²):%f\n"  , area2);
    printf("PIB:%f\n",pib2 );
    printf("Número de Pontos Turísticos:%d ");

return 0;
} 
