#include <stdio.h>
#include <math.h>

float gaussl(int n)
{
	int i;
	float a, a1, b, t, p, pi;
	a = 1.0, b = 1/sqrt(2);
	t = 0.25; p = 1.0;
	for(i=1; i <=n; i++){
		a1 = (a + b)/2;
		b = sqrt(a*b);
		t = t - p*pow((a - a1), 2);
		p = 2*p;
		a = a1;	
	}
	pi = pow((a+b), 2)/(4*t);
	return pi;
}

int main ()
{
	int n; float pi;
	n = 10.0;
	pi = gaussl(n);
	printf("%.20f \n", pi);
	return 0;
}
