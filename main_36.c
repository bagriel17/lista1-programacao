// CÁLCULO DA TAXA DE JUROS EFETIVA ANUAL - PROGRAMAÇÃO (36/40)
// Este programa solicita ao usuário a taxa de juros nominal e o número de períodos por ano para calcular a taxa de juros efetiva anual usando a fórmula:
// Taxa Efetiva = (1 + Taxa / Períodos)^Períodos - 1.

#include <stdio.h>
#include <math.h>

int main() {
    float taxa_nominal, periodos, taxa_efetiva;

    printf("Digite a taxa de juros nominal (em %%): ");
    scanf("%f", &taxa_nominal);
    
    printf("Digite o número de períodos por ano: ");
    scanf("%f", &periodos);

    taxa_efetiva = pow((1 + taxa_nominal / periodos), periodos) - 1;

    printf("A taxa de juros efetiva é: %.4f\n", taxa_efetiva);

    return 0;
}
