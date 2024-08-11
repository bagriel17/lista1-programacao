// CÁLCULO DA ÁREA DE UM LOSANGO - PROGRAMAÇÃO (37/40)
// Este programa solicita ao usuário o valor da diagonal maior e da diagonal menor de um losango para calcular a área usando a fórmula:
// Área = (Diagonal Maior * Diagonal Menor) / 2.

#include <stdio.h>

int main() {
    float diagonal_maior, diagonal_menor, area;

    printf("Digite o valor da diagonal maior (em metros): ");
    scanf("%f", &diagonal_maior);
    
    printf("Digite o valor da diagonal menor (em metros): ");
    scanf("%f", &diagonal_menor);

    area = (diagonal_maior * diagonal_menor) / 2;

    printf("A área do losango é: %.2f\n", area);

    return 0;
}
