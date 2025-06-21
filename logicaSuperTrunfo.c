#include <stdio.h>
#include <stdlib.h>




int main() {
   
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
int opcao;

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

    printf("Carta 2\n");

    char estado2 [50];
    char codigo2 [10];
    char cidade2 [50];
    unsigned long int populacao2;
    float area2;
    float PIB2;
    int turisticos2; 
    float densidade2;
    float PIBpercapita2;
    float Superpoder2;

   
    printf("Digite o nome do estado - uma letra de 'A' a 'H':");
    scanf("%s", estado2);

    printf("Digite o código da carta - a letra do estado seguida de um número de 01 a 04:");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes da cidade:"),
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados:");
    scanf ("%f", &area2);

    printf("Digite o PIB da cidade em bilhões de reais:");
    scanf ("%f", &PIB2);

    printf("Digite o número de pontos turisticos da cidade:");
    scanf("%d", &turisticos2);
    
    densidade2 = (float) populacao2 / area2;
    PIBpercapita2 = PIB2 / populacao2;   

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

printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turisticos: %d\n",turisticos2);
    printf("Densidade demográfica: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: %.2f mil reais\n", PIBpercapita2);

printf ("Escolha uma das opções para comparar atributos:\n");
printf ("1. População\n");
printf ("2. Área\n");
printf ("3. PIB\n");
printf ("4. Número de pontos turísticos\n");
printf ("5. Densidade demográfica\n");
scanf ("%d", &opcao);

printf ("Resultado comparação:\n");
printf ("Nome das cidades: %s e %s\n", cidade1, cidade2);

switch (opcao){
    case 1:
printf ("Comparação: Atributo população\n");
printf("Carta 1 - %lu habitantes\n", populacao1);
printf("Carta 2 - %lu habitantes\n", populacao2);
if (populacao1 > populacao2){
    printf ("A carta 1 é a vencedora\n");
} else if (populacao1 < populacao2) {
    printf ("A carta 2 é a vencedora\n");
} else {
    printf ("A carta 1 e a carta 2 empataram\n");
}
break;
case 2:
printf ("Comparação: Atributo área\n");
printf("Carta 1 - %.2f km²\n", area1);
printf("Carta 2 - %.2f km²\n", area2); 
if (area1 > area2){
    printf ("A carta 1 é a vencedora\n");
} else if (area1 < area2) {
    printf ("A carta 2 é a vencedora\n");
}else {
    printf ("A carta 1 e a carta 2 empataram\n");
}
break;
case 3: 
printf ("Comparação: Atributo PIB\n");
printf("Carta 1 - %.2f bilhões de reais\n", PIB1);
printf("Carta 2 - %.2f bilhões de reais\n", PIB2);
if (PIB1 > PIB2){
    printf ("A carta 1 é a vencedora\n");
} else if (PIB1 < PIB2) {
    printf ("A carta 2 é a vencedora\n");
}else {
    printf ("A carta 1 e a carta 2 empataram\n");
}
break;
case 4:
printf ("Comparação: Atributo Número de pontos turisticos\n");
printf("Carta 1 - %d pontos turísticos\n", turistico1);
printf("Carta 2 - %d pontos turísticos\n", turisticos2);
if (turistico1 > turisticos2){
    printf ("A carta 1 é a vencedora\n");
} else if (turistico1 < turisticos2) {
    printf ("A carta 2 é a vencedora\n");
}else {
    printf ("A carta 1 e a carta 2 empataram\n");
}
break;
case 5:
printf ("Comparação: Atributo densidade Demográfica\n");
printf("Carta 1 - %.2f habitantes/km²\n", densidade1);
printf("Carta 2 - %.2f habitantes/km²\n", densidade2);  
if (densidade1 < densidade2){
    printf ("A carta 1 é a vencedora\n");
} else if (densidade1 > densidade2) {
    printf ("A carta 2 é a vencedora\n");
}else {
    printf ("A carta 1 e a carta 2 empataram\n");
}
break;
default:
        printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        break;
}

   

    
   
    return 0;
}
