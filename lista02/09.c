#include <stdio.h>

double potencia(int x, int y)
{
	int z;
	if (y ==0) return 1;
	z = x * potencia(x, y-1);
	return z;
}

int main()
{
	int a,x, y;
	printf("valores de x e y:");
	scanf("%d %d", &x, &y);
	a = potencia(x, y);
	printf("\n %d \n", a);
	return 0;
}
