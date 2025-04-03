#include <stdio.h>

int main() {
 
    //variaveis da carta 1
     char estado1[50] ;
     char codigoCarta1[50] ;
     char nomeCidade1[50]  ;
     int populacao1 ;
     float area1 ;
     float Pib1;
     int pontosTuristicos1 ;

     printf("Digite seu estado: ");
     scanf(" %s",estado1);
  
     printf("Digite o codigo da carta A-H: ");
     scanf(" %s",codigoCarta1);

     printf("Digite o nome da cidade: ");
     scanf(" %s",nomeCidade1 );

     printf("Digite a População: ");
     scanf("%d",&populacao1);

     printf("Digite a area em KM²: ");
     scanf("%f",&area1);

     printf("Digite o PIB: ");
     scanf("%f",&Pib1);

     printf("Digite a quantidade de pontos turisticos: ");
     scanf("%d",&pontosTuristicos1 );

        //impressao dos dados
        printf("\n Carta 1 \n"); //apenas para indicar qual a carta
        printf("O estado é: %s\n" ,estado1);  //%s imp. uma cadeia de caracteres
        printf("O código da carta é: %s\n", codigoCarta1); 
        printf("O nome da cidade é %s\n", nomeCidade1);
        printf("A sua população é de: %d\n", populacao1); //%d imp. um numero inteiro, mas n suporta casas decimais
        printf("Sua area em KM² é de: %.3f\n", area1); //%%3.f especifica as casas decimais 
        printf("Seu Pib é de: %.6f\n", Pib1); 
        printf("A quantidade de pontos turisticos é de: %d\n", pontosTuristicos1); // imp. valores inteiros nas variaveis INT
        

     //variaveis da carta 2
         
     char estado2[50] ;
     char codigoCarta2[50] ;
     char nomeCidade2[50]  ;
     int populacao2 ;
     float area2;
     float Pib2;
     int pontosTuristicos2 ;


     printf("\n Digite seu estado: ");
     scanf(" %s" ,estado2);
  
     printf("Digite o codigo da carta A-H: ");
     scanf(" %s",codigoCarta2);

     printf("Digite o nome da cidade: ");
     scanf(" %s",nomeCidade2);

     printf("Digite a População: ");
     scanf("%d",&populacao2);

     printf("Digite a area em KM²: ");
     scanf("%f",&area2);

     printf("Digite o PIB: ");
     scanf("%f",&Pib2);

     printf("Digite a quantidade de pontos turisticos: ");
     scanf("%d",&pontosTuristicos2);

      //impressao dos dados carta 2
      printf("\n Carta 2 \n"); //apenas para indicar qual a carta
      printf("O estado é: %s\n" ,estado2);  //%s imp. uma cadeia de caracteres
      printf("O código da carta é: %s\n", codigoCarta2); 
      printf("O nome da cidade é %s\n", nomeCidade2);
      printf("A sua população é de: %d\n", populacao2); //%d imp. um numero inteiro, mas n suporta casas decimais
      printf("Sua area em KM² é de: %.3f\n", area2); //%%3.f especifica as casas decimais 
      printf("Seu Pib é de: %.6f\n", Pib2); 
      printf("A quantidade de pontos turisticos é de: %d\n", pontosTuristicos2); // imp. valores inteiros nas variaveis INT

    


return 0;
}
