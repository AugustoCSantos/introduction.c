#include<stdio.h>
int fatorial(int n);
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fatorial(n));

    return 0;
}

int fatorial(int n)
{
    int fatorial;
    fatorial = 1;
    if(n == 1)
        return 1;
    else
    {
        while(n >= 1)
        {
            fatorial = fatorial * n;
            n--;
        }
        return fatorial;
    }
}