//CALCULO DE FAHRENHEIT PARA CELSIUS - PROGRAMAÇÃO (09/40)

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
	int celsius, fahrenheit;
	
	printf("Digite a temperatura em fahrenheit que deseja converter:  \n");
	scanf("%d", &fahrenheit);
	
	celsius = (fahrenheit - 32) * 5/9;
	
	printf("Farenheit: %d\n", fahrenheit);
	printf("Celsius: %d\n", celsius);

	return 0;
}