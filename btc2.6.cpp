#include <stdio.h>

int main() {
    const float PI = 3.14;
    float banKinh;
    printf("nhap ban kinh hinh tron: ");
    scanf("%f", &banKinh);
    float chuVi = 2 * PI * banKinh;
    float dienTich = PI * banKinh * banKinh;
    printf("ban kinh: %.2f\n", banKinh);
    printf("chu vi: %.2f\n", chuVi);
    printf("dien tich: %.2f\n", dienTich);
    return 0;
}

