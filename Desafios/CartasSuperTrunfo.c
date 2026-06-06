#include <stdio.h>

int main() {
// --- VARIAVEIS DA CARTA 1 ---
  char estado1;
   char codigo1[4];
   char cidade1[20];
   unsigned long int populacao1;
   int populacao1;
   float area1;
   float pib1;
   int pontosTuristicos1;
   float densidadepopulacional1;
   float pibpercapital1;
   float superPoder1;

// --- VARIAVEIS DA CARTA 2 ---  
char estado2;
   char codigo2[4];
   char cidade2[20];
   unsigned long int populacao2;
   int populacao2;
   float area2;
   float pib2;
   int pontosTuristicos2;
   float densidadepopulacional2;
   float pibpercapital2;
   float superPoder2;

  
  //--- CADASTRO DA CARTA 1 ---
  printf("--- CADASTRO DA CARTA 1 ---\n");

  printf("DIGITE A LETRA DO ESTADO");
  scanf(" %c", estado1);

  printf("DIGITE O CODIGO DA CARTA");
  scanf("%s", codigo1);

  printf("DIGITE O NOME DA CIDADE");
  scanf(" %[^\n]", cidade1);

  printf("DIGITE O NUMERO DE HABITANTES");
  scanf("%lu", &populacao1);

  printf("DIGITE A ÁREA EM QUILÔMETROS QUADRADOS");
  scanf("%f", &area1);

  printf("DIGITE O PRODUTO INTERNO DA CIDADE");
  scanf("%f", &pib1);
    
  printf("DIGITE A QUANTIDADE DE PONTOS TURISTICOS");
  scanf("%d", &pontosTuristicos1);  

  //Calculo da carta 1
  densidadepopulacional1 = (float)populacao1 / area1;
  pibpercapital1 = (pib1 * 1000000000) / (float)populacao1;

  
  // Calcule o Super Poder da Carta 1
  superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);
  
  //--- CADASTRO DA CARTA 2 ---
  printf("--- CADASTRO DA CARTA 2 ---\n");

  printf("DIGITE A LETRA DO ESTADO");
  scanf(" %c", estado2);

  printf("DIGITE O CODIGO DA CARTA");
  scanf("%s", codigo2);

  printf("DIGITE O NOME DA CIDADE");
  scanf(" %[^\n]", cidade2);

  printf("DIGITE O NUMERO DE HABITANTES");
  scanf("%lu", &populacao2);

  printf("DIGITE A ÁREA EM QUILÔMETROS QUADRADOS");
  scanf("%f", &area2);

  printf("DIGITE O PRODUTO INTERNO DA CIDADE");
  scanf("%f", &pib2);
    
  printf("DIGITE A QUANTIDADE DE PONTOS TURISTICOS");
  scanf("%d", &pontosTuristicos2); 

  //Calculo carta 2
  densidadepopulacional2 = (float)populacao2 / area2;
  pibpercapital2 = (pib2 * 1000000000) / (float)populacao2;

  // Calcule o Super Poder da Carta 2
  superPoder2 =(float)populacao2 + area2 + (pib2 * 1000000000) + pontosTuristicos2 + pibpercapital2 + (1.0 /densidadePopulacional2);
  
 //--- EXIBIÇÃO DOS DADOS ----
printf("\n------------------------------\n");
printf("Carta 1:\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Nome da cidade: %s\n", cidade1);
printf("Numero de Habitantes: %lu\n", populacao1);
printf("Quilômetros quadrados: %.2f\n", area1);
printf("Quantidade de PIB em reais: %.2f\n", pib1);
printf("Numero de pontos turisticos: %d\n",pontosTuristicos1 ); 
printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1 );
printf("Quantidade de Pib Per Capital: %.2f reais\n", pibpercapital1 );

  
printf("\n------------------------------\n");
printf("Carta 2:\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da cidade: %s\n", cidade2);
printf("Numero de Habitantes: %lu\n", populacao2);
printf("Quilômetros quadrados: %.2f\n", area2);
printf("Quantidade de PIB em reais: %.2f\n", pib2);
printf("Numero de pontos turisticos: %d\n",pontosTuristicos2 );
printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);
printf("Quantidade de Pib Per Capital: %.2f reais\n", pibpercapital2);

//COMPARAÇÃO DE CARTAS (A BATALHA DO SUPER TRUNFO)
printf("\nComparacao de Cartas:\n");
printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2); 
printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapital1 > pibpercapital2);
printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);


  
  return 0;
} 
