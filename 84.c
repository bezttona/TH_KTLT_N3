#include<stdio.h>
#include<stdbool.h>
void Tinh_dinh_thuc(int i,float f[100][100],int n,float* Det,int *x,bool *used)
{
	int j;
	for(j=0;j<n;j++)
	{
		if(!used[j])
		{
			x[i]=j;
			used[j]=1;
			if(i==n-1)
			{
				int k,p,q,N=0;
				float tich=1;
				for(k=0;k<n;k++)
				{
					for(q=k+1;q<n;q++)
					if (x[k]>x[q]) N++;
					tich*=f[k][x[k]];
				}
				if(N%2!=0) *Det-=tich;
				else *Det+=tich;
			}
			else Tinh_dinh_thuc(i+1,f,n,Det,x,used);
			used[j]=0;
		}
	}
}
void Xuat(float f[100][100],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%0.4f ",f[i][j]);
		}
		printf("\n");
	}
}
main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	float f[100][100];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%f",&f[i][j]);
		}
	}
	float* Det=(float*)calloc(1,sizeof(float));
	Xuat(f,n);
	int a[n],x[n];
	bool used[n];
	for(i=0;i<n;i++) a[i]=i;
	Tinh_dinh_thuc(0,f,n,Det,x,used);
	printf("Dinh thuc cua ma tran = %0.4f",*Det);
}
