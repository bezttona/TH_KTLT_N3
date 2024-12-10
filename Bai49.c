#include <math.h>
#include <stdio.h>
#define EPS 1E-6
main()
{
	int i;
	float x,a,s;
	printf("Nhap x:");
	scanf ("%f", &x);
	x = x * M_PI / 180;
	a = x;
    i = 3; 
    s = a;
	while (fabs(a)>EPS)
	{
		a *= (x*x)/((i)*(i-1));
        s += a;
        i += 2;
	}
	printf("s=%f",s);
	printf("Ham chuan: Sh(x) = %f", sinh(x));
	}
	
