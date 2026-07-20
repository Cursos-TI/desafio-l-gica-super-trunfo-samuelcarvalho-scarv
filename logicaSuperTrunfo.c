#include <stdio.h>

  // Vamos iniciar o desenvolvimento de um jogo super trunfo simples.
  // O objetivo inicial é somente coletar informações inseridas pelo usuário, armazená-las em variáveis e exibir na tela.
  // Daremos início apresentando na tela uma breve explicação do que será pedido e coletando as informações.

int main() {

printf("\nBem vindo ao jogo SUPER TRUNFO!\n");
printf("Nosso jogo baseia-se na criação e comparação de cartas, onde cada uma possui características únicas.\n");
printf("Para essa versão inicial usaremos como exemplo cartas de estados e cidades brasileiras.\n");
printf("Para iniciar, vamos comecar criando as suas cartas! Por favor, preencha as informações solicitadas abaixo.\n");

  //Declarando as variáveis para armazenar as informações da primeria carta.

    char estado ;
    char codigocarta [4];
    char nomecidade [20];

  // Alterando variável população para "unsigned long int".

    unsigned long int populacao;
    float area;
    float pib;
    int pontosturisticos;

  //Declarando variáveis do desafio intermediário

    float densidadepopulacional;
    float pibpercapita;

  //Criando variável "super poder" para carta 1

    float superpoder1;  

  //Coletando as entradas do usuário para a primeira carta.

printf("\nUtilize uma letra de 'A' a 'H' para representar o ESTADO da sua carta: \n");
scanf("%c", &estado);

printf("Utilize um código simples de 3 dígitos para registrar sua carta iniciando com a letra escolhida anteriormente (exemplo: A01, B12 etc): \n");
scanf("%s", codigocarta);

printf("Escolha o nome da cidade: \n");
scanf("%s", nomecidade);

printf("Informe o número de habitantes da cidade (somente números): \n");
scanf("%lu", &populacao);

printf("Insira a área da cidade em km²: \n");
scanf("%f", &area);

printf("Insira o valor do PIB da cidade em bilhões de reais: \n");
scanf("%f", &pib);

printf("Insira a quantidade de pontos turísticos da cidade: \n");
scanf("%d", &pontosturisticos);

  // Aqui vai parecer redundância mas como ainda não sei como duplicar tudo sem repetir, vamos copiar o código diferenciando nomenclatura das variáveis somente.

printf("\nAgora vamos coletar os dados da segunda carta! Por favor, preencha as informações solicitadas abaixo.\n");

  //Declarando as variáveis para armazenar as informações da segunda carta.

char estado2;
char codigocarta2 [4];
char nomecidade2 [20];

  // Alterando variável população2 para "unsigned long int".

unsigned long int populacao2;
float area2;
float pib2;
int pontosturisticos2;

  //Declarando variáveis do desafio intermediário carta 2.

float densidadepopulacional2;
float pibpercapita2;

  //Criando variável "super poder" para carta 2

float superpoder2;

  //Coletando as entradas do usuário para a segunda carta.

printf("\nUtilize uma letra de 'A' a 'h' para representar o ESTADO da sua carta: \n");
scanf(" %c", &estado2);

printf("Utilize um código simples de 3 dígitos para registrar sua carta iniciando com a letra escolhida anteriormente (exemplo: A01, B12 etc): \n");
scanf("%s", codigocarta2);

printf("Escolha o nome da cidade: \n");
scanf("%s", nomecidade2);

printf("Informe o número de habitantes da cidade (somente números): \n");
scanf("%lu", &populacao2);

printf("Insira a área da cidade em km²: \n");
scanf("%f", &area2);

printf("Insira o valor do PIB da cidade em bilhões de reais: \n");
scanf("%f", &pib2);

printf("Insira a quantidade de pontos turísticos da cidade: \n");
scanf("%d", &pontosturisticos2);

  // Agora vamos exibir na tela as informções das cartas criadas pelo usuário. 

printf("\nSuas cartas foram criadas!\n");

printf("\nCarta 1:\n");

printf("Estado: %c\n",estado);
printf("Código da carta: %s\n", codigocarta);
printf("Nome da cidade: %s\n", nomecidade);
printf("População: %lu\n", populacao);
printf("Área: %.2f km²\n", area);
printf("PIB: %.2f bilhões de reais\n", pib);
printf("Pontos turísticos: %d\n", pontosturisticos);

  //Cáculo de PIB per capita e densidade demográfica, além da exibição na tela (carta 1).

densidadepopulacional = (float) populacao / area;
printf("Densidade populanional: %.2fkm²\n", densidadepopulacional);

pibpercapita = (float) pib / populacao;
printf("PIB per capita: %.2f reais por habitante\n", pibpercapita);

//Fazendo cálculo e apresentando na tela o super poder da carta1

superpoder1 = (float) populacao + area + pontosturisticos + pibpercapita + (1.0/densidadepopulacional);
printf("Super poder carta1: %.2f\n", superpoder1);

printf("\nCarta 2:\n");

printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigocarta2);
printf("Nome da cidade: %s\n", nomecidade2);
printf("População: %lu pessoas\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Pontos turísticos: %d\n", pontosturisticos2);

  //Cáculo de PIB per capita e densidade demográfica, além da exibição na tela (carta 2).

densidadepopulacional2 = (float) populacao2 / area2;
printf("Densidade populanional: %.2fkm²\n", densidadepopulacional2);

pibpercapita2 = (float) pib2 / populacao2;
printf("PIB per capita: %.2f reais por habitante\n", pibpercapita2);

  //Fazendo cálculo e apresentando na tela o super poder da carta2

superpoder2 = (float) populacao2 + area2 + pontosturisticos2 + pibpercapita2 + (1.0/densidadepopulacional2);
printf("Super poder carta2: %.2f\n", superpoder2);


//  A partir daqui inicia-se a segunda parte onde iremos agregar estruturas de decisão ao jogo.
//  Irei salvar essa parte do repositor como marco de divisão entre as tarefas.

/*
    Aqui vamos iniciar a implementação da lógica do jogo
    partindo de lógica simples à mais complexa.
    Reaproveitei parte do código do último desafio para ganhar tempo
    também fiz algumas alterações no mesmo.
*/

printf("\nAgora vamos fazer a comparação de um atributo para definir a carta ganhadora.\n");

/*

A partir dessa linha apaguei a estrutura de decisão simples para implementação do SWITCH.
Vou criar um menu interativo onde o usuário possa escolher qual atributo deseja comparar, claro
de acordo com meu aprendizado até o momento; então releve qualquer redundância.
Vamos ao código.

*/

int opcao;

printf("Escolha um dos atributos abaixo!\n");

printf(" 1 - População.\n");
printf(" 2 - Área.\n");
printf(" 3 - PIB.\n");
printf(" 4 - Pontos Turísticos.\n");
printf(" 5 - PIB per capita.\n");
printf(" 6 - Densidade demográfica.\n");
printf("*****Lembrando que para densidade demográfica o menor valor ganha!*****\n");
printf("Agora escolha uma das opções: \n");
scanf("%d", &opcao);

switch (opcao)
{

    case 1: 

    printf("Comparando POPULAÇAO:\n");
    printf("Carta 1 - CIDADE: %s - POPULAÇAO = %lu\n",nomecidade, populacao);
    printf("Carta 2 - CIDADE: %s - POPULAÇAO = %lu\n",nomecidade2, populacao2);

    if (populacao == populacao2) {
      printf("Valores iguais, EMPATE!\n");
    } else if (populacao > populacao2){
      printf("A VENCEDORA FOI A CARTA 1 (%s). Com a população de %lu habitantes\n", nomecidade, populacao);  
    }
    else{
      printf("A VENCEDORA FOI A CARTA 2 (%s). Com a população de %lu habitantes\n", nomecidade2, populacao2); 
    }
    break;

    case 2: 

    printf("Comparando ÁREA:\n");
    printf("Carta 1 - CIDADE: %s - ÁREA = %.2f km²\n",nomecidade, area);
    printf("Carta 2 - CIDADE: %s - ÁREA = %.2f km²\n",nomecidade2, area2);

    if (area == area2) {
      printf("Valores iguais, EMPATE!\n");
    } else if (area > area2){
      printf("A VENCEDORA FOI A CARTA 1 (%s). Com a área de %.2f km²\n", nomecidade, area);  
    }
    else{
      printf("A VENCEDORA FOI A CARTA 2 (%s). Com a área de %.2f km²\n", nomecidade2, area2); 
    }
    break;

    case 3:

    printf("Comparando PIB:\n"); 
    printf("Carta 1 - CIDADE: %s - PIB = %.2f bilhões de reais\n",nomecidade, pib);
    printf("Carta 2 - CIDADE: %s - PIB = %.2f bilhões de reais\n",nomecidade2, pib2);

    if (pib == pib2) {
      printf("Valores iguais, EMPATE!\n");
    } else if (pib > pib2){
      printf("A VENCEDORA FOI A CARTA 1 (%s). Com o pib de %.2f bilhões de reais\n", nomecidade, pib);  
    }
    else{
      printf("A VENCEDORA FOI A CARTA 2 (%s). Com o pib de %.2f bilhões de reais\n", nomecidade2, pib2); 
    }
    break;

    case 4:

    printf("Comparando PONTOS TURÍSTICOS:\n"); 
    printf("Carta 1 - CIDADE: %s - PONTOS TURÍSTICOS = %d\n",nomecidade, pontosturisticos);
    printf("Carta 2 - CIDADE: %s - PONTOS TURÍSTICOS = %d\n",nomecidade2, pontosturisticos2);

    if (pontosturisticos == pontosturisticos2) {
      printf("Valores iguais, EMPATE!\n");
    } else if (pontosturisticos > pontosturisticos2){
      printf("A VENCEDORA FOI A CARTA 1 (%s). Com %d pontos turísticos.\n", nomecidade, pontosturisticos);  
    }
    else{
      printf("A VENCEDORA FOI A CARTA 2 (%s). Com %d pontos turísticos.\n", nomecidade2, pontosturisticos2); 
    }
    break;

    case 5:

    printf("Comparando PIB PER CAPITA:\n"); 
    printf("Carta 1 - CIDADE: %s - PIB PER CAPITA = %.2f reais por habitante\n",nomecidade, pibpercapita);
    printf("Carta 2 - CIDADE: %s - PIB PER CAPITA = %.2f reais por habitante\n",nomecidade2, pibpercapita2);

    if (pibpercapita == pibpercapita2) {
      printf("Valores iguais, EMPATE!\n");
    } else if (pibpercapita > pibpercapita2){
      printf("A VENCEDORA FOI A CARTA 1 (%s). Com a pib per capita de %.2f reais por habitante.\n", nomecidade, pibpercapita);  
    }
    else{
      printf("A VENCEDORA FOI A CARTA 2 (%s). Com a pib per capita de %.2f reais por habitante.\n", nomecidade2, pibpercapita2); 
    }
    break;

    case 6:

    printf("Comparando DENSIDADE POPULACIONAL:\n"); 
    printf("Carta 1 - CIDADE: %s - DENSIDADE POPULACIONAL = %.2f H/KM²\n",nomecidade, densidadepopulacional);
    printf("Carta 2 - CIDADE: %s - DENSIDADE POPULACIONAL = %.2f H/KM²\n",nomecidade2, densidadepopulacional2);

    if (densidadepopulacional == densidadepopulacional2) {
      printf("Valores iguais, EMPATE!\n");
    } else if (densidadepopulacional < densidadepopulacional2){
      printf("A VENCEDORA FOI A CARTA 1 (%s). Com a densidade populacional de %.2f h/km².\n", nomecidade, densidadepopulacional);  
    }
    else{
      printf("A VENCEDORA FOI A CARTA 2 (%s). Com a densidade populacional de %.2f h/km².\n", nomecidade2, densidadepopulacional2); 
    }
    break;

    default:
    printf("OPÇÃO INVÁLIDA!\n");
    break;

}



return 0; 

}