#include <stdio.h>

int main(){

    // Variáveis iniciais da Carta 1
    char estado1[50];
    char codigo1[50];
    char cidade1[50];
    unsigned long int populacao1;
    int pontos1;
    float area1, PIB1; 
    

    // Variáveis iniciais da Carta 2
    char estado2[50];
    char codigo2[50];
    char cidade2[50];
    unsigned long int populacao2;
    int pontos2;
    float area2, PIB2;

    // Entrada dos dados da Carta 1
    printf(" ** Insira os dados da carta 1 ** \n");

    printf("Insira o Estado: \n");
    scanf("%s", estado1);

    printf("Insira o código da carta: \n");
    scanf("%s", codigo1);

    printf("Insira o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Insira o número de habitantes: \n");
    scanf("%lu", &populacao1);

    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos1);

    printf("Insira a área (em km²): \n");
    scanf("%f", &area1);

    printf("Insira o PIB: \n");
    scanf("%f", &PIB1);


    // Entrada dos dados da Carta 2
    printf(" ** Insira os dados da carta 2 ** \n");

    printf("Insira o Estado: \n");
    scanf("%s", estado2);

    printf("Insira o código da carta: \n");
    scanf("%s", codigo2);

    printf("Insira o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Insira o número de habitantes: \n");
    scanf("%lu", &populacao2);

    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos2);

    printf("Insira a área (em km²): \n");
    scanf("%f", &area2);

    printf("Insira o PIB: \n");
    scanf("%f", &PIB2);


    // Cálculo da Densidade Populacional e do PIB per Capita da Carta 1
    float densidade1 = (float) populacao1 / area1;
    float PpC1 = (float) PIB1 / populacao1;

    // Cálculo da Densidade Populacional e do PIB per Capita da Carta 2
    float densidade2 = (float) populacao2 / area2;
    float PpC2 = (float) PIB2 / populacao2;
    
    // Cálculo do Super Poder (soma de todos os atributos númericos mais o inverso da densidade populacional)
    float SuperPoder1 = (float) populacao1 + area1 + PIB1 + pontos1 + PpC1 + (1 / densidade1);
    float SuperPoder2 = (float) populacao2 + area2 + PIB2 + pontos2 + PpC2 + (1 / densidade2);


    // Exibição dos dados da Carta 1
    printf(" ** Carta 1 ** \n");

    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Número de pontos turísticos: %d\n", pontos1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Densidade demográfica: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", PpC1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    // Exibição dos dados da Carta 2
    printf(" ** Carta 2 ** \n");

    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Número de pontos turísticos: %d\n", pontos2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Densidade demográfica: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", PpC2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    // Menu de escolha do atributo (a escolha será feita indicando números de 1 a 5, com cada um representando uma opção)
    int atributo; // Variável de controle do switch.

    printf("** Escolha qual atributo das cartas será usado para comparação **\n");

    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha: ");
    scanf("%d", &atributo);

    // Estrutura switch e lógica de comparação
    switch (atributo) {
        case 1:
            printf("* Atributo escolhido: População *\n");
            printf(" - Valores correspondentes ao atributo escolhido para cada carta:\n");
            printf("* Carta 1: %lu \n", populacao1);
            printf("* Carta 2: %lu \n", populacao2);
            if (populacao1 > populacao2) {
                printf("A Carta 1 (%s) venceu!\n", cidade1);
            } else if (populacao1 < populacao2) {
                printf("A Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 2:
            printf("* Atributo escolhido: Área *\n");
            printf(" - Valores correspondentes ao atributo escolhido para cada carta:\n");
            printf("* Carta 1: %.2f \n", area1);
            printf("* Carta 2: %.2f \n", area2);
            if (area1 > area2) {
                printf("A Carta 1 (%s) venceu!\n", cidade1);
            } else if (area1 < area2) {
                printf("A Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 3:
            printf("* Atributo escolhido: PIB *\n");
            printf(" - Valores correspondentes ao atributo escolhido para cada carta:\n");
            printf("* Carta 1: %.2f \n", PIB1);
            printf("* Carta 2: %.2f \n", PIB2);
            if (PIB1 > PIB2) {
                printf("A Carta 1 (%s) venceu!\n", cidade1);
            } else if (PIB1 < PIB2) {
                printf("A Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 4:
            printf("* Atributo escolhido: Número de pontos turísticos *\n");
            printf(" - Valores correspondentes ao atributo escolhido para cada carta:\n");
            printf("* Carta 1: %d \n", pontos1);
            printf("* Carta 2: %d \n", pontos2);
            if (pontos1 > pontos2) {
                printf("A Carta 1 (%s) venceu!\n", cidade1);
            } else if (pontos1 < pontos2) {
                printf("A Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 5:
            printf("* Atributo escolhido: Densidade demográfica *\n");
            printf(" - Valores correspondentes ao atributo escolhido para cada carta:\n");
            printf("* Carta 1: %.2f \n", densidade1);
            printf("* Carta 2: %.2f \n", densidade2);
            if (densidade1 < densidade2) {
                printf("A Carta 1 (%s) venceu!\n", cidade1);
            } else if (densidade1 > densidade2) {
                printf("A Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;

}