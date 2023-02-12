#include<stdio.h>
#include<math.h>

void fastfib(int n);

int main()
{
   int n;

   scanf("%d", &n);
   fastfib(n);
   
    return 0;
}

void fastfib(int n)
{
    float fib;

    fib = ((pow(((1.0 + sqrt(5)) / 2.0), n)) - (pow(((1.0 - sqrt (5)) / 2.0) , n))) / sqrt(5);

    printf("%.1f\n", fib);

    return;
}
