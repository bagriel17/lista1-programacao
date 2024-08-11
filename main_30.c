// CÁLCULO DO VOLUME DE UM CONE - PROGRAMAÇÃO (30/40)
// Este programa solicita ao usuário o raio da base e a altura de um cone para calcular o volume usando a fórmula:
// Volume = (1/3) * pi * Raio^2 * Altura.

#include <stdio.h>
#define PI 3.14159

int main() {
    float raio, altura, volume;

    printf("Digite o valor do raio da base do cone (em metros): ");
    scanf("%f", &raio);
    
    printf("Digite a altura do cone (em metros): ");
    scanf("%f", &altura);

    volume = (1.0/3.0) * PI * raio * raio * altura;

    printf("O volume do cone é: %.2f\n", volume);

    return 0;
}