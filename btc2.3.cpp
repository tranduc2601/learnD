#include <stdio.h>
int main(){
	int a,b;
	printf("nhap so nguyen a: ");
	scanf("%d", &a); 
	printf(" nhap so nguyen b: ");
	scanf("%d", &b);
	int sum= a+b;
	int subtraction= a-b;
	int multiplication= a*b;
	float division;
	printf("tong cua %d va %d la: %d \n", a,b,sum); 
	printf("hieu cua %d va %d la: %d\n", a, b, subtraction);
	printf("tich cua %d va %d la: %d\n", a, b, multiplication);
	if (b !=0){
		division = (float)a/b;
		printf("thuong cua %d va %d la: %.2f\n", a, b, division); 
	} else{
		printf("khong the chia cho 0!\n");
	} 
	return 0; 
} 
