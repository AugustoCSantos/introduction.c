#include<stdio.h>
int main()
{
    char word[201];
    int i;
    gets(word);
    for(i=0; word[i] != '\0'; i++)
    {
        if(i == 0)
        {
            if(word[i] >= 'a' && word[i] <= 'z')
            printf("%c", word[i] - 'a' + 'A');
            
            else
            printf("%c", word[i]);
        }
        else
        {
            if(word[i] >= 'A' && word[i] <= 'Z')
            printf("%c", word[i] - 'A' + 'a');
            else
            printf("%c", word[i]);
        }
        if(word[i] == '\0')
        {
            if(word[i + 1] >= 'a' && word[i + 1] <= 'z')
            {
                printf("%c", word[i] - 'a' + 'A');
                i++;
            }
            else
            printf("%c", word[i]);
        }
    }
    return 0;
}
