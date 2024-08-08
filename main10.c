//CALCULO DE KG PARA LBS - PROGRAMAÇÃO (09/40)

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
	int quilo, libras;
	
	printf("Digite a quantidade em quilogramas que deseja converter:  \n");
	scanf("%d", &quilo);
	
	libras = quilo * 2.20462;
	
	printf("quilo: %d\n", quilo);
	printf("libras: %d\n", libras);

	return 0;
}