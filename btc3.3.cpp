#include <stdio.h>

int main() {
    float PI = 3.14;
    float r, chuVi, dienTich;
    printf("nhap ban kinh hinh tron r: ");
    scanf("%f", &r);
    chuVi = PI * r * 2;
    dienTich = PI * r * r;
    printf("chu vi hinh tron: %.2f\n", chuVi);
    printf("dien tich hinh tron: %.2f\n", dienTich);
    return 0;
}

