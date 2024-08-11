//CALCULO DE IMC - PROGRAMAÇÃO (18/40)

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

    float imc, altura, peso;
    
    printf("Digite sua altura (em metros): \n");
    scanf("%f", &altura);
    printf("Digite seu peso (em kg): \n");
    scanf("%f", &peso);
    
    imc = peso / (altura * altura);
    
    printf("IMC = %f", imc);
    
    return 0;
}