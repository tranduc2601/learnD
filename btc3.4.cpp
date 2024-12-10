#include <stdio.h>

int main() {
    float toan, van, anh, tong, trungBinh;
    printf("nhap diem Toan: ");
    scanf("%f", &toan);
    printf("nhap diem Van: ");
    scanf("%f", &van);
    printf("nhap diem Anh: ");
    scanf("%f", &anh);
    tong = toan + van + anh;
    trungBinh = tong / 3;
    printf("tong diem: %.2f\n", tong);
    printf("diem trung binh: %.2f\n", trungBinh);
    return 0;
}

