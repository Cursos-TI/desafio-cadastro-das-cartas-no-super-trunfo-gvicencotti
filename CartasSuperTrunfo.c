#include <stdio.h>

void compararFloat(const char* nome, float v1, float v2, int menorEhMelhor) {
    int resultado;
    if (menorEhMelhor) {
        resultado = (v1 < v2) ? 1 : 0;
    } else {
        resultado = (v1 > v2) ? 1 : 0;
    }
    printf("%s: Carta 1 venceu? %d\n", nome, resultado);
}

void compararInt(const char* nome, int v1, int v2) {
    int resultado = (v1 > v2) ? 1 : 0;
    printf("%s: Carta 1 venceu? %d\n", nome, resultado);
}

int main() {
    unsigned long int pop1, pop2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    printf("Cadastro da Carta 1:\n");
    printf("Populacao: ");
    scanf("%lu", &pop1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCadastro da Carta 2:\n");
    printf("Populacao: ");
    scanf("%lu", &pop2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    float densidade1 = area1 != 0 ? (float)pop1 / area1 : 0.0f;
    float densidade2 = area2 != 0 ? (float)pop2 / area2 : 0.0f;

    float pibPerCapita1 = pop1 != 0 ? pib1 / pop1 : 0.0f;
    float pibPerCapita2 = pop2 != 0 ? pib2 / pop2 : 0.0f;

    printf("\nDados da Carta 1:\n");
    printf("Populacao: %lu\n", pop1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.6f\n", pibPerCapita1);

    printf("\nDados da Carta 2:\n");
    printf("Populacao: %lu\n", pop2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.6f\n", pibPerCapita2);

    float superPoder1 = (float)pop1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (densidade1 != 0 ? 1.0f / densidade1 : 0.0f);
    float superPoder2 = (float)pop2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (densidade2 != 0 ? 1.0f / densidade2 : 0.0f);

    printf("\nComparacoes:\n");
    compararFloat("Densidade Populacional", densidade1, densidade2, 1);
    compararFloat("PIB per Capita", pibPerCapita1, pibPerCapita2, 0);
    compararFloat("Area", area1, area2, 0);
    compararFloat("PIB", pib1, pib2, 0);
    compararInt("Numero de pontos turisticos", pontosTuristicos1, pontosTuristicos2);
    compararFloat("Populacao", (float)pop1, (float)pop2, 0);
    compararFloat("Super Poder", superPoder1, superPoder2, 0);

    return 0;
}
