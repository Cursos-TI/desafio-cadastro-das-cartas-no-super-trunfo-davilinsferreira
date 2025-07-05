#include <stdio.h>

int main() {

    char Estado, Estado2; // Aramzena a letra que representa o estado
    char Código[4], Código2[4]; // Armazena um código para a cidade
    char Cidade[15], Cidade2[15]; // Armazena o nome da cidade
    int População, População2; // Armazena o número de habitantes
    float Área, Área2; // Armazena a área da cidade em km²
    float PIB, PIB2; // Armazena o PIB da cidade
    int Pontos, Pontos2; // Armazena o número de pontos turísticos
    float Densidade, Densidade2; // Variável para densidade populacional
    float PIBPC, PIBPC2; // Variável para o PIB per capita


    printf("Inserir dados para a Carta 1 \n"); // Informa o que deve ser feito

    printf("Escolha uma letra de 'A' a 'H' para representar o seu estado: \n"); // Pergunta para o usuário
    scanf(" %c", &Estado); // Armazena a resposta do usuário

    printf("A letra do estado seguida de um número de 01 a 04: \n");
    scanf("%s", Código);

    printf("Nome da cidade: \n");
    scanf("%s", Cidade);

    printf("O número de habitantes da cidade: \n");
    scanf("%d", &População);

    printf("A área da cidade em km²: \n");
    scanf("%f", &Área);

    printf("O PIB da cidade (em bilhões de R$): \n");
    scanf("%f", &PIB);

    printf("A quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &Pontos);

    printf("Inserir dados para a Carta 2 \n"); // Segunda parte da inserção de dados

    printf("Escolha uma letra de 'A' a 'H' para representar o seu estado: \n");
    scanf(" %c", &Estado2);

    printf("A letra do estado seguida de um número de 01 a 04: \n");
    scanf("%s", Código2);

    printf("Nome da cidade: \n");
    scanf("%s", Cidade2);

    printf("O número de habitantes da cidade: \n");
    scanf("%d", &População2);

    printf("A área da cidade em km²: \n");
    scanf("%f", &Área2);

    printf("O PIB da cidade (em bilhões de R$): \n");
    scanf("%f", &PIB2);

    printf("A quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &Pontos2);

    Densidade = População / Área;
    Densidade2 = População2 / Área2;
    PIBPC = PIB / População;
    PIBPC2 = PIB2 / População2;

    printf("Carta 1:\n"); // Aqui começa a mostrar as informações escolhidas pelo usuário
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Código);
    printf("Nome da cidade: %s\n", Cidade);
    printf("População: %d\n", População);
    printf("Área: %.2f km²\n", Área);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de pontos turísticos: %d\n", Pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade);
    printf("PIB per capita: %.2f reais\n", PIBPC);

    printf("Carta 2:\n"); // Informações da carta 2
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Código2);
    printf("Nome da cidade: %s\n", Cidade2);
    printf("População: %d\n", População2);
    printf("Área: %.2f km²\n", Área2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", Pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
    printf("PIB per capita: %.2f reais\n", PIBPC2);

    return 0;



}