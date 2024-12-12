#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

#define MAX 1000

//TapA
void NhapA(int n, int a[MAX]) {
    int i;
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
}

//TapB
void NhapB(int m, int b[MAX]) {
    int j;
    for (j = 1; j <= m; j++) {
        scanf("%d", &b[j]);
    }
}

//Giao
void giao(int n, int m, int a[MAX], int b[MAX]) {
    bool mark[1000001];
    int i;
    for(i=1;i<=n;i++) {
        mark[a[i]] = 1; 
    }
    int c[n+1]; 
    int cnt = 1; 
    for(i=1;i<=m;i++) {
        if(mark[b[i]]==1) { 
            c[cnt] = b[i];
            cnt++;
        }
    }
    if(cnt==1) printf("Hai tap hop khong co phan tu chung!");
    else {
        printf("Giao cua 2 tap hop la: ");
        for(int i=1;i<cnt;i++) printf("%d ",c[i]);
    }
}

//Hop
void hop(int n, int m, int a[MAX], int b[MAX]) {
    bool mark[1000001];
    int i;
    for(i=1;i<=n;i++) {
        mark[a[i]] = 1;
    }
    printf("Tap hop moi sau khi da hop 2 tap hop voi nhau la: ");
    for(i=1;i<=n;i++) printf("%d ",a[i]);
    for(i=1;i<=m;i++) {
        if(mark[b[i]]==0) {
            printf("%d ",b[i]);
        }
    }
}

//Hieu
void hieu(int n, int m, int a[MAX], int b[MAX]) {
    bool mark[1000001];
    int i;
    for(i=1;i<=m;i++) {
        mark[b[i]] = 1; 
    }
    printf("Tap hop sau khi lay tap hop 1 hieu di tap hop 2: ");
    for(i=1;i<=n;i++) {
        if(mark[a[i]]==0) { 
            printf("%d ",a[i]);
        }
    }
}

//Tapcon
void tapcon(int n, int m, int a[MAX], int b[MAX]) {
    bool mark[1000001];
    int i;
    for(i=1;i<=n;i++) {
        mark[a[i]] = 1; 
    }
    if(n>m) printf("Tap hop 1 khong la con cua tap hop 2!");
    else {
        int cnt = 0; 
        for(i=1;i<=m;i++) {
            if(mark[b[i]]) { 
                cnt++;
            }
        }
        if(cnt==n) printf("Tap hop 1 la con cua tap hop 2!");
        else printf("Tap hop 1 khong la con cua tap hop  2!");
    }
}

int main() {
    int m, n, select;
    int a[MAX], b[MAX];
    printf("1: Hop 2 tap hop\n");
    printf("2: Giao 2 tap hop\n");
    printf("3: Tap hop 1 hieu tap hop 2\n");
    printf("4: Kiem tra tap hop 1 co phai con cua tap hop 2 khong?\n");
    printf("Nhap phep tinh ban muon thuc hien: \n");
    scanf("%d",&select);
    printf("Nhap kich thuoc tap hop 1: \n");
    scanf("%d",&n);
    printf("Nhap cac phan tu cua tap hop 1 (cac phan tu khong duoc trung lap): \n");
    NhapA(n, a);
    printf("Nhap kich thuoc tap hop 2: \n");
    scanf("%d",&m);
    printf("Nhap cac phan tu cua tap hop 2 (cac phan tu khong duoc trung lap): \n");
    NhapB(m, b);
    if(select==1) hop(n, m ,a , b);
    else if(select==2) giao(n, m, a, b);
    else if(select==3) hieu(n, m, a, b);
    else if(select==4) tapcon(n, m, a, b);
    return 0;
}