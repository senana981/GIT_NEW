#include <stdio.h>

void tinh_giai_thua(){
    int n;
    printf("nhap so nguyen khong am: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("du lieu khong hop le\n");
        return;
    }

    if (n > 20) {
        printf("gia tri qua lon, co the tran so\n");
        return;
    }

    unsigned long long ket_qua = 1;
    for (int i = 2; i <= n; ++i) {
        ket_qua *= (unsigned long long)i;
    }

    printf("%d! = %llu\n", n, ket_qua);
}
