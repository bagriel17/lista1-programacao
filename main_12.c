//CALCULO DE HIPOTENUSA - PROGRAMAÇÃO (12/40)

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
	int c1, c2;
	float hpt;
	
	printf("Digite o primeiro cateto: \n");
	scanf("%d", &c1);
	printf("Digite o segundo cateto: \n");
	scanf("%d", &c2);
	
	hpt = pow((c1*c1)+(c2*c2),0.5);
	
	printf("Hipotenusa: %.2f\n", hpt);

	return 0;
}