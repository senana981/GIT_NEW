#include <stdio.h>

void in_day_tam_giac(void){
    int x;
    printf("nhap gia tri x: ");
    if (scanf("%d", &x) != 1 || x <= 0) {
        printf("du lieu khong hop le\n");
        return;
    }

    for (int i = 1; i <= x; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d ", j);
        }
        printf("\n");
    }
}
