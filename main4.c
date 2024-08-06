//CALCULO DE AREA RETANGULO - PROGRAMAÇÃO (04/40)

#include <stdio.h>

int main()
{
	int num1, num2, area;

	printf("Digite a base do retangulo: \n");
	scanf("%d", &num1);
	printf("Digite a altura do retangulo: \n");
	scanf("%d", &num2);
	
	area = num1 * num2;

	printf("A área é %d * %d = %d", num1, num2, area);

	return 0;
}
