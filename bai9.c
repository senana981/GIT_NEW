#include <stdio.h>

void nhap_tuan_tu(void){
    int n;
    printf("nhap gia tri n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("du lieu khong hop le\n");
        return;
    }

    while (1) {
        int dung_trinh_tu = 1;
        for (int expected = 1; expected <= n; ++expected) {
            int gia_tri;
            printf("nhap so thu %d: ", expected);
            if (scanf("%d", &gia_tri) != 1) {
                printf("du lieu khong hop le\n");
                return;
            }
            if (gia_tri != expected) {
                printf("sai, hay bat dau lai tu dau\n");
                dung_trinh_tu = 0;
                break;
            }
        }
        if (dung_trinh_tu) {
            printf("ban da nhap dung tu 1 den %d\n", n);
            break;
        }
    }
}
