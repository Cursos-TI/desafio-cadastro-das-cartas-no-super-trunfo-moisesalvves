#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int populacao, nturistico = 0;
    int populacao2, nturistico2 = 0;
    float area, pib;
    float area2, pib2;
    char estado;
    char estado2;
    char cod[4];
    char cod2[4];
    char nomecidade[20];
    char nomecidade2[20];
    
    
    // Cadastro das Cartas 1:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

        printf("Digite a letra de um ESTADO: Uma letra de 'A' a 'H': \n");
        scanf("%c", &estado);

        printf("Digite o CODIGO DA CARTA: A letra do estado seguida de um numero de '01' a '04'(ex:A01,B03) \n");
        scanf("%s", &cod);

        printf("Digite o NOME DA CIDADE: \n");
        scanf("%s", &nomecidade);

        printf("Digite a POPULAÇÃO: O número de habitantes da cidade \n");
        scanf("%d", &populacao);

        printf("Digite a AREA(em km²): A área da cidade em quilômetros quadrados. \n");
        scanf("%f", &area);

        printf("Digite o PIB: O Produto Interno Bruto da Cidade \n");
        scanf("%f", &pib);

        printf("Digite o Numero de Ponto Turísticos: A quantidade de pontos turísticos na cidade. \n");
        scanf("%d", &nturistico);
    
    
    // Exibição dos Dados das Cartas 1:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

        printf("\nCARTA 1: \n");
        printf("Estado: %c \n", estado);
        printf("Código: %s \n", cod);
        printf("Nome da Cidade: %s \n", nomecidade);
        printf("População: %d \n", populacao);
        printf("Área: %f km²\n", area);
        printf("PIB: %f bilhões de reais \n", pib);
        printf("Número de Pontos Turísticos: %d \n", nturistico);

    // Cadastro das Cartas 2:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
            printf("\n Digite a letra de um ESTADO: Uma letra de 'A' a 'H' \n");
            scanf(" %c", &estado2);

            printf("Digite o CODIGO DA CARTA: A letra do estado seguida de um numero de '01' a '04'(ex:A01,B03) \n");
            scanf(" %s", &cod2);

            printf("Digite o NOME DA CIDADE: \n");
            scanf("%s", &nomecidade2);

            printf("Digite a POPULAÇÃO: O número de habitantes da cidade  \n");
            scanf("%d", &populacao2);

            printf("Digite a AREA(em km²): A área da cidade em quilômetros quadrados. \n");
            scanf("%f", &area2);

            printf("Digite o PIB: O Produto Interno Bruto da Cidade \n");
            scanf("%f", &pib2);

            printf("Digite o Numero de Ponto Turísticos: A quantidade de pontos turísticos na cidade. \n");
            scanf("%d", &nturistico2);

    // Exibição dos Dados das Cartas 2:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

            printf("\nCARTA 2: \n");
            printf("Estado: %c \n", estado2);
            printf("Código: %s \n", cod2);
            printf("Nome da Cidade: %s \n", nomecidade2);
            printf("População: %d \n", populacao2);
            printf("Área: %f km²\n", area2);
            printf("PIB: %f bilhões de reais\n", pib2);
            printf("Número de Pontos Turísticos: %d \n", nturistico2);

    return 0;
}
