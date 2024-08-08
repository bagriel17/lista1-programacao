//CALCULO DE PERIMETRO CIRCULO - PROGRAMAÇÃO (06/40)

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
	float peri, raio, pi;
	pi = 3.14;

	printf("Digite o raio do círculo: \n");
	scanf("%f", &raio);
	
	peri = 2 * pi * raio;

	printf("\nO perímetro é %.2f", peri);

	return 0;
}