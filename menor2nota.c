#include<stdio.h>
int main()
{
    int n, i;
    int menor=10, menor2;
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
        menor2 = menor+1;
    }
    printf("%d", menor2);
    return 0;
}
