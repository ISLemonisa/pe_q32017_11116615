#include <stdio.h>

int cmpfunc(const void * a, const void * b)
{
    return (*(int*)a - *(int*)b);
}

double mediana(int vetor[], int n)
{
    double x; int m;
    qsort(vetor, n, sizeof(int), cmpfunc);
    if(n%2 == 0){
        m = n/2;
        x = (vetor[(m+1)] + vetor[m])/2.0;
        return x;
    }
    else{
        x = vetor[(n-1)/2];
        return x;
    }
}

int main()
{
    int n, i;
    scanf("%d\n", &n);
    int vetor[n];
    for(i= 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    printf("%.2lf", mediana(vetor, n));
    return 0;
}
