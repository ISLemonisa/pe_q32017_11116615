#include <stdio.h>

void verificar(char vetor[], int t)
{
    int i, j;
    int s= 1;
    for(i = 0; i < t; i++){
        if(vetor[i] != '\0'){
                for(j = 0; j < t ; j++){
                    if((i != j) &&(vetor[i] == vetor[j])){
                        s+= 1;
                        vetor[j]='\0';
                    }
            }
        }
        if(s != 1){
            printf("%c - %d\n", vetor[i], s);
        }
        s = 1;
        vetor[i]='\0';
    }
}

int main()
{
    int tamanho;
    char vetor[255];
    scanf("%d\n", &tamanho);
    fgets(vetor, 255, stdin);
    verificar(vetor, tamanho);
    return 0;
}
