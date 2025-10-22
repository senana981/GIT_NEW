#include <stdio.h>

void in_bang_cuu_chuong(void){
    int n;
    printf("nhap so chuong: ");
    if (scanf("%d", &n) != 1) {
        printf("du lieu khong hop le\n");
        return;
    }

    for (int i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}
