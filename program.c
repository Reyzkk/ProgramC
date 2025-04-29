#include <stdio.h>
int main() {
 
    //Atribuindo Valor a Variaveis Tipo int,float,string//
    //Variaveis Da Carta1
    char Estado[20];
    char CodigoCarta[4];
    char NomeCidade[20];
    int Populacao = 0;      
    float Area = 0;
    float PIB = 0;           
    int Pontos = 0;

    //teste
    //Metodo printf para mostrar informações na tela//
    //Scanf coleta dados digitados pelo usuario//

    printf("Digite o Estado da Carta: \n");
    scanf("%s", Estado);


    printf("Digite o codigo da Carta: \n");
    scanf("%s", CodigoCarta);


    printf("Digite o Nome da Cidade: \n");
    scanf("%s", NomeCidade);

    printf("Digite a Populacao do Local: \n");
    scanf("%d", &Populacao);

    printf("Digite a Area do Local: \n");
    scanf("%f", &Area);


    printf("Digite o PIB do Local: \n");
    scanf("%f", &PIB);


    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf("%d", &Pontos);
    
    float DensidadePopulacional = (float) Populacao / Area;
    float PIBperCapita = (float) PIB / Populacao;

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", Estado);
    printf("Codigo da Carta: %s\n", CodigoCarta);
    printf("Nome da Cidade: %s\n", NomeCidade);
    printf("Populacao: %d\n", Populacao);
    printf("Area: %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Area: %.2f km²\n", Area);
    printf("PIB:R$ %.2f\n", PIB);
    printf("Pontos Turisticos: %d\n", Pontos);

    printf("O PIB per Capita é : R$ %.2f\n", PIBperCapita);
    printf("A Densidade Populacional é : %.2f km²\n", DensidadePopulacional);


    //Variaveis da Carta2
    char Estado2[20] = "";
    char CodigoCarta2[4] = "";
    char NomeCidade2[20] = "";
    unsigned int Populacao2 = 0;
    float Area2 = 0;
    float PIB2 = 0;           
    int Pontos2 = 0;



    printf("------------------------\n");


    printf("Digite o Estado da Segunda Carta: \n");
    scanf("%s", Estado2);


    printf("Digite o codigo da Segunda Carta: \n");
    scanf("%s", CodigoCarta2);


    printf("Digite o Nome da Cidade: \n");
    scanf("%s", NomeCidade2);


    printf("Digite a Populacao do Local: \n");
    scanf("%d", &Populacao2);


    printf("Digite a Area do Local: \n");
    scanf("%f", &Area2);


    printf("Digite o PIB do Local: \n");
    scanf("%f", &PIB2);


    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf("%d", &Pontos2);

    float DensidadePopulacional2 = (float) Populacao2 / Area2;
    float PIBperCapita2 = (float) PIB2 / Populacao2;


    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", Estado);
    printf("Codigo da Carta: %s\n", CodigoCarta);
    printf("Nome da Cidade: %s\n", NomeCidade);
    printf("Populacao: %d\n", Populacao);
    printf("Area: %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Area: %.2f km²\n", Area);
    printf("PIB:R$ %.2f\n", PIB);
    printf("Pontos Turisticos: %d\n", Pontos);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo da Carta: %s\n", CodigoCarta2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f\n", PIB2);
    printf("Pontos Turisticos: %d\n", Pontos2);

    printf("O PIB per Capita é : R$ %.2f\n", PIBperCapita2);
    printf("A Densidade Populacional é : %.2f km²\n", DensidadePopulacional2);
    return 0;
}
