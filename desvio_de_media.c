#include<stdio.h>
#define MAX 3

int main(void)
{
    int notas[MAX]; //primeira nota == nota[0] ... ultima nota == nota[3]
    int i, somatorio = 0;
    float media, desvio;
    float temp;

    for ( i = 0; i < MAX; i++)
    {
        printf("Nota %d: ", i);
        scanf("%d", &notas[i]);

        somatorio = somatorio + notas[i]; //acumulando a soma das notas
    }

    media = (float) somatorio / MAX;
    desvio = 0.0;

    for ( i = 0; i < MAX; i++)
    {
        temp = notas[i] - media;

        if( temp > 0)
        {
            desvio = desvio + temp;
        }
        else
        {
            desvio = desvio - temp;
        }
    }

    desvio = desvio / MAX;

    printf("Desvio: %f\n", desvio);
    
    return 0;
}
