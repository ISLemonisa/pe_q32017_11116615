#include <stdio.h>

float desconto( float n, int f)
{
	float r;
	r = n / 20.0 * f;
	return r;
}

float acrescimo(float n, float h)
{
	float r;
	if (h <=40){
		r = (n / 20.0)/8.0 *h + h*40;
	}
	else
		r = (n / 20.0)/ 8.0 * 40 + h*40;
	return r;
}

float calculo(float n, float h, int f)
{
	float a, d;
	a = acrescimo(n,h);
	d = desconto(n, f);
	float r;
	r = n - d + a;
	return r;
}

int main()
{
	int x, f; float h, n, r;
	printf(" 1 - Diretor \n 2 - Gerente \n 3 - Engenheiro \n 4 - Tecnico \n 5 - Operador ");
	scanf("%d", &x);
	printf("Faltas = ");
	scanf("%d", &f);
	printf("Hora extra =");
	scanf("%f", &h);
	switch(x)
	{
		case 1:
			n = 10000; 
			r = calculo(n, h, f);
			printf("%f \n", r);
			break;
		case 2:
			n = 8000;
			r = calculo(n, h, f);
			printf("%f \n", r);
			break;
		case 3:
			n = 5000;
			r = calculo(n, h, f);
			printf("%f \n", r);
			break;
		case 4:
			n = 3000;
			r = calculo(n, h, f);
			printf("%f \n", r);
			break;
		case 5:
			n = 2000;
			r = calculo(n, h, f);
			printf("%f \n", r);
			break;
		default:
			printf("opcao invalida");
			break;
	}
	return 0;
}







