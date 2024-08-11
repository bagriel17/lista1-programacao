// CÁLCULO DO VOLUME DE UM CUBO - PROGRAMAÇÃO (27/40)
// Este programa solicita ao usuário a aresta de um cubo para calcular o volume usando a fórmula:
// Volume = Aresta^3.

#include <stdio.h>

int main() {
    float aresta, volume;

    printf("Digite o valor da aresta do cubo (em metros): ");
    scanf("%f", &aresta);

    volume = aresta * aresta * aresta;

    printf("O volume do cubo é: %.2f\n", volume);

    return 0;
}

