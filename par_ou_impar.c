#include<stdio.h>
int main(void)
{
    int i, valor;

    scanf("%d", &valor);

    if(valor % 2)
    {
        printf("Impar!\n");
    }
    else
    {
        printf("Par!\n");
    }

    return 0;
}
