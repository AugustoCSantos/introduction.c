#include <stdio.h>

int main()
{
    int quantidade, i;
    int notas[50];

    scanf("%d", &quantidade);

    for ( i = 0; i < quantidade; i++)
    {
        scanf("%d", &notas[i]);
    }

    int menor = 10;
    int posicao = 0;

    for ( i = 0; i < quantidade; i++)
    {
        if (notas[i] < menor)
        {
            menor = notas[i];
            posicao = i; 
        }
    }
    
    
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d", posicao);
   
    return 0;
}
