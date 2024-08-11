// CÁLCULO DA TAXA DE CRESCIMENTO POPULACIONAL - PROGRAMAÇÃO (32/40)
// Este programa solicita ao usuário a população inicial, a população final e o número de anos para calcular a taxa de crescimento populacional usando a fórmula:
// Taxa de Crescimento = ((População Final - População Inicial) / População Inicial) * 100 / Anos.

#include <stdio.h>

int main() {
    float populacao_inicial, populacao_final, anos, taxa_crescimento;

    printf("Digite a população inicial: ");
    scanf("%f", &populacao_inicial);
    
    printf("Digite a população final: ");
    scanf("%f", &populacao_final);
    
    printf("Digite o número de anos: ");
    scanf("%f", &anos);

    taxa_crescimento = ((populacao_final - populacao_inicial) / populacao_inicial) * 100 / anos;

    printf("A taxa de crescimento é: %.2f%%\n", taxa_crescimento);

    return 0;
}