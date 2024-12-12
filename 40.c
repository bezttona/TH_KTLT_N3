#include<stdio.h>
void hoan_vi(int i,int* a,int* x,int* used,int* dem)
{
	int j;
	for(j=0;j<4;j++)
	{
		if(!used[j])
		{
			x[i]=a[j];
			if(!(x[i]==0 && i==0))
			{
				used[j]=1;
				if(i==3)
				{
					(*dem)++;
					int k;
					for(k=0;k<4;k++)
					printf("%i",x[k]);
					printf("\n");
				}
				else hoan_vi(i+1,a,x,used,dem);
				used[j]=0;
			}
		}
	}
}
void main()
{
	int a[4]={0,2,3,5};
	int* dem = (int*)calloc(1,sizeof(int));
	int x[4]={0,0,0,0};
	int used[4]={0,0,0,0};
	hoan_vi(0,a,x,used,dem);
	printf("%d",*(dem));
}
