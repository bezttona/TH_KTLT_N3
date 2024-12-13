#include <stdio.h>
#include <conio.h>

void nhapMaTran(int A[100][100], int n)
{
	int i,j;
    printf("Nhap các phan tu cua ma tran %dx%d:\n", n, n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("A[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
}
void xuatMaTran(int A[100][100], int n)
{
	int i,j;
    printf("Ma tran A la:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Nhap cap cua ma tran n (n x n): ");
    scanf("%d", &n);
    int A[100][100];
    nhapMaTran(A, n);
    xuatMaTran(A, n);
    getch();
}
