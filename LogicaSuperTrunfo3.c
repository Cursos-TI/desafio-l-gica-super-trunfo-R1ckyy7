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
    int atributo1, atributo2;
    int pontos_carta1 = 0, pontos_carta2 = 0;

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

    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n");
    scanf("%d", &atributo1);

    printf("Escolha o segundo atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n");
    scanf("%d", &atributo2);

    // Primeira comparação
    if (atributo1 == 1) pontos_carta1 += (carta1.populacao > carta2.populacao) ? 1 : (carta1.populacao < carta2.populacao ? 0 : 0);
    else if (atributo1 == 2) pontos_carta1 += (carta1.area > carta2.area) ? 1 : (carta1.area < carta2.area ? 0 : 0);
    else if (atributo1 == 3) pontos_carta1 += (carta1.pib > carta2.pib) ? 1 : (carta1.pib < carta2.pib ? 0 : 0);
    else if (atributo1 == 4) pontos_carta1 += (carta1.pontos_turisticos > carta2.pontos_turisticos) ? 1 : (carta1.pontos_turisticos < carta2.pontos_turisticos ? 0 : 0);

    // Segunda comparação
    if (atributo2 == 1) pontos_carta1 += (carta1.populacao > carta2.populacao) ? 1 : (carta1.populacao < carta2.populacao ? 0 : 0);
    else if (atributo2 == 2) pontos_carta1 += (carta1.area > carta2.area) ? 1 : (carta1.area < carta2.area ? 0 : 0);
    else if (atributo2 == 3) pontos_carta1 += (carta1.pib > carta2.pib) ? 1 : (carta1.pib < carta2.pib ? 0 : 0);
    else if (atributo2 == 4) pontos_carta1 += (carta1.pontos_turisticos > carta2.pontos_turisticos) ? 1 : (carta1.pontos_turisticos < carta2.pontos_turisticos ? 0 : 0);

    // Pontos carta 2 é o resto
    pontos_carta2 = 2 - pontos_carta1;

    printf("\nResultado da comparação:\n");
    if (pontos_carta1 > pontos_carta2)
        printf("Carta 1 venceu com %d a %d!\n", pontos_carta1, pontos_carta2);
    else if (pontos_carta2 > pontos_carta1)
        printf("Carta 2 venceu com %d a %d!\n", pontos_carta2, pontos_carta1);
    else
        printf("Empate! Parabéns para ambas as cartas!\n");

    return 0;
}