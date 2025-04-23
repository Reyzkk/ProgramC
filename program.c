#include <stdio.h>

int main() {
    
    //Atribuindo Valor a Variaveis Tipo int,float,string//
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
    
    printf("Digite o Estado da Carta: ");
    scanf("%19s", Estado);

    printf("Digite o codigo da Carta: ");
    scanf("%3s", CodigoCarta);

    printf("Digite o Nome da Cidade: ");
    scanf("%19s", NomeCidade);

    printf("Digite a Populacao do Local: ");
    scanf("%d", &Populacao);

    printf("Digite a Area do Local: ");
    scanf("%f", &Area);

    printf("Digite o PIB do Local: ");
    scanf("%f", &PIB);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &Pontos);

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", Estado);
    printf("Codigo da Carta: %s\n", CodigoCarta);
    printf("Nome da Cidade: %s\n", NomeCidade);
    printf("Populacao: %d\n", Populacao);
    printf("Area: %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turisticos: %d\n", Pontos);


    char Estado2[20] = "";
    char CodigoCarta2[4] = "";
    char NomeCidade2[20] = "";
    int Populacao2 = 0;      
    float Area2 = 0;
    float PIB2 = 0;           
    int Pontos2 = 0;


    printf("Digite o Estado da Segunda Carta: ");
    scanf("%19s", Estado2);

    printf("Digite o codigo da Segunda Carta: ");
    scanf("%3s", CodigoCarta2);

    printf("Digite o Nome da Cidade: ");
    scanf("%19s", NomeCidade2);

    printf("Digite a Populacao do Local: ");
    scanf("%d", &Populacao2);

    printf("Digite a Area do Local: ");
    scanf("%f", &Area2);

    printf("Digite o PIB do Local: ");
    scanf("%f", &PIB2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &Pontos2);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo da Carta: %s\n", CodigoCarta2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turisticos: %d\n", Pontos2);

    return 0;
}

