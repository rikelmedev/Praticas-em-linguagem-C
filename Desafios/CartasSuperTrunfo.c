#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
// --- VARIAVEIS DA CARTA 1 ---
  char estado1;
   char codigo1[4];
   char cidade1[20];
   int populacao1;
   float area1;
   float pib1;
   int pontosTuristicos1;
   float densidadepopulacional1;
   float pibpercapital1;

// --- VARIAVEIS DA CARTA 2 ---  
char estado2;
   char codigo2[4];
   char cidade2[20];
   int populacao2;
   float area2;
   float pib2;
   int pontosTuristicos2;
   float densidadepopulacional2;
   float pibpercapital2;
  
  //--- CADASTRO DA CARTA 1 ---
  printf("--- CADASTRO DA CARTA 1 ---\n");

  printf("DIGITE A LETRA DO ESTADO");
  scanf(" %c", estado1);

  printf("DIGITE O CODIGO DA CARTA");
  scanf("%s", codigo1);

  printf("DIGITE O NOME DA CIDADE");
  scanf(" %[^\n]", cidade1);

  printf("DIGITE O NUMERO DE HABITANTES");
  scanf("%d", &populacao1);

  printf("DIGITE A ÁREA EM QUILÔMETROS QUADRADOS");
  scanf("%f", &area1);

  printf("DIGITE O PRODUTO INTERNO DA CIDADE");
  scanf("%f", &pib1);
    
  printf("DIGITE A QUANTIDADE DE PONTOS TURISTICOS");
  scanf("%d", &pontosTuristicos1);  

  //Calculo carta 1
  densidadepopulacional1 = (float)populacao1 / area1 ;
  pibpercapital1 = (populacao1 * 1000000000) / (float)populacao1;


  //--- CADASTRO DA CARTA 2 ---
  printf("--- CADASTRO DA CARTA 2 ---\n");

  printf("DIGITE A LETRA DO ESTADO");
  scanf(" %c", estado2);

  printf("DIGITE O CODIGO DA CARTA");
  scanf("%s", codigo2);

  printf("DIGITE O NOME DA CIDADE");
  scanf(" %[^\n]", cidade2);

  printf("DIGITE O NUMERO DE HABITANTES");
  scanf("%d", &populacao2);

  printf("DIGITE A ÁREA EM QUILÔMETROS QUADRADOS");
  scanf("%f", &area2);

  printf("DIGITE O PRODUTO INTERNO DA CIDADE");
  scanf("%f", &pib2);
    
  printf("DIGITE A QUANTIDADE DE PONTOS TURISTICOS");
  scanf("%d", &pontosTuristicos2); 

  //Calculo carta 1
  densidadepopulacional1 = (float)populacao2 / area2 ;
  pibpercapital2 = (populacao2 * 1000000000) / (float)populacao2 ;

  
// Área para entrada de dados
  
 //--- EXIBIÇÃO DOS DADOS ----
printf("\n------------------------------\n");
printf("Carta 1:\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Nome da cidade: %s\n", cidade1);
printf("Numero de Habitantes: %d\n", populacao1);
printf("Quilômetros quadrados: %.2f\n", area1);
printf("Quantidade de PIB em reais: %.2f\n", pib1);
printf("Numero de pontos turisticos: %d\n",pontosTuristicos1 ); 
printf("A Densidade populacional é: %.2f hab/km²\n", densidadepopulacional1);
printf("A quantidade de Pib Per Capital é: %.2f reais\n",pibpercapital1);

  // Área para exibição dos dados da cidade
  
printf("\n------------------------------\n");
printf("Carta 2:\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da cidade: %s\n", cidade2);
printf("Numero de Habitantes: %d\n", populacao2);
printf("Quilômetros quadrados: %.2f\n", area2);
printf("Quantidade de PIB em reais: %.2f\n", pib2);
printf("Numero de pontos turisticos: %d\n",pontosTuristicos2 ); 
printf("A Densidade populacional é: %.2f hab/km²\n", densidadepopulacional2);
printf("A quantidade de Pib Per Capital é: %.2f reais\n",pibpercapital2);

return 0;
  return 0;
} 