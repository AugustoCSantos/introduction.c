#include<stdio.h>
int main()
{
    char nome[201];
    int i;
    scanf("%s", nome);
    for(i = 0; nome[i]!='\0'; i++)
    {
        if(nome[i] >= 'A' && nome[i] <= 'Z')
        {
            nome[i] = nome[i] - 'A' + 'a';
            printf("%c", nome[i]);
        }
        else
        printf("%c", nome[i]);
    }
    return 0;
}
