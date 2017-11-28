#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char string [50];


struct alunos{
    float p1;
    float p2;
    float p3;
    float media;
    int matricula;
    char nome[100];
};
struct alunos aluno[50];

void media(struct alunos a1){
    a1.media = (a1.p1 + a1.p2 + a1.p3)/3.0;
}

int main( int argc, char *argv[] ){
    int i ; FILE *fp ; FILE *fpr;
    char ch[100];

    fp = fopen("lista_alunos.txt", "r");
    if (!fp)
    {
        printf("Erro ao ler o arquivo lista_alunos.txt \n");
        exit(1);
    }
    fpr = fopen("media_alunos.txt", "w");
    if (!fpr)
    {
        printf("Erro ao ler o arquivo media_alunos.txt \n");
        exit(1);
    }
    fgetc(fp);
    for(i = 0; i <50; i ++)
    {

        fscanf(fp,"%s %d %f %f %f", aluno[i].nome, aluno[i].matricula, aluno[i].p1, aluno[i].p2, aluno[i].p3);
        printf("%s %d %f %f %f", aluno[i].nome, aluno[i].matricula, aluno[i].p1, aluno[i].p2, aluno[i].p3);
        media(aluno[i]);
        fprintf(fpr, "%s %d %f %f %f %.2f\n",aluno[i].nome, aluno[i].matricula, aluno[i].p1, aluno[i].p2, aluno[i].p3, aluno[i].media );
        i++;

    }

    fclose(fp);
    fclose(fpr);
    return 0;
}
