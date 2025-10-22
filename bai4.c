#include <stdio.h>

void xeploaihocsinh(void){
    double diem_van, diem_toan, diem_anh;
    printf("nhap diem van: ");
    if (scanf("%lf", &diem_van) != 1) {
        printf("du lieu khong hop le\n");
        return;
    }

    printf("nhap diem toan: ");
    if (scanf("%lf", &diem_toan) != 1) {
        printf("du lieu khong hop le\n");
        return;
    }

    printf("nhap diem anh van: ");
    if (scanf("%lf", &diem_anh) != 1) {
        printf("du lieu khong hop le\n");
        return;
    }

    double diem_trung_binh = (diem_van * 2.0 + diem_toan * 2.0 + diem_anh) / 5.0;
    printf("diem cuoi ky: %.2f\n", diem_trung_binh);

    if (diem_trung_binh < 3.0) {
        printf("hoc luc: yeu\n");
    } else if (diem_trung_binh <= 5.0) {
        printf("hoc luc: trung binh\n");
    } else if (diem_trung_binh <= 7.9) {
        printf("hoc luc: kha\n");
    } else {
        printf("hoc luc: gioi\n");
    }
}
