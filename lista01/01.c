#include <stdio.h>

int main(){
	int valor, resto;
	printf("Insira um numero\n");
	scanf("%d", &valor);
	resto = valor%2;
	if (resto == 0) {
		printf("O numero e par\n");
	}
	else{
		printf("O numero e impar\n");
	}
	return 0;

}
