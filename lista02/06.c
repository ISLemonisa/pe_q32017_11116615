#include <stdio.h>
#include <math.h>

double discriminante(double a, double b, double c)
{
	double x;
	x = pow(b,2) - a*c*4;
	return x;
}
double raiz1(double a, double b, double c)
{
	double x;
	x = discriminante(a,b,c);
	double r, y;
	if (x>=0){
		r = (sqrt(x) - b)/(2*a);
		return r;
	}
	else{
		r = -b/(2*a);
		return r;
	}
	
}
double raiz2(double a, double b, double c)
{
	double x;
	x = discriminante(a,b,c);
	double r, y;
	if (x>=0){
		r = (-sqrt(x) - b)/(2*a);
		return r;
	}
	else{
		r = -b/(2*a);
		return r;
	}
}

double imaginario(double a, double b, double c)
{
	double x;
	x = discriminante(a,b,c);
	double i;
	i = sqrt(-x)/(2*a);
	return i;
}

int main()
{
	double a, b, c, r1, d, r2, i;
	scanf("%lf %lf %lf", &a, &b, &c);
	d = discriminante(a, b, c);
	if (d == 0){
		r1 = raiz1(a, b, c);
		printf("%.2lf \n", r1);
	}
	else if (d < 0){
		i = imaginario(a, b, c);
		r1 = raiz1(a, b, c);
		r2 = raiz2(a, b, c);
		printf("r1 = %.2lf %.2lfi, r2 = %.2lf %.2lfi", r1, i, r2, i);
	}
	else{
		r1 = raiz1(a, b, c);
		r2 = raiz2(a, b, c);
		printf("r1 = %.2lf r2 = %.2lf  \n", r1, r2);
	}
	return 0;
}

