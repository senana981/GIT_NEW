#include <stdio.h>
#include <math.h>

void giaiphuongtrinhbac2(){
    double a, b, c;
    printf("nhap he so a: ");
    scanf("%lf", &a);

    printf("nhap he so b: ");
    scanf("%lf", &b);

    printf("nhap he so c: ");
    scanf("%lf", &c);

    const double eps = 1e-9;

    if (fabs(a) < eps) {
        if (fabs(b) < eps) {
            if (fabs(c) < eps) {
                printf("phuong trinh co vo so nghiem\n");
            } else {
                printf("phuong trinh vo nghiem\n");
            }
        } else {
            double x = -c / b;
            printf("phuong trinh bac nhat, co mot nghiem: x = %.6f\n", x);
        }
        return;
    }

    double delta = b * b - 4.0 * a * c;

    if (delta > eps) {
        double sqrt_delta = sqrt(delta);
        double x1 = (-b + sqrt_delta) / (2.0 * a);
        double x2 = (-b - sqrt_delta) / (2.0 * a);
        printf("phuong trinh co 2 nghiem phan biet: x1 = %.6f, x2 = %.6f\n", x1, x2);
    } else if (fabs(delta) <= eps) {
        double x = -b / (2.0 * a);
        printf("phuong trinh co nghiem kep: x = %.6f\n", x);
    } else {
        printf("phuong trinh vo nghiem\n");
    }
}
