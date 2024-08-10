//CALCULO DE JUROS SIMPLES - PROGRAMAÇÃO (14/40)

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int principal, tempo_anos, juros_simples;
	float taxa_juros;

	printf("Digite o valor inicial: \n");
	scanf("%d", &principal);
	printf("Digite a taxa de juros \n");
	scanf("%f", &taxa_juros);
	printf("Digite o tempo, em anos, do investimento: \n");
	scanf("%d", &tempo_anos);

    juros_simples = principal * (taxa_juros / 100) * tempo_anos;

	printf("Juros simples: %d \n", juros_simples);

	return 0;
}

