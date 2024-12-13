#include <stdio.h>
int timstg(int a, int b, int c) {
    return (a > b) ?
           ((b > c) ? b : ((a > c) ? c : a))
           :
           ((a > c) ? a : ((b > c) ? c : b));
}
main()
{
    int a, b, c, stg;
    printf("Nhap so a:");
    scanf("%d", &a);
    printf("Nhap so b:");
    scanf("%d", &b);
    printf("Nhap so c:");
    scanf("%d", &c);
    stg = timstg(a,b,c);
    printf("So trung gian la: %d", stg);
}