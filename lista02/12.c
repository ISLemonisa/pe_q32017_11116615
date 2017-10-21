#include <stdio.h>

int pascal(int n, int k)
{
	if( n == k ) return 1;
	if( k == 0 ) return 1;
	return pascal(n -1, k-1) + pascal(n-1, k); 
}

int main()
{
	int n, k, s;
	scanf("%d %d", &n, &k);
	s = pascal(n,k);
	printf("%d \n", s);
	return 0;
}
