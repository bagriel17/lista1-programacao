// CÁLCULO DO PREÇO FINAL APÓS DESCONTO - PROGRAMAÇÃO (38/40)
// Este programa solicita ao usuário o preço de um produto e a percentagem de desconto para calcular o preço final após o desconto usando a fórmula:
// Preço Final = Preço * (1 - Desconto/100).

#include <stdio.h>

int main() {
    float preco, desconto, preco_final;

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);
    
    printf("Digite a percentagem de desconto (em %%): ");
    scanf("%f", &desconto);

    preco_final = preco * (1 - desconto / 100);

    printf("O preço final após o desconto é: %.2f\n", preco_final);

    return 0;
}
