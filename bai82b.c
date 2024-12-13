#include <stdio.h>
#include <conio.h>

void matran(int n,int m) {
    int A[n][m];
    int v,i,j;
    int t= 0, b= n-1 , l= 0, r= m-1 ;
    v=n*m;

    while (t<= b&& l<= r) {
        for (i = l; i <= r; i++) {
            A[t][i] = v--;
        }
        t+=1;

        
        for (i = t ; i <= b; i++) {
            A[i][r] = v--;
        }
        r-=1;

        
         {
            for (i = r; i >= l; i--) {
                A[b][i] = v--;
            }
            b-=1;
        }

        
         {
            for (i = b; i >= t; i--) {
                A[i][l] = v--;
            }
            l+=1;
        }
    }

  
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n,m;
    printf("Nhap kich thuoc ma tran nxm: ");
    scanf("%d", &n);
	scanf("%d", &m);

    printf("Ma tran xoan tu trong ra ngoai:\n");
    matran(n,m);
    getch();
}
