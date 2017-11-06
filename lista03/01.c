#include <stdio.h>

int tamanho(char entrada[])
{
    int u = 0; int i;
    for(i = 0 ; entrada[i] != '\0'; i++)
    {
        u++;
    }
    return u;
}

int contador(char entrada[], int x)
{
    int i = 0;
    int soma = 0;
    int t = tamanho(entrada);
    while(i < t){
        if((entrada[i] == 'a') || (entrada[i] == 'e') || (entrada[i] == 'i') || (entrada[i] == 'o') || (entrada[i] == 'u')){
            soma += 1;
        }
        i++;
    }
    return soma;
}

int main()
{
    char entrada[255];
    fgets(entrada, 255, stdin);
    printf("%d", contador(entrada, 255));
    return 0;
}
