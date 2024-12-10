#include <stdio.h>

int main() {
    int chieuDai, chieuRong;
    printf("nhap chieu dai hinh chu nhat: ");
    scanf("%d", &chieuDai);
    printf("nhap chieu rong hinh chu nhat: ");
    scanf("%d", &chieuRong);
    int chuVi = 2 * (chieuDai + chieuRong);
    int dienTich = chieuDai * chieuRong;
    printf("chieu dai: %d\n", chieuDai);
    printf("chieu rong: %d\n", chieuRong);
    printf("chu vi: %d\n", chuVi);
    printf("dien tich: %d\n", dienTich);
    return 0;
}

