// CONVERSÃO DE MILHAS PARA QUILÔMETROS - PROGRAMAÇÃO (22/40)
// Este programa solicita ao usuário um valor em milhas e o converte para quilômetros usando a fórmula:
// Quilômetros = Milhas / 0.621371.

#include <stdio.h>

int main() {
    float milhas, quilometros;

    printf("Digite o valor em milhas: ");
    scanf("%f", &milhas);

    quilometros = milhas / 0.621371;

    printf("O valor em quilômetros é: %.2f\n", quilometros);

    return 0;
}
