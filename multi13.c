#include<stdio.h>
int main ()
{
    int x, y, soma=0, i;
    scanf("%d %d", &x, &y);
    for(i = x; i <= y; i++)
    {
        if(i%13 != 0)
        soma = soma + i;
    }
    for(i = y; i <= x; i++)
    {
        if(i%13 != 0)
        soma = soma + i;
    }
    printf("%d", soma);
    return 0;
}
