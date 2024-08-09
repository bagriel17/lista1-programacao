//CALCULO DE METROS PARA PÉS - PROGRAMAÇÃO (09/40)

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
	float pes, metros;
	
	printf("Digite a quantidade em metros que deseja converter:  \n");
	scanf("%f", &metros);
	
	pes = metros * 3.28084;
	
	printf("metros: %f\n", metros);
	printf("pés: %f\n", pes);

	return 0;
}