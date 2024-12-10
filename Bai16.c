#include <math.h>
#include <stdio.h>
main()
{
	int i,n,a,d,s;
	printf("Nhap n, d, a: ");
	scanf("%d %d %d",&n,&d,&a);
	s=a;
	for(i=1;i<=n;i++) s+=d;
	printf("Cap so cong la:%d ",s);
	}
	
