#include <stdio.h>
#include <string.h>

void inverter(char vetor1[], char vetor2[], char vetor3[])
{
    fgets(vetor1, 255, stdin);
    fgets(vetor2, 255, stdin);
    fgets(vetor3, 255, stdin);
    int i = 0;
    while(i< 3){
        printf("%c %c %c\n", vetor1[i], vetor2[i], vetor3[i]);
        i++;
    }
}

int main()
{
    char linha1[255]; char linha2[255]; char linha3[255];
    inverter(linha1, linha2, linha3);
    return 0;
}
