#include <stdio.h>

int main() {
    
    //Atribuindo Valor a Variaveis Tipo int,float,string//
    //Variaveis Da Carta1
    char Estado[20];
    char CodigoCarta[4];
    char NomeCidade[20];
    unsigned Populacao = 0;      
    float Area = 0;
    float PIB = 0;           
    int Pontos = 0;
    


    //teste
    //Metodo printf para mostrar informações na tela//
    //Scanf coleta dados digitados pelo usuario//

        //Variaveis da Carta2
        char Estado2[20] = "";
        char CodigoCarta2[4] = "";
        char NomeCidade2[20] = "";
        unsigned Populacao2 = 0;      
        float Area2 = 0;
        float PIB2 = 0;           
        int Pontos2 = 0;


    
    printf("Digite o Estado da Carta: \n");
    scanf("%19s", Estado);

    printf("Digite o codigo da Carta: \n");
    scanf("%3s", CodigoCarta);

    printf("Digite o Nome da Cidade: \n");
    scanf("%19s", NomeCidade);

    printf("Digite a Populacao do Local: \n");
    scanf("%u", &Populacao);

    printf("Digite a Area do Local: \n");
    scanf("%f", &Area);

    printf("Digite o PIB do Local: \n");
    scanf("%f", &PIB);

    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf("%d", &Pontos);
    

    printf("------------------------\n");

    printf("Digite o Estado da Segunda Carta: \n");
    scanf("%19s", Estado2);

    printf("Digite o codigo da Segunda Carta: \n");
    scanf("%3s", CodigoCarta2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%19s", NomeCidade2);

    printf("Digite a Populacao do Local: \n");
    scanf("%u", &Populacao2);

    printf("Digite a Area do Local: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB do Local: \n");
    scanf("%f", &PIB2);

    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf("%d", &Pontos2);

    //Carta1 Operações
    float DensidadePopulacional = (float) Populacao / Area;
    float PIBperCapita = (float) PIB / Populacao;
    float SuperPoderCarta1 = (float) Populacao + Area + PIB + Pontos +PIBperCapita - DensidadePopulacional;

    //Carta2 Operações
    float DensidadePopulacional2 = (float) Populacao2 / Area2;
    float PIBperCapita2 = (float) PIB2 / Populacao2;
    float SuperPoderCarta2 = (float) Populacao2 + Area2 + PIB2 + Pontos2 +PIBperCapita2 - DensidadePopulacional2;

    //Resultados Esperados Carta1
    int resultadoCarta1População = Populacao > Populacao2;
    int resultadoCarta1Area = Area > Area2;
    int resultadoCarta1PIB = PIB > PIB2;
    int resultadoCarta1Pontos = Pontos > Pontos2;
    int resultadoCarta1PIBperCapita = PIBperCapita > PIBperCapita2; 
    int resultadoCarta1Densidade = DensidadePopulacional < DensidadePopulacional2;
    int resultadoCarta1SuperPoder = SuperPoderCarta1 > SuperPoderCarta2;
    //Resultados Esperados Carta2 
    int resultadoCarta2População2 = Populacao2 > Populacao;
    int resultadoCarta2Area2 = Area2 > Area;
    int resultadoCarta2PIB2 = PIB2 > PIB;
    int resultadoCarta2Pontos2 = Pontos2 > Pontos;
    int resultadoCarta2PIBperCapita2 = PIBperCapita2 > PIBperCapita; 
    int resultadoCarta2Densidade2 =DensidadePopulacional2 < DensidadePopulacional;
    int resultadoCarta2SuperPoder2 = SuperPoderCarta2 > SuperPoderCarta1;




    //Exibição Das variaveis da Carta 1

    printf("\n--- Carta 1 ---\n");

    printf("Estado: %s\n", Estado);

    printf("Codigo da Carta: %s\n", CodigoCarta);

    printf("Nome da Cidade: %s\n", NomeCidade);

    printf("Populacao: %u(%d)\n", Populacao, resultadoCarta1População);

    printf("Area: %.2f km²(%d)\n", Area, resultadoCarta1Area);
    ;
    printf("PIB:R$ %.2f(%d)\n", PIB, resultadoCarta1PIB);

    printf("Pontos Turisticos: %d(%d)\n", Pontos, resultadoCarta1Pontos);

    printf("SuperPoder: %.2f(%d)\n", SuperPoderCarta1, resultadoCarta1SuperPoder);

    //--------------------------------------------------------------------------------//
    printf("O PIB per Capita é : R$ %.2f(%d)\n", PIBperCapita, resultadoCarta1PIBperCapita);
    printf("A Densidade Populacional é : %.2f km²(%d)\n", DensidadePopulacional, resultadoCarta1Densidade);

   

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo da Carta: %s\n", CodigoCarta2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("Populacao: %u(%d)\n", Populacao2, resultadoCarta2População2);
    printf("Area: %.2f km²(%d)\n", Area2, resultadoCarta2Area2);
    printf("PIB: R$ %.2f(%d)\n", PIB2, resultadoCarta2PIBperCapita2);
    printf("Pontos Turisticos: %d(%d)\n", Pontos2, resultadoCarta2Pontos2);
    printf("SuperPoder: %.2f(%d)\n", SuperPoderCarta2, resultadoCarta2SuperPoder2);
    
    printf("O PIB per Capita é : R$ %.2f(%d)\n", PIBperCapita2, resultadoCarta2PIBperCapita2);
    printf("A Densidade Populacional é : %.2f km²(%d)\n", DensidadePopulacional2, resultadoCarta2Densidade2);
    
    return 0;
}

