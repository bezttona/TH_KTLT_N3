#include<stdio.h>
void TinhTong(int a[],int b[],int L)
{
	int result[1001];
	int i,carry=0,s;
	for(i=L-1;i>=0;i--)
	{
		s=a[i]+b[i]+carry;
		if(s>=10) {
			carry=1;
			s-=10;
		}
		else carry=0;
		result[i]=s;
	}
	if(carry) printf("1");
	for(i=0;i<L;i++) {
		printf("%d",result[i]);
	}
	printf("\n");
}
void TinhHieu(int a[],int b[],int L)
{
	int i,IsGreater=1;
	for(i=0;i<L;i++) 
	{
		if(a[i]==b[i]) continue;
		else{
			if(a[i]<b[i]) IsGreater=0;
			break;
		}
	}
	int result[1001],carry=0;
	if(!IsGreater)
	{
		int* temp=a;
		a=b;
		b=temp;
	}
	for(i=L-1;i>=0;i--)
	{
		int upper=a[i],lower=b[i]+carry;
		if(upper<lower)
		{
			upper+=10;
			carry=1;
		}
		else carry=0;
		result[i]=upper-lower;
	}
	if(!IsGreater) printf("-");
	for(i=0;i<L;i++) printf("%d",result[i]);
	printf("\n");
}
void main()
{
	int a[1001],b[1001],LengthA=0,LengthB=0,i;
	printf("Nhap so a:");
	while(1)
	{
		char c;
		scanf("%c",&c);
		if(c!='\n')
		{
		a[LengthA]=(c-'0');
		LengthA++;
		}
		else break;
	}
	printf("Nhap so b:");
	while(1)
	{
		char c;
		scanf("%c",&c);
		if(c!='\n')
		{
			b[LengthB]=(c-'0');
			LengthB++;
		}
		else break;
	}
	int L=LengthA;
	if(LengthA<LengthB)
	{
		L=LengthB;
		int d=LengthB-LengthA;
		for(i=0;i<LengthA;i++)
		{
			int CurIndex=LengthB-1-i;
			a[CurIndex]=a[CurIndex-d];
		}
		for(i=0;i<d;i++) a[i]=0;
	}
	else if(LengthB<LengthA)
	{
		int d=LengthA-LengthB;
		for(i=0;i<LengthB;i++)
		{
			int CurIndex=LengthA-1-i;
			b[CurIndex]=b[CurIndex-d];
		}
		for(i=0;i<d;i++) b[i]=0;
	}
	printf("a+b=");
	TinhTong(a,b,L);
	printf("a-b=");
	TinhHieu(a,b,L);
}
