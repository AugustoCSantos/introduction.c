#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct _ALUNO
{
    char nome[40];
    int matricula;
    float nota;
}ALUNO;

void escreve_ALUNO(ALUNO aluno, char *nome_arquivo);
void imprime_ALUNO(ALUNO aluno);
ALUNO *le_ALUNO(int indice, char *nome_arquivo);
void imprime_turma(char *nome_arquivo);
void troca_ALUNO(int indice1, int indice2, char *nome_arquivo);

int main()
{
    ALUNO alunootaku = {"Gilberto", 2022123456, 10.0};

    escreve_ALUNO(alunootaku, "alunootaku");

    troca_ALUNO(1, 2, "alunootaku");
    imprime_turma("alunootaku");
    free(le_ALUNO(1, "alunootaku"));

    return 0;
}

void escreve_ALUNO(ALUNO aluno, char *nome_arquivo)
{
    FILE *FP;
    FP = fopen(nome_arquivo, "ab");
    fwrite(&aluno, sizeof(ALUNO),1,FP);
    fclose(FP);
}

void imprime_ALUNO(ALUNO aluno)
{
    printf("%s %d %f\n", aluno.nome, aluno.matricula, aluno.nota);
}

ALUNO *le_ALUNO(int indice, char *nome_arquivo)
{
    ALUNO *novo;
    novo = (ALUNO*) malloc(sizeof(ALUNO));

    FILE  *FP;
    FP = fopen(nome_arquivo, "rb");

    fseek(FP,(indice-1)* sizeof(ALUNO), SEEK_SET);
    fread(novo, sizeof(ALUNO), 1, FP);
    fclose(FP);
    return novo;
}
void troca_ALUNO(int indice1, int indice2, char *nome_arquivo)
{
    ALUNO temp1, temp2;
    FILE *FP;
    FP = fopen(nome_arquivo, "r+b");

    fseek(FP,(indice1-1)* sizeof(ALUNO), SEEK_SET);
    fread(&temp1, sizeof(ALUNO), 1, FP);
    fseek(FP,(indice2-1)* sizeof(ALUNO), SEEK_SET);
    fread(&temp2, sizeof(ALUNO), 1, FP);

    fseek(FP,(indice1-1)* sizeof(ALUNO), SEEK_SET);
    fwrite(&temp2, sizeof(ALUNO), 1, FP);
    fseek(FP,(indice2-1)* sizeof(ALUNO),  SEEK_SET);
    fwrite(&temp1, sizeof(ALUNO), 1, FP);

    fclose(FP);
}

void imprime_turma(char *nome_arquivo)
{
    FILE *FP;
    FP = fopen(nome_arquivo, "r");
    ALUNO temp;
    fread(&temp, sizeof(ALUNO), 1, FP);

    while(!feof(FP))
    {
        imprime_ALUNO(temp);
        fread(&temp, sizeof(ALUNO), 1, FP);
    }
    fclose(FP);
}
