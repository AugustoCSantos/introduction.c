#include<stdio.h>
int main()
{
    int x, soma=0, i;
    scanf("%d", &x);
    for(i = 0; i < x; i++)
    {
        if(i%3==0 || i%5==0)
        soma=soma + i;
    }
    printf("%d", soma);
    return 0;
}
