#include <stdio.h>

int main(){
	int x, y; int z;
	printf("Insira o primeiro valor:\n");
	scanf("%d", &x);
	printf("Insira o segundo valor:\n");
	scanf("%d", &y);
	z = x / y;
	printf("O resultado da divisão é %d \n", z);
	return 0;
}
