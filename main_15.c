//CONVERSÃO HORA PARA MINUTOS - PROGRAMAÇÃO (15/40)

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

    float horas, minutos;
    
    printf("Digite o número de horas que deseja converter em minutos: \n");
    scanf("%f", &horas);
    
    minutos = horas * 60;
    
    printf("Minutos = %f", minutos);
    
    return 0;
}
