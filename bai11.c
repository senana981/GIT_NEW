#include <stdio.h>

void in_thap_sao(void){
    int n;
    printf("nhap chieu cao n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("du lieu khong hop le\n");
        return;
    }

    for (int i = 1; i <= n; ++i) {
        int so_khoang_trang = n - i;
        int so_ky_tu = 2 * i - 1;

        for (int s = 0; s < so_khoang_trang; ++s) {
            printf(" ");
        }
        for (int k = 0; k < so_ky_tu; ++k) {
            printf("*");
        }
        printf("\n");
    }
}
