#include<stdio.h>
#include<stdlib.h>

int max(int num1, int num2);
int max(int num1, int num2) {
	int result;
	if(num1 > num2)
		result = num1;
	else
		result = num2;
	return result;
}

int main() {
	int a;
	int b;
	int hasil;
	
	printf("Masukkan angka pertama : ");
	scanf("%i", &a);
	printf("Masukkan angka kedua : ");
	scanf("%i", &b);
	
	hasil = max(a, b);
	printf("Nilai yang terbesar antara %i dan %i adalah : %i\n", a, b, hasil);
	return 0;
}

