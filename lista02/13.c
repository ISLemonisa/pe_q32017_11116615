#include <stdio.h>

unsigned int mdc(unsigned int x, unsigned int y)
{
	if(y == 0) return x;
	return mdc(y, x%y);
}


int main()
{
	int n, k, s;
	scanf("%u %u", &n, &k);
	s = mdc(n,k);
	printf("%u \n", s);
	return 0;
}
