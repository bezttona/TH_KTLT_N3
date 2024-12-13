#include<stdio.h>
#include<conio.h>
#include<math.h>
void luythua2(int n){

      int A[1000],i,j,m=1;
      long long r=0,q;
      A[0]=1;
      for(i=1;i<=n;i++){
      for(j=0;j<m;j++){
           q=r;
           r=(A[j]*2+r)/10;
          A[j]=(A[j]*2+q)%10;
   }
     while(r>0){
          A[m]=r%10;
          m++;
          r=r/10;
   }
 }
        for(i=m-1;i>=0;i--)  printf("%d",A[i]);
}

 void giaithua(int n){

      int A[10000],i,j,m=1;
      long long r=0,q;
      A[0]=1;
      for(i=2;i<=n;i++){
      for(j=0;j<m;j++){
           q=r;
           r=(A[j]*i+r)/10;
          A[j]=(A[j]*i+q)%10;
   }
     while(r>0){
          A[m]=r%10;
          m++;
          r=r/10;
   }
 }
        for(i=m-1;i>=0;i--)  printf("%d",A[i]);
}
 double  tich(unsigned int n){
  double  t=1;
  	int i;
	for(i=1;i<=n;i++){
	t=t*(1+1/(pow(i,2)));
	}
	return t;		
}
double can(unsigned int n){
	double a=0;
	int i;
	for(i=1;i<=n;i++) a=sqrt(2+a);
	return a;
}
int main(){
	unsigned int n;
	scanf("%d",&n);
	printf(" Ket qua tich va can: %.5lf %.5lf \n",tich(n),can(n));  
	 printf("Ket qua giai thua: ");giaithua(n);
    printf("\n Ket qua luy thua 2: ");luythua2(n);
     getch();
}
