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
    int opcao;

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

    printf("\nMenu de comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            if (carta1.populacao > carta2.populacao)
                printf("Carta 1 venceu na População!\n");
            else if (carta2.populacao > carta1.populacao)
                printf("Carta 2 venceu na População!\n");
            else
                printf("Empate na População!\n");
            break;
        case 2:
            if (carta1.area > carta2.area)
                printf("Carta 1 venceu na Área!\n");
            else if (carta2.area > carta1.area)
                printf("Carta 2 venceu na Área!\n");
            else
                printf("Empate na Área!\n");
            break;
        case 3:
            if (carta1.pib > carta2.pib)
                printf("Carta 1 venceu no PIB!\n");
            else if (carta2.pib > carta1.pib)
                printf("Carta 2 venceu no PIB!\n");
            else
                printf("Empate no PIB!\n");
            break;
        case 4:
            if (carta1.pontos_turisticos > carta2.pontos_turisticos)
                printf("Carta 1 venceu nos Pontos Turísticos!\n");
            else if (carta2.pontos_turisticos > carta1.pontos_turisticos)
                printf("Carta 2 venceu nos Pontos Turísticos!\n");
            else
                printf("Empate nos Pontos Turísticos!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}