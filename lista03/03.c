#include <stdio.h>

void svetores(int vetor1[], int vetor2[], int x)
{
    int i =0;
    int soma;
    while(i< x)
    {
        soma = vetor1[i] + vetor2[i];
        printf("%d,", soma);
        i++;
    }
}

int main()
{
    int i, j;
    int vetor1[5]; int vetor2[5];
    for(i = 0; i < 5; i++ ){
        scanf("%d", &vetor1[i]);
    }
    for(j = 0; j < 5; j++ ){
        scanf("%d", &vetor2[j]);
    }
    svetores(vetor1, vetor2, 5);
    return 0;
}
