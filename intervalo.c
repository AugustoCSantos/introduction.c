#include<stdio.h>
int main()
{
    float numero;
    scanf("%f", &numero);
    if(numero < 0 || numero > 100.0)
    printf("Fora de Intervalo\n");
    else if(numero <= 25.0)
    printf("Intervalo [0,25]\n");
    else if(numero <= 50.0)
    printf("Intervalo (25.50]\n");
    else if(numero <= 75.0)
    printf("Intervalo (50,75]\n");
    else if(numero <= 100.0)
    printf("Intervalo (75,100]\n");
    return 0;
}
