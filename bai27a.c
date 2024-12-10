#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX 10000

char a[MAX] = {'0'};

void gt(int n) {
  memset(a, '0', MAX);
  a[0] = '1';
  /*Tinh giai thua*/
  int i, j;
  int length = 1, temp = 0;
  for (i = n; i >= 2; i-=2) {
    for (j = 0; j < length || temp != 0; j++) {
      temp += (a[j] - '0') * i;
      a[j] = (temp % 10) + '0';
      temp /= 10;
    }
    length = j;
  }
  for (i = length - 1; i >= 0; i--) {
    printf("%c", a[i]);
  }
  printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    if (n < 0) {
      printf("Moi nhap lai");
    }
    else {
    gt(n);
    }
    return 0;
}