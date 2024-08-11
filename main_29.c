// CÁLCULO DO VOLUME DE UM CILINDRO - PROGRAMAÇÃO (29/40)
// Este programa solicita ao usuário o raio da base e a altura de um cilindro para calcular o volume usando a fórmula:
// Volume = pi * Raio^2 * Altura.

#include <stdio.h>
#define PI 3.14159

int main() {
    float raio, altura, volume;

    printf("Digite o valor do raio da base do cilindro (em metros): ");
    scanf("%f", &raio);
    
    printf("Digite a altura do cilindro (em metros): ");
    scanf("%f", &altura);

    volume = PI * raio * raio * altura;

    printf("O volume do cilindro é: %.2f\n", volume);

    return 0;
}
