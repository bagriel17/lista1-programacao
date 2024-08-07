//CALCULO DE AREA TRIANGULO - PROGRAMAÇÃO (05/40)

#include <stdio.h>

int main()
{
	int num1, num2, area;

	printf("Digite a base do triangulo: \n");
	scanf("%d", &num1);
	printf("Digite a altura do triangulo: \n");
	scanf("%d", &num2);
	
	area = num1 * num2 / 2;

	printf("A area e %d", area);

	return 0;
}