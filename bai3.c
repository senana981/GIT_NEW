#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;
    const double eps = 1e-9;

    printf("Nhap a b c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) return 0;

    // Khong phai bac 2
    if (fabs(a) < eps) {
        if (fabs(b) < eps) {
            if (fabs(c) < eps)  printf("Vo so nghiem\n");
            else                printf("Vo nghiem\n");
        } else {
            printf("Nghiem bac 1: x = %.6f\n", -c / b);
        }
        return 0;
    }

    // Bac 2: ax^2 + bx + c = 0
    double delta = b*b - 4*a*c;

    if (delta > eps) {
        double r = sqrt(delta);
        double x1 = (-b + r) / (2*a);
        double x2 = (-b - r) / (2*a);
        printf("Hai nghiem phan biet:\n");
        printf("x1 = %.6f\nx2 = %.6f\n", x1, x2);
    } else if (fabs(delta) <= eps) {
        printf("Nghiem kep: x = %.6f\n", -b / (2*a));
    } else {
        printf("Vo nghiem thuc\n");
    }
    return 0;
}
