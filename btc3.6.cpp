#include <stdio.h>

int main() {
    float canhDay, chieuCao, dienTich;
    printf("nhap do dai canh day: ");
    scanf("%f", &canhDay);
    printf("nhap chieu cao tam giac: ");
    scanf("%f", &chieuCao);
    dienTich = (canhDay * chieuCao) / 2;
    printf("dien tich tam giac: %.2f\n", dienTich);
    return 0;
}

