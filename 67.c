#include<stdio.h>
void xuat(float a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%0.4f ",a[i]);
}
void QuickSort(float *a,int l,int r)
{
	float pivot=a[(l+r)/2];
	int i=l,j=r;
	while(i<j)
	{
		while(a[i]<pivot) i++;
		while(a[j]>pivot) j--;
		if(i<=j)
		{
			float temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			i++;
			j--;
		}
	}
	if(i<r) QuickSort(a,i,r);
	if(j>l) QuickSort(a,l,j);
}
main()
{
	int n;
	scanf("%d",&n);
	float a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	printf("Mang a: ");
	xuat(a,n);
	QuickSort(a,0,n-1);
	printf("\nMang a sau khi sap xep:");
	xuat(a,n);
}
