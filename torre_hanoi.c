#include <stdio.h>

void mover_disco(int n, char origem, char destino, char aux);

int main()
{
    int discos;

    scanf("%d", &discos);

    mover_disco(discos, '1', '2', '3');
   
    return 0;
}

void mover_disco(int n, char origem, char destino, char aux)
{
    if(n == 1)
    {
        printf("%c %c\n", origem, aux);
    }
    else
    {
        mover_disco(n - 1, origem, aux, destino);

        printf("%c %c\n", origem, aux);

        mover_disco(n - 1, destino, origem, aux);
    }
    
}
