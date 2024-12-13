#include <stdio.h>
#include  <math.h>
void kiemtra3canh(int a, int b, int c) {
    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Tam giac deu\n");
        } else if (a == b || b == c || c == a) {
            if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b) {
                printf("Tam giac vuong can\n");
            } else {
                printf("Tam giac can\n");
            }
        } else if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b) {
            printf("Tam giac vuong\n");
        } else {
            printf("Tam giac binh thuong\n");
        }
    } else {
        printf("Khong phai tam giac\n");
    }
}
main ()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    kiemtra3canh(a, b, c);
}
