#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
printf ("carta1 \n");

char estado1 [50];
char codigo1 [10];
char cidade1 [50];
unsigned long int populacao1;
float area1;
float PIB1;
int turistico1;
float densidade1;
float PIBpercapita1;


printf ("Digite o nome de um estado - uma letra de 'A' a 'H':");
scanf ("%s", estado1);

printf("Digite o código da carta - a letra do estado seguida de um número de 01 a 04:");
scanf ("%s", codigo1);

printf ("Digite o nome da cidade:");
scanf ("%s", cidade1);

printf("Digite o númro de habitantes da cidade:");
scanf ("%lu", &populacao1);

printf ("Digite a área da cidade em quilômetros quadrados:"),
scanf ("%f", &area1);

printf ("Digite o PIB em bilhões de reais:");
scanf ("%f", &PIB1);

printf("Digite o número de pontos turisticos da cidade:");
scanf ("%d", &turistico1);

  densidade1 = (float) populacao1 / area1;
    PIBpercapita1 = PIB1 / populacao1;  

printf ("Carta1\n");
printf ("Estado: %s\n", estado1);
printf ("Código: %s\n", codigo1);
printf ("Cidade: %s\n", cidade1);
printf ("População: %lu\n", populacao1);
printf ("Área: %f\n", area1);
printf ("PIB: %f\n", PIB1);
printf ("Pontos turisticos: %d\n", turistico1);
printf ("Densidade: %f\n", densidade1);
printf ("PIBpercapita: %f\n", PIBpercapita1);







    

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
