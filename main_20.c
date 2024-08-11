//CALCULO DE PRESSÃO - PROGRAMAÇÃO (20/40)

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

    float pressao, forca, area;
    
    printf("Digite a força (em newtons): \n");
    scanf("%f", &forca);
    printf("Digite a area: \n");
    scanf("%f", &area);
    
    pressao = forca / area;
    
    printf("Pressão = %f", pressao);
    
    return 0;
}