#include<stdio.h>

int main()
{
    int cont=0, i, n, j;
    char expressao[100];

    scanf("%d", &n); //pega os casos
    for (j = 0; j < n; j++)
    {
      scanf(" %[^\n]", expressao); 
    
        for (i = 0; expressao[i] != '\0'; i++) //varre a expressao
        {
            if(expressao[i] == '(')
            {
                cont++;
            }
            else if(expressao[i] == ')')
            {
                cont--;
            }
            if(cont < 0)
            {
                break;
            }
        }
        if(cont == 0)
            {
                printf("correct\n");
            }
            else
            {
                printf("incorrect\n");
            }
    }

    return 0;
}
