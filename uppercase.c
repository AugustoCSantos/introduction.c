#include<stdio.h>
int main()
{
    char word[101];
    int i;
    scanf("%s", word);
    for(i=0; word[i] != '\0'; i++)
    {
        if(i==0)
        {
            if(word[i] >= 'a' && word[i] <= 'z')
            {
                word[i] = word[i] - 'a' + 'A';
                printf("%c", word[i]);
            }
            else
                printf("%c", word[i]);
        }
        else if(word[i] >= 'A' && word[i] <= 'Z')
        {
            word[i] = word[i] - 'A' + 'a';
            printf("%c", word[i]);
        }
        else
            printf("%c", word[i]);    
    }
    return 0;
}
