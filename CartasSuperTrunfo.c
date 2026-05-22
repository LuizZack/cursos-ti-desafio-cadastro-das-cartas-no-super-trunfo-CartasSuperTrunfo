#include <stdio.h>

int main() {
    char Estado[3]; // Corrigido
    char CodigoCard[10];
    char NomeDaCidade[20];
    int Populacao;
    float AreaKm;
    float Pib;
    int NumerosDePontosTuristicos;

    printf("Digite o estado: \n");
    scanf("%2s", Estado); // limitar a 2 caracteres

    printf("Digite o codigo do Card: \n");
    scanf("%9s", CodigoCard); // limitar a 9 caracteres

    printf("Digite o nome da cidade: \n");
    scanf("%19s", NomeDaCidade);

    printf("Digite a populacao: \n");
    scanf("%d", &Populacao);

    printf("Digite a area em km: \n");
    scanf("%f", &AreaKm);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &NumerosDePontosTuristicos);

    printf("\nEstado: %s\n", Estado);
    printf("Codigo do Card: %s\n", CodigoCard);
    printf("Nome da Cidade: %s\n", NomeDaCidade);
    printf("Populacao: %d\n", Populacao);
    printf("Area em km: %.2f\n", AreaKm);
    printf("Numero de Pontos Turisticos: %d\n", NumerosDePontosTuristicos);

    return 0;
}
