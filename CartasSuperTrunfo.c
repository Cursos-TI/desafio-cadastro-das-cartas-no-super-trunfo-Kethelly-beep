#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

     
    char nome[20];
    int populacao, pont_turisticos, cod;
    float area, pib, densidade, pib_per;


    printf("Informe as caraterísticas da cidade\n");
    printf("Informe o nome da cidade:");
    scanf("%s", &nome);
    printf("Cidade: %s\n", nome);

    printf("Informe o código da cidade:");
    scanf("%d", &cod);
    printf("Codigo: %d\n", cod);


    
    printf("Informe a população da cidade:");
    scanf("%d", &populacao);
    printf("População: %d\n", populacao);

    
    printf("Informe a quantidade de pontos turísticos:");
    scanf("%d", &pont_turisticos);
    printf("Pontos Turísticos: %d\n", pont_turisticos);

    printf("Informe as caraterísticas da cidade\n");
    printf("Informe a área:");
    scanf("%f", &area);
    printf("Área: %f\n", area);

    
    printf("Informe o PIB:");
    scanf("%f", &pib);
    printf("PIB: %f\n", pib);

    densidade =(float) populacao / area;
    pib_per = (float)pib/ populacao;

    printf("A densidade é: %2.f\n", densidade);
    printf("O PIB per capita é: %2.f\n", pib_per);
    return 0;
}
