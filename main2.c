
#include <stdio.h>

int main()
{
	int num1, num2, sum;

	printf("Selecione o primeiro digito: \n");
	scanf("%d", &num1);
	printf("Selecione o segundo digito: \n");
	scanf("%d", &num2);
	sum = num1 * num2;

	printf("O produto é %d * %d = %d", num1, num2, sum);

	return 0;
}