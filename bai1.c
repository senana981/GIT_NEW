#include <stdio.h>

void xemthang(void) {
    int thang;
    printf("nhap thang: ");
    if (scanf("%d", &thang) != 1) {
        printf("du lieu khong hop le\n");
        return;
    }

    if (thang < 1 || thang > 12) {
        printf("khong co thang nay\n");
        return;
    }

    switch (thang) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("thang co 31 ngay\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("thang co 30 ngay\n");
        break;
    default:
        printf("thang co 28 hoac 29 ngay\n");
        break;
    }
}


