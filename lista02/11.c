#include <stdio.h>
#include <math.h>

int decbin( int n)
{
	if ( n == 0) return 0;
	return (n % 2 + 10 * decbin(n / 2));
	
}

int bindec( int n )
{
	if(!(n / 10)) return n;
	return (n % 10 + bindec(n / 10) * 2);
	
}

int main()
{
	int x, n, s;
	printf("Insira o numero a ser convertido\n");
	scanf("%d", &n);	
	printf("1 - Decimal Binario\n2 - Binario Decimal\n");
	scanf("%d", &x);
	switch(x){
		case 1:
			s = decbin(n);
			printf("%d\n", s);
			break;
		case 2:
			s = bindec(n);
			printf("%d\n", s);
			break;
		default:
			printf("opcao invalida\n");
			break;
	}
	return 0;
}
