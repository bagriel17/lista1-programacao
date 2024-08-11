// CÁLCULO DO VALOR FUTURO DE UM INVESTIMENTO - PROGRAMAÇÃO (35/40)
// Este programa solicita ao usuário o valor presente de um investimento, a taxa de juros e o número de períodos para calcular o valor futuro usando a fórmula:
// Valor Futuro = Valor Presente * (1 + Taxa/100)^Períodos.

#include <stdio.h>
#include <math.h>

int main() {
    float valor_presente, taxa, periodos, valor_futuro;

    printf("Digite o valor presente do investimento: ");
    scanf("%f", &valor_presente);
    
    printf("Digite a taxa de juros (em %%): ");
    scanf("%f", &taxa);
    
    printf("Digite o número de períodos: ");
    scanf("%f", &periodos);

    valor_futuro = valor_presente * pow((1 + taxa / 100), periodos);

    printf("O valor futuro é: %.2f\n", valor_futuro);

    return 0;
}
