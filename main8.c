//CALCULO DE CELSIUS PARA FAHRENHEIT - PROGRAMAÇÃO (08/40)

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
	int celsius, fahrenheit;
	
	printf("Digite a temperatura em celsius que deseja converter:  \n");
	scanf("%d", &celsius);
	
	fahrenheit = celsius * 9/5 + 32;
	printf("Celsius: %d\n", celsius);
	printf("Farenheit: %d\n", fahrenheit);

	return 0;
}
