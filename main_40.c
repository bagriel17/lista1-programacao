// CÁLCULO DO VOLUME DE UM CILINDRO - PROGRAMAÇÃO (40/40)
// Este programa solicita ao usuário a altura e o raio de um cilindro para calcular o volume usando a fórmula:
// Volume = pi * Raio^2 * Altura, considerando pi aproximadamente 3.14159.

#include <stdio.h>
#define PI 3.14159

int main() {
    float raio, altura, volume;

    printf("Digite o valor do raio da base do cilindro (em metros): ");
    scanf("%f", &raio);
    
    printf("Digite a altura do cilindro (em metros): ");
    scanf("%f", &altura);

    volume = PI * raio * raio * altura;

    printf("O volume do cilindro é: %.3f\n", volume);

    return 0;
}


