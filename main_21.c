//CONVERSOR DE MILHA - PROGRAMAÇÃO (21/40)

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

    float milha, km;
    
    printf("Digite a qusntidade em quilômetros que deseja converter para milhas: \n");
    scanf("%f",&km);
    
    milha = km * 0.621371;
    
    printf("Milhas = %f", milha);
    
    return 0;
}