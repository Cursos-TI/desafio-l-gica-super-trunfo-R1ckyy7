#include <stdio.h>
#include <string.h>

int main() {
    struct Carta {
        char estado[3];
        char codigo[4];
        char nome[30];
        int populacao;
        float area;
        float pib;
        int pontos_turisticos;
    };

    struct Carta carta1, carta2;

    printf("Cadastro da Carta 1:\n");
    scanf("%s", carta1.estado);
    scanf("%s", carta1.codigo);
    scanf("%s", carta1.nome);
    scanf("%d", &carta1.populacao);
    scanf("%f", &carta1.area);
    scanf("%f", &carta1.pib);
    scanf("%d", &carta1.pontos_turisticos);

    printf("Cadastro da Carta 2:\n");
    scanf("%s", carta2.estado);
    scanf("%s", carta2.codigo);
    scanf("%s", carta2.nome);
    scanf("%d", &carta2.populacao);
    scanf("%f", &carta2.area);
    scanf("%f", &carta2.pib);
    scanf("%d", &carta2.pontos_turisticos);

    printf("\nDados da Carta 1:\n");
    printf("%s - %s - %s - %d - %.2f - %.2f - %d\n", carta1.estado, carta1.codigo, carta1.nome, carta1.populacao, carta1.area, carta1.pib, carta1.pontos_turisticos);

    printf("\nDados da Carta 2:\n");
    printf("%s - %s - %s - %d - %.2f - %.2f - %d\n", carta2.estado, carta2.codigo, carta2.nome, carta2.populacao, carta2.area, carta2.pib, carta2.pontos_turisticos);

    printf("\nComparando População...\n");
    if (carta1.populacao > carta2.populacao) {
        printf("Carta 1 venceu pela população!\n");
    } else if (carta2.populacao > carta1.populacao) {
        printf("Carta 2 venceu pela população!\n");
    } else {
        printf("Empate na população!\n");
    }

    return 0;
}