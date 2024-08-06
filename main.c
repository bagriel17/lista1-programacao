
#include <stdio.h>

int main()
{
	int num1, num2, sum;

	printf("Selecione o primeiro digito: ");
	scanf("%d", &num1);
	printf("Selecione o segundo digito: ");
	scanf("%d", &num2);
	sum = num1 + num2;

	printf("A soma e) %d + %d = %d", num1, num2, sum);

	return 0;
}
