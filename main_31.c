// CÁLCULO DA MÉDIA PONDERADA - PROGRAMAÇÃO (31/40)
// Este programa solicita ao usuário três notas e seus respectivos pesos para calcular a média ponderada usando a fórmula:
// Média Ponderada = (Nota1 * Peso1 + Nota2 * Peso2 + Nota3 * Peso3) / (Peso1 + Peso2 + Peso3).

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, peso1, peso2, peso3, media;

    printf("Digite a primeira nota e seu peso: ");
    scanf("%f %f", &nota1, &peso1);
    
    printf("Digite a segunda nota e seu peso: ");
    scanf("%f %f", &nota2, &peso2);

    printf("Digite a terceira nota e seu peso: ");
    scanf("%f %f", &nota3, &peso3);

    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    printf("A média ponderada é: %.2f\n", media);

    return 0;
}
