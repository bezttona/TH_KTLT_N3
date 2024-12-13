#include<stdio.h>
#include<conio.h>

int shh(int n){
	int i,sum=0;
	for(i=1;i<n;i++)
	if (n%i==0) sum+=i;
	if (sum!=n) return 0;
}

int main(){
	int n;
	scanf("%d",&n);
	if (shh(n)) printf("%d la so hoan hao",n);else printf("%d khong la so hoan hao",n);
}
