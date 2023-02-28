#include <stdio.h>

int fibo(int n);

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d", fibo(n)); //esse fibo(n) vai chamar a função

    return 0;
}

int fibo(int n) //vai fazer os cálculos de fibonacci 
{
    if(n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }

}
