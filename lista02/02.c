#include <stdio.h>

float volume(float largura, float comprimento, float altura)
{
	float v;
	v = largura* comprimento * altura;
	return v;
}

int main(){
	float largura, comprimento, altura, v;
	printf("Insira os valores de largura, comprimento e altura respectivamente: ");
	scanf("%f %f %f", &largura, &comprimento, &altura);
	v = volume(largura, comprimento, altura);
	printf("O volume resultante é: %.2f \n", v);
	return 0;
}
