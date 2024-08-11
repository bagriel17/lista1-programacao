// CÁLCULO DO PERÍMETRO DE UM POLÍGONO REGULAR - PROGRAMAÇÃO (39/40)
// Este programa solicita ao usuário o número de lados de um polígono regular e a medida de um lado para calcular o perímetro usando a fórmula:
// Perímetro = Número de Lados * Lado.

#include <stdio.h>

int main() {
    int num_lados;
    float lado, perimetro;

    printf("Digite o número de lados do polígono: ");
    scanf("%d", &num_lados);
    
    printf("Digite a medida de um lado (em metros): ");
    scanf("%f", &lado);

    perimetro = num_lados * lado;

    printf("O perímetro do polígono é: %.2f\n", perimetro);

    return 0;
}

