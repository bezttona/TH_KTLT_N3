#include <stdio.h>
main()
{
	int a, b, c;
	printf("Nhap so a:");
	scanf("%d", &a);
	printf("Nhap so b:");
	scanf("%d", &b);
	printf("Nhap so c:");
	scanf("%d", &c);
	if (a != b && b != c && a != c){
	if ((a>b && a<c) || (a<b && a>c))
	printf("a la trung gian");
	else
	{ if ((c>b&&c<a) ||(c>a && c<b))
	printf ("c la trung gian");
	else if ((b>a&&b<c) ||(b>c && b<c)) printf("b la trung gian");
	}
	} else printf("Khong co so trung gian hoac a, b, c khong hop le");
	}
