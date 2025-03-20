#include <stdio.h>
    int main(){
        
        //Declaração das variáveis para armazenar os atributos das cartas
        char estado1, estado2;
        char codigoc1[4], codigoc2[4];
        char cidade1[40], cidade2[40];
        unsigned long int populacao1, populacao2; 
        int turismo1, turismo2;
        int resultadoPopulacao, resultadoArea, resultadoPib, resultadoTurismo, resultadoDensidade,resultadoCapita;
        float pib1, pib2, area1, area2;
        float densidade1, densidade2, pibcapita1, pibcapita2;
        float resultadoSuperPoder, superpoder1, superpoder2;
        
       
        // Menssagem de introdução do jogo  
        printf("Bem-vindo ao jogo Super Trunfo!\n");
        printf("Para começar o jogo, defina as características das cartas!\n");

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
        scanf("%lu", &populacao1);

        printf("Digite a área da cidade (km²): ");
        scanf("%f", &area1);

        printf("Digite o PIB da cidade (bilhões): ");
        scanf("%f", &pib1);

        printf("Número de Pontos Turísticos(1-100): ");
        scanf("%d", &turismo1);

        // Cálculo da densidade populacional e PIB per capita
        densidade1 = populacao1 / area1;
        pibcapita1 = (pib1 * 1000000000) / populacao1; // Converter o PIB da cidade em bilhões
        superpoder1 = populacao1 + area1 + pib1 + turismo1 + pibcapita1 + densidade1; // Somatoria dos atributos
        

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
        scanf("%lu", &populacao2);
  
        printf("Digite a área da cidade: ");
        scanf("%f", &area2);
  
        printf("Digite o PIB da cidade: ");
        scanf("%f", &pib2);
  
        printf("Número de Pontos Turísticos: ");
        scanf("%d", &turismo2);

        // Cálculo da densidade populacional e PIB per capita
        densidade2 = populacao2 / area2;
        pibcapita2 = (pib2 * 1000000000) / populacao2; // Converter o PIB da cidade em bilhões
        superpoder2 = populacao2 + area2 + pib2 + turismo2 + pibcapita2 + densidade2; // Somatoria dos atributos
  
        //Saída de dados da carta 1
        printf("\nCarta 1: \n");
        printf("Estado: %c\nCódigo: %s\nCidade: %s\n", estado1, codigoc1, cidade1);
        printf("População: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per capita: %.2f reais\nSuper Poder: %.2f\n", populacao1, area1, pib1, turismo1, densidade1, pibcapita1, superpoder1);
        //Saída de dados da carta 2
        printf("\nCarta 2: \n");
        printf("Estado: %c\nCódigo: %s\nCidade: %s\n", estado2, codigoc2, cidade2);
        printf("População: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per capita: %.2f reais\nSuper Poder: %.2f\n", populacao2, area2, pib2, turismo2, densidade2, pibcapita2, superpoder2);
        
        // Comparações de dados de cartas
        resultadoPopulacao = (populacao1 > populacao2) ? 1 : 0; // O operador '?' simplifica a estrutura if-else dizendo se o valor é verdadeiro ou falso.
        resultadoArea = (area1 > area2) ? 1 : 0;
        resultadoPib = (pib1 > pib2) ? 1 : 0;
        resultadoTurismo = (turismo1 > turismo2) ? 1 : 0;
        resultadoDensidade = (densidade1 < densidade2) ? 1 : 0; // Menor densidade vence
        resultadoCapita = (pibcapita1 > pibcapita2) ? 1 : 0;
        resultadoSuperPoder = (superpoder1 > superpoder2) ? 1 : 0;
        
        // Exibição dos resultados
        printf("\nComparação das Cartas:\n");
        printf("População: Carta %d venceu (%d)\n", (resultadoPopulacao == 1) ? 1 : 2, resultadoPopulacao);
        printf("Área: Carta %d venceu (%d)\n", (resultadoArea == 1) ? 1 : 2, resultadoArea);
        printf("PIB: Carta %d venceu (%d)\n", (resultadoPib == 1) ? 1 : 2, resultadoPib);
        printf("Pontos Turísticos: Carta %d venceu (%d)\n", (resultadoTurismo == 1) ? 1 : 2, resultadoTurismo);
        printf("Densidade Populacional: Carta %d venceu (%d)\n", (resultadoDensidade == 1) ? 1 : 2, resultadoDensidade);
        printf("PIB per Capita: Carta %d venceu (%d)\n", (resultadoCapita == 1) ? 1 : 2, resultadoCapita);
        printf("Super Poder: Carta %d venceu (%d)\n", (superpoder1 > superpoder2) ? 1 : 2, (superpoder1 > superpoder2) ? 1 : 0);
             

        return 0;
    } 