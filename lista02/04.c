#include <stdio.h>
#include <math.h>

int main()
{
	double x, y, z; int n;
	printf("Selecione a operacao desejada: \n 1 - Adicao \n 2 - Subtracao \n 3 - Multiplicacao \n 4 - Divisao \n 5 - Potenciacao \n");
	scanf("%d", &n);
	printf("Insira o valor de x e y, respectivamente");
	scanf("%lf %lf", &x, &y);
	switch(n){
		case 1:
			z = x + y;
			printf("%.2lf", z);
			break;	
		case 2:
			z = x - y;
			printf("%.2lf", z);
			break;
		case 3:
			z = x * y;
			printf("%.2lf", z);
			break;
		case 4:
			z = x / y;
			printf("%.2lf", z);
			break;
		case 5:
			z = pow(x, y);
			printf("%.2lf", z);
			break;
		default:
			printf("opcao invalida");
	
	}
}
