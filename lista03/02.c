#include <stdio.h>

int tamanho(char entrada[])
{
    int u = 0; int i;
    for(i = 0 ; entrada[i] != NULL; i++)
    {
        u++;
    }
    return u;
}

void inverter(char entrada[])
{
    int t = tamanho(entrada); char x;
    char auxiliar[(t-1)]; int i =0;
    int a = t - 1;
    while(i < t){
            if(a >= 0){
                x = entrada[a];
                auxiliar[i] = x;
            }
        a--;
        i++;
        auxiliar[i]=0;
    }
    printf("%s\n", auxiliar);
}


int main()
{
    char entrada[255];
    fgets(entrada, 255, stdin);
    inverter(entrada);
    return 0;
}
