#include<stdio.h>
#include<conio.h>
#include<math.h>
double tong(float x,int n){
	double sum=1+x;float a=x;
	for(int i=2;i<=n;i++){
	a=a*x*(i-1)/i;sum+=a;
	}
	return sum;		
}

int main(){
	int n;float x;
	scanf("%f %d",&x,&n);
	printf("Tong S(n)= %.5f",tong(x,n));
	getch();
}