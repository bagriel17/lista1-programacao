//CONVERSÃO MINUTOS PARA SEGUNDOS - PROGRAMAÇÃO (16/40)

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

    float segundos, minutos;
    
    printf("Digite o número de minutos que deseja converter em segundos: \n");
    scanf("%f", &minutos);
    
    segundos = minutos * 60;
    
    printf("Segundos = %f", segundos);
    
    return 0;
}
