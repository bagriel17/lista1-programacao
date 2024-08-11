// CÁLCULO DA ENERGIA CINÉTICA - PROGRAMAÇÃO (23/40)
// Este programa solicita ao usuário a massa e a velocidade de um objeto para calcular a energia cinética usando a fórmula:
// Energia Cinética = (Massa * Velocidade^2) / 2.

#include <stdio.h>

int main() {
    float massa, velocidade, energia_cinetica;

    printf("Digite a massa do objeto (em kg): ");
    scanf("%f", &massa);
    
    printf("Digite a velocidade do objeto (em m/s): ");
    scanf("%f", &velocidade);

    energia_cinetica = (massa * velocidade * velocidade) / 2;

    printf("A energia cinética é: %.2f\n", energia_cinetica);

    return 0;
}
