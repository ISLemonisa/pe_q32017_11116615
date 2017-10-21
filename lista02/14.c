#include <stdio.h>
#include <math.h>

int reverso(int n)
{
	int digit = (int)log10(n);
	if (n == 0) return 0;
	return ((n%10 * pow(10, digit)) + reverso(n/10));
}

int palin(int n)
{
	if( n == reverso(n)) return 1;
	else return 0;
}



int main()
{
	int n, s;
	scanf("%d", &n);
	s = palin(n);
	if ( s == 1 ) printf("sim\n");
	else printf("nao\n");
	return 0;
}
