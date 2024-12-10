#include <stdio.h>
#include  <math.h>
main ()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if (a>0 && b>0 && c>0)
    {
        if (a+b>c && a+c>b && b+c>a)
     {
    if (a==b && b==c && c==a) printf("Tam giac deu");
    else{
    if (a==b || b == c || c == a) 
	{ if (a*a+ b*b==c*c || b*b+c*c==a*a|| a*a+c*c==b*b) printf ("Tam giac vuong can");
	else printf("Tam giac can"); }
	else if(a*a+ b*b==c*c || b*b+c*c==a*a|| a*a+c*c==b*b) printf ("Tam giac vuong");
	else printf("Tam giac binh thuong");
	}}
        else printf("Khong phai tam giac");
    }
    else printf("Khong phai tam giac");
}
