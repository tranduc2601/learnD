#include <stdio.h>

int main() {
    int so, tong = 0;
    printf("nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &so);
    tong += so % 10;
    so /= 10;
    tong += so % 10;
    so /= 10;
    tong += so % 10;
    so /= 10;
    tong += so % 10;
    printf("tong cac chu so: %d\n", tong);
    return 0;
}

