#include <stdio.h>
#include <math.h>

float kelvincelsius(float a)
{
	float b;
	b = a - 273;
	return b;
}

float celsiuskelvin(float a)
{
	float b;
	b = a + 273.0;
	return b;
}

float celsiusfar(float a)
{
	float b;
	b = a *9.0/5.0 + 32;
	return b;
}

float farcelsius(float a)
{
	float b;
	b = (a - 32.0)*5.0/9.0;
	return b;
}

float farkelvin( float a)
{
	float b;
	a = farcelsius(a);
	b = celsiuskelvin(a);
	return b;
}

float kelvinfar( float a)
{
	float b;
	a = kelvincelsius(a);
	b = celsiusfar(a);
	return b;
}

int decimalbinaro( float n)
{
	int resto, i= 1, b=0;
	while(n!=0){
		resto = fmodf(n,2);
		n/=2;
		b += resto*i;
		i*=10;
	}
	return b;
}

float binariodecimal( float n)
{
	float decimal = 0;
	int i = 0, resto;
	while(n!=0){
		resto = fmodf(n,2);
		n /= 10;
		decimal += resto*pow(2,i);
		i++;
	}
	return decimal;
}

int main()
{
	int x, y, z; float s, a;
	printf("Selecione: \n (1)Temperatura \n (2)Base Numerica \n");
	scanf("%d \n", &x);
	switch(x){
		case 1:
			printf("Tipo de entrada: \n (1)Celsius \n (2)Farenheit \n (3)Kelvin \n");
			scanf("%d \n", &y);
			switch(y){
				case 1:
					printf("Tipo de saída");
					scanf("%d", &z);
					printf("\nValor entrada = ");
					scanf("%f" , &a);
					if (z = 2){
						s = celsiusfar(a);
						printf("\n %.2f F", s);
					}
					else if (z = 3){
						s = celsiuskelvin(a);
						printf("\n %.2f K", s);
					}
					else
						printf("Opcao invalida \n");
				
					break;
				case 2:
					printf("Tipo de saída");
					scanf("%d", &z);
					printf("\nValor entrada = ");
					scanf("%f" , &a);
					if (z = 1){
						s = farcelsius(a);
						printf("\n %f C", s);
					}
					else if (z = 3){
						s = farkelvin(a);
						printf("\n %.2f K", s);
					}
					else
						printf("Opcao invalida \n");
				
					break;
				case 3:
					printf("Tipo de saída");
					scanf("%d", &z);
					printf("\nValor entrada = ");
					scanf("%f" , &a);
					if (z == 1){
						s = kelvincelsius(a);
						printf("\n %.2f C", s);
					}
					else if (z == 3){
						s = kelvinfar(a);
						printf("\n %.2f F", s);
					}
					else
						printf("Opcao invalida \n");
				
					break;
				default:
					printf("Opcao invalida \n");
					break;
			
			}
			break;
		case 2:
			printf("Tipo de entrada: \n(1)Decimal \n(2)Binario \n");
			scanf("%d", &y);
			scanf("%d", &z);
			printf("Valor de entrada =");
			scanf("%f", &a);
			if( y == 1){
				s = decimalbinaro(a);
				printf("\n %.0lf", s);
			}
			if( y == 2){
				s = binariodecimal(a);
				printf("\n %.2f", s);
			}
			break;
		default:
			printf("opcao invalida");
			break;

	}
	return 0;



}








