#include <stdio.h>

void namnhuan(void) {
    int nam;
    printf("nhap so nam: ");
    if (scanf("%d", &nam) != 1) {
        printf("du lieu khong hop le\n");
        return;
    }

    int la_nam_nhuan = (nam % 400 == 0) || ((nam % 4 == 0) && (nam % 100 != 0));
    if (la_nam_nhuan) {
        printf("%d la nam nhuan\n", nam);
    } else {
        printf("%d khong phai nam nhuan\n", nam);
    }
}

