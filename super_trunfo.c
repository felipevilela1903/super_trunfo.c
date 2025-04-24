#include <stdio.h> 
int main(){

    /* Criando as variáveis:
   -estado1 e estado2 vão ser a dos estados
   -codigo1 e codigo 2 vão ser a dos códigos das cartas
   -nome1 e nome2 vão ser a dos nomes das cidades
   -populacao1 e populacao2 vão ser a da população das cidades
   -area1 e area2 vão ser a da área das cidades
   -pib1 e pib2 vão ser o pib das cidades
   -ponto1 e ponto2 vão ser os pontos turisticos das cidades */

   char estado1, estado2;
   char codigo1[5], codigo2[5];
   char nome1[50], nome2[50];
   int populacao1, populacao2;
   float area1, area2;
   float pib1, pib2;
   int pontos1, pontos2;
    
    // Criando programa pra da letra dos estados da primeira e segunda carta:

    printf("Digite a letra do estado da primeira carta: "); 
    scanf(" %c", &estado1);

    printf("Digite a letra do estado da segunda carta: ");
    scanf(" %c", &estado2);

    //Criando programa pra entrada do código da primeira e segunda carta:

    printf("Digite o código da primeira carta: ");
    scanf( "%s", codigo1);
    
    printf("Digite o código da segunda carta: ");
    scanf( " %s", codigo2);

    //Criando programa pra entrada do nome da cidade da primeira e segunda carta:

    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %[^\n]", &nome1); 

    printf("Digite o nome da cidade da segunda carta: ");
    scanf(" %[^\n]", &nome2);

    //Criando programa pra entrada da população da cidade:

    printf("Digite a população da primeira carta: ");
    scanf(" %d", &populacao1);

    printf("Digite a população da segunda carta: ");
    scanf(" %d", &populacao2);

    //Criando programa pra entrada da área (em km²) da primeira e segunda carta:

    printf("Digite a área(em km²) da primeira carta: ");
    scanf(" %f", &area1);

    printf("Digite a área(em km²) da segunda carta: ");
    scanf(" %f", &area2);

    //Criando programa pra entrada do pib da primeira e segunda carta:

    printf("Digite o PiB da primeira carta: ");
    scanf(" %f", &pib1);

    printf("Digite o PIB da segunda carta: ");
    scanf(" %f", &pib2);

    //Criando programa pra entrada do número de pontos turísticos da primeira e segunda carta:

    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf(" %d", &pontos1);

    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf(" %d", &pontos2);


    //imprimindo o dado da primeira carta:

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    ////imprimindo o dado da segunda carta:
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);



  


return 0;

}