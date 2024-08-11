// CÁLCULO DO VALOR PRESENTE DE UM INVESTIMENTO - PROGRAMAÇÃO (34/40)
// Este programa solicita ao usuário o valor futuro de um investimento, a taxa de juros e o número de períodos para calcular o valor presente usando a fórmula:
// Valor Presente = Valor Futuro / (1 + Taxa/100)^Períodos.

#include <stdio.h>
#include <math.h>

int main() {
    float valor_futuro, taxa, periodos, valor_presente;

    printf("Digite o valor futuro do investimento: ");
    scanf("%f", &valor_futuro);
    
    printf("Digite a taxa de juros (em %%): ");
    scanf("%f", &taxa);
    
    printf("Digite o número de períodos: ");
    scanf("%f", &periodos);

    valor_presente = valor_futuro / pow((1 + taxa / 100), periodos);

    printf("O valor presente é: %.2f\n", valor_presente);

    return 0;
}

