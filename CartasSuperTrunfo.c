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

    

char Estado;

char codigocarta[3];

char nomecidade[12];

float populacao;

float areakm;

float pib;

int numerosturisticos;

printf("Digite o Estado: \n", Estado);
scanf("%c", &Estado);

printf("Digite o codigo da carta: \n");
scanf("%s", &codigocarta);

printf("Digite o nome da cidade: \n");
scanf("%s", &nomecidade);

printf("Digite sua população: \n");
scanf("%f", &populacao);

printf("Digite a área em km: \n");
scanf("%f", &areakm);

printf("Digite seu pib: \n");
scanf("%f", &pib);

printf("Digite as áreas turisticas: \n");
scanf("%d", &numerosturisticos);

printf("Nome do estado: %c \n", Estado);
printf("Codigo da carta: %s \n", codigocarta);
printf("Nome da cidade: %s \n", nomecidade);
printf("População: %f \n", populacao);
printf("area em km: %f \n", areakm);
printf("pib: %f \n", pib);
printf("numeros turisticos: %d \n", numerosturisticos);






    return 0;
}
