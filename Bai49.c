#include <math.h>
#include <stdio.h>
#define EPS 1E-6
void tinhsinh(float x) {
    int i;
    float a, s;
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
	printf("Tong=%f",s);}
void hamsinhchuan(float x) {
    printf("Ham chuan: sinh(x) = %f\n", sinh(x));
}
int main()
{
	float x;
	printf("Nhap x:");
	scanf ("%f", &x);
	tinhsinh(x);
	hamsinhchuan(x);
	}
