#include <stdio.h>

void in_fibonacci(){
    long long n;
    printf("nhap gioi han n: ");
    if (scanf("%lld", &n) != 1 || n <= 0) {
        printf("du lieu khong hop le\n");
        return;
    }

    long long a = 0;
    long long b = 1;

    printf("day fibonacci < %lld: ", n);
    while (a < n) {
        printf("%lld ", a);
        long long tmp = a + b;
        a = b;
        b = tmp;
    }
    printf("\n");
}
