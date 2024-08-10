/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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