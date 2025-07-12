#include <stdio.h>

int main() {

    // Carta 1
    char Estado, Código[4], Cidade[15];
    unsigned long int População;
    float Área, PIB, Densidade, PIBPC, SuperPoder;
    int Pontos;

    // Carta 2
    char Estado2, Código2[4], Cidade2[15];
    unsigned long int População2;
    float Área2, PIB2, Densidade2, PIBPC2, SuperPoder2;
    int Pontos2;

    // Entrada de dados da Carta 1
    printf("Inserir dados para a Carta 1 \n");
    printf("Escolha uma letra de 'A' a 'H' para representar o seu estado: \n"); // Pergunta para o usuário
    scanf(" %c", &Estado); // Armazena a resposta do usuário
    printf("A letra do estado seguida de um número de 01 a 04: \n");
    scanf("%s", Código);
    printf("Nome da cidade: \n");
    scanf("%s", Cidade);
    printf("O número de habitantes da cidade: \n");
    scanf("%lu", &População);
    printf("A área da cidade em km²: \n");
    scanf("%f", &Área);
    printf("O PIB da cidade (em bilhões de R$): \n");
    scanf("%f", &PIB);
    printf("A quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &Pontos);

    // Entrada de dados da Carta 2
    printf("Inserir dados para a Carta 2 \n");
    printf("Escolha uma letra de 'A' a 'H' para representar o seu estado: \n");
    scanf(" %c", &Estado2);
    printf("A letra do estado seguida de um número de 01 a 04: \n");
    scanf("%s", Código2);
    printf("Nome da cidade: \n");
    scanf("%s", Cidade2);
    printf("O número de habitantes da cidade: \n");
    scanf("%lu", &População2);
    printf("A área da cidade em km²: \n");
    scanf("%f", &Área2);
    printf("O PIB da cidade (em bilhões de R$): \n");
    scanf("%f", &PIB2);
    printf("A quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &Pontos2);

    // Cálculos de atributos da Carta 1
    Densidade = População / Área; // Formula para a densidade populacional
    PIBPC = (PIB * 1000000000) / População; // Formula para o PIB per capita
    SuperPoder = População + Área + PIB + PIBPC + (1.0 / Densidade) + Pontos;

    // Cálculos de atributos da Carta 2
    Densidade2 = População2 / Área2; 
    PIBPC2 = (PIB2 * 1000000000) / População2; 
    SuperPoder2 = População2 + Área2 + PIB2 + PIBPC2 + (1.0 / Densidade2) + Pontos2;

    // Exibição das informações da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Código);
    printf("Nome da cidade: %s\n", Cidade);
    printf("População: %lu\n", População);
    printf("Área: %.2f km²\n", Área);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de pontos turísticos: %d\n", Pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade);
    printf("PIB per capita: %.2f reais\n", PIBPC);
    printf("Super Poder: %.2f\n\n", SuperPoder);

    // Exibição das informações da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Código2);
    printf("Nome da cidade: %s\n", Cidade2);
    printf("População: %lu\n", População2);
    printf("Área: %.2f km²\n", Área2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", Pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
    printf("PIB per capita: %.2f reais\n", PIBPC2);
    printf("Super Poder: %.2f\n\n", SuperPoder2);

    // Comparação das cartas
    int CompPop = População > População2;
    int CompArea = Área > Área2;
    int CompPIB = PIB > PIB2;
    int CompPontos = Pontos > Pontos2;
    int CompDensidade = Densidade < Densidade2;
    int CompPIBPC = PIBPC > PIBPC2;
    int CompSuperPoder = SuperPoder > SuperPoder2;

    // Exibição dos resultados
    printf("Comparação das cartas (1 = Carta 1 venceu, 0 = Carta 2 venceu):\n\n");
    printf("População: Carta 1 venceu (%d)\n", CompPop);
    printf("Área: Carta 1 venceu (%d)\n", CompArea);
    printf("PIB: Carta 1 venceu (%d)\n", CompPIB);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", CompPontos);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", CompDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", CompPIBPC);
    printf("Super Poder: Carta 1 venceu (%d)\n", CompSuperPoder);

    



}