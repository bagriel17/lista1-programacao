//CALCULO DE AREA CIRCULO - PROGRAMAÇÃO (05/40)

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
	float area, raio, pi;
	pi = 3.14;

	printf("Digite o raio do círculo: \n");
	scanf("%f", &raio);
	
	area = pi * pow(raio, 2) / 2 ;

	printf("A área é %.2f", area);

	return 0;
}
