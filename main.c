
#include <stdio.h>

int main()
{
	int num1, num2, sum;

	printf("Selecione o primeiro dC-gito: ");
	scanf("%d", &num1);
	printf("Selecione o segundo dC-gito: ");
	scanf("%d", &num2);
	sum = num1 + num2;

	printf("A soma C) %d + %d = %d", num1, num2, sum);

	return 0;
}