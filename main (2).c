
#include <stdio.h>

int main()
{
	int num1, num2, num3, divisor, resultado;
	divisor = 3;

	printf("Selecione o primeiro digito: ");
	scanf("%d", &num1);
	printf("Selecione o segundo digito: ");
	scanf("%d", &num2);
	printf("Selecione o terceiro digito: ");
	scanf("%d", &num3);
	resultado = (num1 + num2 + num3) / divisor;

	printf("A média aritmetica e %d", resultado);

	return 0;
}

