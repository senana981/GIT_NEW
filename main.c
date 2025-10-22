#include "mylib.h"

void menu(){
    int tiep_tuc = 1;
    while (tiep_tuc) {
        printf("*** MENU ***\n");
        printf("1- Xem ngay cua thang\n");
        printf("2- Kiem tra nam nhuan\n");
        printf("3- Giai phuong trinh bac 2\n");
        printf("4- Xep loai hoc sinh\n");
        printf("5- Tinh tien dien\n");
        printf("6- In bang cuu chuong\n");
        printf("7- Tinh giai thua\n");
        printf("8- In day tam giac\n");
        printf("9- Nhap thu tu tu 1 den n\n");
        printf("10- In day Fibonacci\n");
        printf("11- In thap sao\n");
        printf("0- Thoat\n");
        printf("------------------\n");
        printf("chon STT chuc nang: \n");
        printf("------------------\n");

        int c;
        if (scanf("%d", &c) != 1) {
            printf("du lieu khong hop le\n");
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {
            }
            continue;
        }

        switch (c) {
        case 1:
            xemthang();
            break;
        case 2:
            namnhuan();
            break;
        case 3:
            giaiphuongtrinhbac2();
            break;
        case 4:
            xeploaihocsinh();
            break;
        case 5:
            tinh_tien_dien();
            break;
        case 6:
            in_bang_cuu_chuong();
            break;
        case 7:
            tinh_giai_thua();
            break;
        case 8:
            in_day_tam_giac();
            break;
        case 9:
            nhap_tuan_tu();
            break;
        case 10:
            in_fibonacci();
            break;
        case 11:
            in_thap_sao();
            break;
        case 0:
            printf("ket thuc chuong trinh\n");
            tiep_tuc = 0;
            break;
        default:
            printf("lua chon khong hop le\n");
            break;
        }
    }
}

int main(){
    menu();
    return 0;
}
