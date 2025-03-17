#include <stdio.h>
    int main(){
        
        //Declaração das variáveis para armazenar os atributos das cartas
        char estado1, estado2;
        char codigoc1[4], codigoc2[4];
        char cidade1[20], cidade2[20];
        int populacao1, populacao2, turismo1, turismo2;
        float pib1, pib2, area1, area2;
        float densidade1, densidade2, pibcapita1, pibcapita2;


        //Menssagem de introdução do jogo   
        printf("Bem-vindo ao jogo Super Trunfo!\n");
        printf("Para começar o jogo, crie as cartas e defina suas características!\n");
        
        //Entrada de dados para a primeira carta
        printf("\nCriando a Carta 1 \n");

        printf("Digite uma letra de 'A' a 'H' para representar o estado: ");
        scanf(" %c", &estado1);

        printf("Digite o código da cidade: ");
        scanf("%s", codigoc1);

        printf("Digite o nome da cidade: ");
        getchar(); //Limpa o buffer 
        scanf("%[^\n]", cidade1); // Lê a cidade com espaços
               
        printf("Digite a população: ");
        scanf("%d", &populacao1);

        printf("Digite a área da cidade (km²): ");
        scanf("%f", &area1);

        printf("Digite o PIB da cidade (bilhões): ");
        scanf("%f", &pib1);

        printf("Número de Pontos Turísticos(1-100): ");
        scanf("%d", &turismo1);

        // Cálculo da densidade populacional e PIB per capita
        densidade1 = (populacao1 / area1);
        pibcapita1 = (pib1 * 1000000000) / populacao1; // Converter o PIB da cidade em bilhões

        

        printf("\nTodos os dados foram definidas para a Carta 1. Agora defina os dados para a Carta 2.\n");
          
        //Entrada de dados para a segunda carta
        printf("\nCriando a Carta 2 \n");

        printf("Digite uma letra de 'A' a 'H' para representar o estado: ");
        scanf(" %c", &estado2);
  
        printf("Digite o código da cidade: ");
        scanf("%s", codigoc2);
  
        printf("Digite o nome da cidade: ");
        getchar(); //Limpar o buffer
        scanf("%[^\n]", cidade2); // Lê a cidade com espaços
                 
        printf("Digite a população: ");
        scanf("%d", &populacao2);
  
        printf("Digite a área da cidade: ");
        scanf("%f", &area2);
  
        printf("Digite o PIB da cidade: ");
        scanf("%f", &pib2);
  
        printf("Número de Pontos Turísticos: ");
        scanf("%d", &turismo2);

        // Cálculo da densidade populacional e PIB per capita
        densidade2 = (populacao2 / area2);
        pibcapita2 = (pib2 * 1000000000) / populacao2; // Converter o PIB da cidade em bilhões

  
        //Saída de dados da carta 1
        printf("\nCarta 1: \n");
        printf("Estado: %c\nCódigo: %s\nCidade: %s\n", estado1, codigoc1, cidade1);
        printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per capita: %.2f reais\n", populacao1, area1, pib1, turismo1, densidade1, pibcapita1);
        //Saída de dados da carta 2
        printf("\nCarta 2: \n");
        printf("Estado: %c\nCódigo: %s\nCidade: %s\n", estado2, codigoc2, cidade2);
        printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per capita: %.2f reais\n", populacao2, area2, pib2, turismo2, densidade2, pibcapita2);
        
        return 0;
    }   