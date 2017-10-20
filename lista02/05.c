#include <stdio.h>

unsigned int fatorial(unsigned int n)
{
	if (n == 0) return 1;
	return n*fatorial(n-1);
}

unsigned int binomial(unsigned int n, unsigned int k)
{
	unsigned int b;
	b = fatorial(n)/( fatorial(k)*fatorial( n - k));
	return b;
}

int main()
{
	unsigned int n, k, b;
	scanf("%u %u", &n, &k);
	b = binomial(n, k);
	printf("%u \n", b);
	return 0;
}
