#include <stdio.h>
void nhapMang(int arr[], int n) {
int i;
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    }
void xuatMang(int arr[], int n) {
int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");}
void noiMang(int A[], int nA, int B[], int *nB) {
    int i, j, temp;
    for (i = 0; i < nA; i++) {
        B[*nB] = A[i];
        (*nB)++;
    }
    for (i = 0; i < *nB-1; i++) {
        for (j = i + 1; j < *nB; j++) {
            if (B[i] > B[j]) {
                temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }
}
int main() {
    int nA, nB;
    printf("Nhap so phan tu cua mang A: ");
    scanf("%d", &nA);
    printf("Nhap so phan tu cua mang B: ");
    scanf("%d", &nB);
    int A[nA], B[nB];
    printf("Nhap gia tri mang A:"); nhapMang(A, nA);
	printf("Nhap gia tri mang B:"); nhapMang(B, nB);
    printf("\nMang A truoc khi noi: ");
    xuatMang(A, nA);
    printf("Mang B truoc khi noi: ");
    xuatMang(B, nB);
    noiMang(A, nA, B, &nB);
    printf("\nMang B sau khi noi va sap xep: ");
    xuatMang(B, nB);
}
