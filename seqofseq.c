#include <stdio.h>

int seq(int n);
int somatorio(int n);

int main()
{
    int n, i;
    scanf("%d", &n);
    int vet[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(vet[i] == 0)
        {
            printf("Caso %d: 1 numero\n", i + 1);
        }        
        else
        {
            printf("Caso %d: %d numeros\n", i + 1, somatorio(vet[i]) + 1);
        }
        seq(vet[i]);
        printf("\n");
    }
    return 0;
}


int seq(int n)
{
    int y, z;
    for(y = 0; y <= n; y++)
    {
        if(y == 0)
        {
            printf("%d ", y);
            continue;
        }
        else if(y == 1)
        {
            printf("%d ", y);
            continue;
        }
        else
        {
            for(z=0; z < y; z++)
            {
                printf("%d ", y);
            }
        }
    }
}
int somatorio(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n + somatorio(n - 1);
    }
}
