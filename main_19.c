//CALCULO DE VELOCIDADE MÉDIA - PROGRAMAÇÃO (19/40)

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

    float velocidade, distancia, tempo;
    
    printf("Digite a distância: \n");
    scanf("%f", &distancia);
    printf("Digite o tempo: \n");
    scanf("%f", &tempo);
    
    velocidade = distancia / tempo;
    
    printf("Velocidade média = %f", velocidade);
    
    return 0;
}