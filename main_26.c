// CÁLCULO DA POTÊNCIA - PROGRAMAÇÃO (26/40)
// Este programa solicita ao usuário o trabalho realizado e o tempo gasto para calcular a potência usando a fórmula:
// Potência = Trabalho / Tempo.

#include <stdio.h>

int main() {
    float trabalho, tempo, potencia;

    printf("Digite o trabalho realizado (em Joules): ");
    scanf("%f", &trabalho);
    
    printf("Digite o tempo gasto (em segundos): ");
    scanf("%f", &tempo);

    potencia = trabalho / tempo;

    printf("A potência é: %.2f\n", potencia);

    return 0;
}
