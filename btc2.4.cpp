#include <stdio.h>

int main() {
    int canh;  
    printf("nhap do dai canh hinh vuong: ");
    scanf("%d", &canh);  
    int chuVi = 4 * canh;          
    int dienTich = canh * canh;    
    printf("canh cua hinh vuong la: %d\n", canh);
    printf("chu vi cua hinh vuong la: %d\n", chuVi);
    printf("dien tich cua hinh vuong la: %d\n", dienTich);
    return 0;
}

