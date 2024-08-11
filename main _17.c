//CALCULO DE DENSIDADE - PROGRAMAÇÃO (17/40)

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

    float densidade, massa, volume;
    
    printf("Digite a massa do objeto: \n");
    scanf("%f", &massa);
    printf("Digite o volume do objeto: \n");
    scanf("%f", &volume);
    
    densidade = massa / volume;
    
    printf("Densidade = %f", densidade);
    
    return 0;
}