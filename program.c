#include <stdio.h> 

int main(){

    //Atributos Carta1
    char Carta1Estado[30];
    char Carta1Codigo[3];
    char Carta1Cidade[30];
    unsigned int Carta1População;
    float Carta1Area;
    float Carta1PIB;
    int Carta1Pontos;
    
    //Atribuindo Valores Carta2
    char Carta2Estado[30];
    char Carta2Codigo[3];
    char Carta2Cidade[30];
    unsigned int Carta2População;
    float Carta2Area;
    float Carta2PIB;
    int Carta2Pontos;

    printf("Bem vindo ao Jogo Super Trunfo\n");
    
    printf("Qual é o Estado da Carta-1\n");
    scanf("%s", Carta1Estado);

    printf("Qual é o Codigo da Carta-1\n");
    scanf("%s", Carta1Codigo);

    printf("Qual é o Cidade da Carta-1\n");
    scanf("%s", Carta1Cidade);

    printf("Qual é o População da Carta-1\n");
    scanf("%u", &Carta1População);

    printf("Qual é Aréa da Carta-1\n");
    scanf("%f", &Carta1Area);

    printf("Qual é o PIB da Carta-1\n");
    scanf("%f", &Carta1PIB);

    printf("Qual é o Pontos Turisticos da Carta-1\n");
    scanf("%d", &Carta1Pontos);
    
    //Atributos Carta1 Operacoes
    float Carta1DensidadeP = Carta1População / Carta1Area;
    float Carta1PIBperCapita = Carta1PIB / Carta1População;
//----------------------------------------------------------------------//



    printf("Bem vindo ao Jogo Super Trunfo\n");
    
    printf("Qual é o Estado da Carta-2\n");
    scanf("%s", Carta2Estado);

    printf("Qual é o Codigo da Carta-2\n");
    scanf("%s", Carta2Codigo);

    printf("Qual é o Cidade da Carta-2\n");
    scanf("%s", Carta2Cidade);

    printf("Qual é o População da Carta-2\n");
    scanf("%u", &Carta2População);

    printf("Qual é Aréa da Carta-2\n");
    scanf("%f", &Carta2Area);

    printf("Qual é o PIB da Carta-2\n");
    scanf("%f", &Carta2PIB);

    printf("Qual é o Pontos Turisticos da Carta-2\n");
    scanf("%d", &Carta2Pontos);
        //Atributos Carta2 Operacoes
        float Carta2DensidadeP = Carta2População / Carta2Area;
        float Carta2PIBperCapita = Carta2PIB / Carta2População;
    //----------------------------------------------------------------------//


    if(Carta1População > Carta2População){
        printf("--------------------------\n");
        printf("Carta 1: População %u Venceu\n", Carta1População);
        printf("Carta 2: População %u Perdeu\n", Carta2População);
    } else if(Carta2População > Carta1População){
        printf("--------------------------\n");
        printf("Carta 1: População %u Perdeu\n", Carta1População);
        printf("Carta 2: População %u Venceu\n", Carta2População);
    }else {
        printf("--------------------------\n");
        printf("Carta1: População: %u Perdeu\n",Carta1População);
        printf("Carta2: População: %u Perdeu\n", Carta1População);
    }

    if(Carta1Area > Carta2Area){
        printf("--------------------------\n");
        printf("Carta 1: Aréa %.2f km² Venceu\n", Carta1Area);
        printf("Carta 2: Aréa %.2f km² Perdeu\n", Carta2Area);
    } else if(Carta2Area > Carta1Area){
        printf("--------------------------\n");
        printf("Carta 1: Aréa %.2f km² Perdeu\n", Carta1Area);
        printf("Carta 2: Aréa %.2f km² Venceu\n", Carta2Area);
    }else{ 
        printf("--------------------------\n");
        printf("Carta1: Aréa: %.2fkm² Perdeu\n", Carta1Area);
        printf("Carta2: Aréa: %.2fkm² Perdeu\n", Carta2Area);
    }

    if(Carta1PIB > Carta2PIB){
        printf("--------------------------\n");
        printf("Carta 1: PIB R$ %.2f Venceu\n", Carta1PIB);
        printf("Carta 2: PIB R$ %.2f Perdeu\n", Carta2PIB);
    } else if(Carta2PIB > Carta1PIB){
        printf("--------------------------\n");
        printf("Carta 1: PIB R$ %.2f Perdeu\n", Carta1PIB);
        printf("Carta 2: PIB R$ %.2f Venceu\n", Carta2PIB);
    }else {
        printf("--------------------------\n");
        printf("Carta1: PIB: %.2fkm² Perdeu\n", Carta1PIB);
        printf("Carta2: PIB: %.2fkm² Perdeu\n", Carta2PIB);
    }

    if(Carta1Pontos > Carta2Pontos){
        printf("--------------------------\n");
        printf("Carta 1: Pontos Turisticos %d Venceu\n", Carta1Pontos);
        printf("Carta 2: Pontos Turisticos %d Perdeu\n", Carta2Pontos);
    } else if(Carta2Pontos > Carta1Pontos){
        printf("--------------------------\n");
        printf("Carta 1: Pontos Turisticos %d Perdeu\n", Carta1Pontos);
        printf("Carta 2: Pontos Turisticos %d Venceu\n", Carta2Pontos);
    }else {
        printf("--------------------------\n");
        printf("Carta1: Pontos Turisticos: %dkm² Perdeu\n", Carta1Pontos);
        printf("Carta2: Pontos Turisticos: %dkm² Perdeu\n", Carta2Pontos);
    }

    if(Carta1DensidadeP < Carta2DensidadeP){
        printf("--------------------------\n");
        printf("Carta1: Densidade Populacional: %.2fkm² Venceu\n", Carta1DensidadeP);
        printf("Carta2: Densidade Populacional: %.2fkm² Perdeu\n", Carta2DensidadeP);
    } else if (Carta2DensidadeP < Carta1DensidadeP){
        printf("--------------------------\n");
        printf("Carta1: Densidade Populacional: %.2fkm² Perdeu\n", Carta1DensidadeP);
        printf("Carta2: Densidade Populacional: %.2fkm² Venceu\n", Carta2DensidadeP);
    } else {
        printf("--------------------------\n");
        printf("Carta1: Densidade Populacional: %.2fkm² Perdeu\n", Carta1DensidadeP);
        printf("Carta2: Densidade Populacional: %.2fkm² Perdeu\n", Carta2DensidadeP);
    }

    if(Carta1PIBperCapita > Carta2PIBperCapita){
        printf("--------------------------\n");
        printf("Carta1: PIB per Capita: R$ %.2f Venceu\n", Carta1PIBperCapita);
        printf("Carta2: PIB per Capita: R$ %.2f Perdeu\n", Carta2PIBperCapita);
    } else if (Carta2PIBperCapita > Carta1PIBperCapita){
        printf("--------------------------\n");
        printf("Carta1: PIB per Capita: R$ %.2f Perdeu\n", Carta1PIBperCapita);
        printf("Carta2: PIB per Capita: R$ %.2f Venceu\n", Carta2PIBperCapita);
    } else {
        printf("--------------------------\n");
        printf("Carta1: PIB per Capita: R$ %.2f Perdeu\n", Carta1PIBperCapita);
        printf("Carta2: PIB per Capita: R$ %.2f Perdeu\n", Carta2PIBperCapita);
    }


}
   


