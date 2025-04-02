#include <stdio.h>

int main() {
    // Declaração de variáveis para a carta 1
     
    char estado1[50] ="Parana";
    char codigoCarta1[50] = "A01" ;
    char nomeCidade1[50] = "londrina" ;
    int populacao1 = 555655;
    float area1 = 143.124 ;
    float pib1 = 2.000000;
    int pontosTuristicos1 = 25;

      //Dados da carta 1
     printf("Carta 1 \n"); //apenas para indicar qual a carta
     printf("O estado é: %s\n" ,estado1);  //%s imp. uma cadeia de caracteres
     printf("O código da carta é: %s\n", codigoCarta1); 
     printf("O nome da cidade é %s\n", nomeCidade1);
     printf("A sua população é de: %d\n", populacao1); //%d imp. um numero inteiro, mas n suporta casas decimais
     printf("Sua area em KM² é de: %.3f\n", area1); //%%3.f especifica as casas decimais 
     printf("Seu Pib é de: %.6f\n", pib1); 
     printf("A quantidade de pontos turisticos é de: %d\n", pontosTuristicos1); // imp. valores inteiros nas variaveis INT
   
     printf("\n");

     // Declaração de variáveis para a carta 2
    char estado2[50] ="Sergipe";
    char codigoCarta2[50] = "B01" ;
    char nomeCidade2[50] = "Aracaju" ;
    int populacao2 = 2300000;
    float area2 = 181.8 ;
    float pib2 = 9.7779;
    int pontosTuristicos2 =5;

      //Dados da carta 2
      printf("Carta 2 \n"); //apenas para indicar qual a carta
      printf("O estado é: %s\n" ,estado2);  //%s imp. uma cadeia de caracteres
      printf("O código da carta é: %s\n", codigoCarta2); 
      printf("O nome da cidade é %s\n", nomeCidade2);
      printf("A sua população é de: %d\n", populacao2); //%d imp. um numero inteiro, mas n suporta casas decimais
      printf("Sua area em KM² é de: %.3f\n", area2); //%%3.f especifica as casas decimais 
      printf("Seu Pib é de: %.6f\n", pib2); 
      printf("A quantidade de pontos turisticos é de: %d\n", pontosTuristicos2); // imp. valores inteiros nas variaveis INT
    

    return 0;
}
