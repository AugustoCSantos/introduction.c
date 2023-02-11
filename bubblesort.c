#include <stdio.h>

int main(){
    int i, j, n, vet[n], aux;
    
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - 1; j++)
        {
            if(vet[i] < vet[j])
            {
                aux = vet[j];
                vet[j] = vet[i];
                vet[i] = aux;
            }
        }
    }
    for(i= 0; i < n; i++)
    {
        printf("%d", vet[i]);
    }

    return 0;
}
