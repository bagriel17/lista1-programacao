//CALCULO DE JURO COMPOSTOS - PROGRAMAÇÃO (13/40)
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int principal, tempo_anos, montante, taxa_juros;

	printf("Digite o valor inicial: \n");
	scanf("%d", &principal);
	printf("Digite a taxa de juros \n");
	scanf("%d", &taxa_juros);
	printf("Digite o tempo, em anos, do investimento: \n");
	scanf("%d", &tempo_anos);

	montante = principal * (1 + taxa_juros/100)^tempo_anos;

	printf("O resultado é: %d \n", montante);

	return 0;
}
