#include <stdio.h>

int soma(int n, int vetor[]);

int main()
{
    int n, testes, i;
    int somatorio;

    scanf("%d", &testes);
    while( testes > 0)
    {
        scanf("%d", &n);
        int vetor[n];
        for ( i = 0; i < n; i++)
        {
            scanf("%d", &vetor[i]);
        }

        somatorio = soma(n, vetor);

        printf("%d\n", somatorio);
        testes--;
    }

    return 0;
}

int soma(int n, int vetor[])
{
    if(n == 0)
        return 0;
    else
    {
        return vetor[n - 1] + soma(n - 1, vetor);
    }
}
