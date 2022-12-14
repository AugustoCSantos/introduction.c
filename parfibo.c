#include<stdio.h>
int main()
{
    int X, soma=0;
    int fibo, fibo1=1, fibo2=2;
    scanf("%d", &X);
    if(X>1)
    {
        fibo = fibo2;
        while(fibo<=X)
        {
            if(fibo%2==0)
            {
                soma = soma + fibo2;
            }
            fibo = fibo1 + fibo2;
            fibo1 = fibo2;
            fibo2 = fibo;
        }
    }
    printf("%d", soma);

    return 0;
}
