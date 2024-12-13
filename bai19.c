#include<stdio.h>
#include<conio.h>
float ham1(float h)
{if(h>=3&&h<=5)
 return(1); else return(0);}
main() 
{
float x,y,z;
printf("nhap x:");
scanf("%f",&x);
printf("nhap y:");
scanf("%f",&y);
printf("nhap z:");
scanf("%f",&z);
if(ham1(x)==0&&ham1(y)==0&&ham1(z)==0) printf("khong co so nao nam trong (3,5)"); else
{
printf("so nam trong (3,5) la:");
if(ham1(x)!=0) printf("%f\n",x);
if(ham1(y)!=0) printf("%f\n",y);
if(ham1(z)!=0) printf("%f\n",z);};
getch();
}
