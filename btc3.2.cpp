#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("nhap nhiet do theo do C: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("nhiet do theo do F la: %.2f\n", fahrenheit);

    return 0;
}

