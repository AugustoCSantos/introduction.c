#include<stdio.h>
int main()
{
    int n, i;
    int menor=10; //definir a menor nota sendo a maior
    scanf("%d", &n);
    int nota[n];
    for(i=0; i < n; i++)
    {
        scanf("%d", &nota[i]);
        if(nota[i] >= 0 && nota[i] <= 10)
        {
            if(nota[i] <= menor)
            menor = nota[i];
        }
    }
    printf("%d", menor);
    return 0;
}
