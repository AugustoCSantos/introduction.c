#include <stdio.h>

int pascal(int linha, int coluna);

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", pascal(i, j));
        }
        printf("\n");
    }

    return 0;
}

int pascal(int linha, int coluna)
{
    if (coluna == 0 || coluna == linha) // casos base 
    { 
        return 1;
    } 
    else 
    {
        return pascal(linha-1, coluna-1) + pascal(linha-1, coluna); // caso recursivo
    }
}
