#include <stdio.h>

void tinh_tien_dien(){
    int so_dien;
    printf("nhap so dien (kWh): ");
    if (scanf("%d", &so_dien) != 1 || so_dien < 0) {
        printf("du lieu khong hop le\n");
        return;
    }

    long long tong_tien = 0;

    if (so_dien <= 100) {
        tong_tien = (long long)so_dien * 500;
    } else if (so_dien <= 350) {
        tong_tien = 100LL * 500 + (long long)(so_dien - 100) * 550;
    } else if (so_dien <= 650) {
        tong_tien = 100LL * 500 + 250LL * 550 + (long long)(so_dien - 350) * 650;
    } else {
        tong_tien = 100LL * 500 + 250LL * 550 + 300LL * 650 + (long long)(so_dien - 650) * 650;
    }

    printf("tong so tien: %lld\n", tong_tien);
}
