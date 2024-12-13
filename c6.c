#include<stdio.h>
#include<conio.h>
#include<math.h>
  double  tich(float a,unsigned int n){
  double  s=1;
  int i;
	for(i=0;i<=n-1;i++){
	s=s*(a+i);
	}
	return s;		
}
 double  tong(float a,unsigned int n){
  double  s=1/a,b=1/a;
  int i;
	for(i=1;i<=n;i++){
	b=b*1/(a+i);s+=b;
	}
	return s;		
}
void main(){
	unsigned int n;float a;
	scanf("%f %d",&a,&n);
	printf("a. Ket qua: %.5lf \nb. Ket qua: %.5lf",tich(a,n),tong(a,n));
}
