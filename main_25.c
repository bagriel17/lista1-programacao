// CÁLCULO DA FORÇA RESULTANTE - PROGRAMAÇÃO (24/40)
// Este programa solicita ao usuário a massa e a aceleração de um objeto para calcular a força resultante usando a fórmula:
// Força = Massa * Aceleração.

#include <stdio.h>

int main() {
    float massa, aceleracao, forca;

    printf("Digite a massa do objeto (em kg): ");
    scanf("%f", &massa);
    
    printf("Digite a aceleração do objeto (em m/s²): ");
    scanf("%f", &aceleracao);

    forca = massa * aceleracao;

    printf("A força é: %.2f\n", forca);

    return 0;
}


