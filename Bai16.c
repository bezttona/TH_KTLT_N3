#include <math.h>
#include <stdio.h>
void csc(int n, int d, int a){
int i;
for(i=1;i<=n;i++) a+=d;
        printf("Cap so cong la:%d ",a);
        }
main()
{
        int n,a,d;
        printf("Nhap n, d, a: ");
        scanf("%d %d %d",&n,&d,&a);
        csc(n, d, a);
}
        
