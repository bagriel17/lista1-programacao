// CÁLCULO DA DEPRECIAÇÃO ANUAL - PROGRAMAÇÃO (33/40)
// Este programa solicita ao usuário o valor inicial de um bem, seu valor residual e a vida útil em anos para calcular a depreciação anual usando a fórmula:
// Depreciação Anual = (Valor Inicial - Valor Residual) / Vida Útil.

#include <stdio.h>

int main() {
    float valor_inicial, valor_residual, vida_util, depreciacao_anual;

    printf("Digite o valor inicial do bem: ");
    scanf("%f", &valor_inicial);
    
    printf("Digite o valor residual do bem: ");
    scanf("%f", &valor_residual);
    
    printf("Digite a vida útil do bem (em anos): ");
    scanf("%f", &vida_util);

    depreciacao_anual = (valor_inicial - valor_residual) / vida_util;

    printf("A depreciação anual é: %.2f\n", depreciacao_anual);

    return 0;
}
