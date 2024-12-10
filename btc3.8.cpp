#include <stdio.h>

int main() {
    int so, nghichDao = 0;
    printf("nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &so);
    nghichDao += (so % 10) * 1000;
    so /= 10;
    nghichDao += (so % 10) * 100;
    so /= 10;
    nghichDao += (so % 10) * 10;
    so /= 10;
    nghichDao += so;
    printf("So nghich dao: %d\n", nghichDao);
    return 0;
}

