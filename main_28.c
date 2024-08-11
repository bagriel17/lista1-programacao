// CÁLCULO DO VOLUME DE UMA ESFERA - PROGRAMAÇÃO (28/40)
// Este programa solicita ao usuário o raio de uma esfera para calcular o volume usando a fórmula:
// Volume = (4/3) * pi * Raio^3.

#include <stdio.h>
#define PI 3.14159

int main() {
    float raio, volume;

    printf("Digite o valor do raio da esfera (em metros): ");
    scanf("%f", &raio);

    volume = (4.0/3.0) * PI * raio * raio * raio;

    printf("O volume da esfera é: %.2f\n", volume);

    return 0;
}