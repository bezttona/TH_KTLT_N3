#include <stdio.h>
#include <conio.h>
int ham(int n)
{
    int i, s;
    s = 1;
    if (n % 2 == 0)
    {
        for (i = 2; i <= n; i += 2)
            s *= i;
    }
    else
    {
        for (i = 1; i <= n; i += 2)
            s *= i;
    };
    return s;
}
main()
{
    int n;
    printf("nhap n=");
    scanf("%i", &n);
    printf("n!!=%i", ham(n));
    getch();
}