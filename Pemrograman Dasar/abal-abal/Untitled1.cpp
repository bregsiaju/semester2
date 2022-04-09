// menghitung keliling persegi panjang

#include<stdio.h>
#include<stdlib.h>

main() {
	float panjang, lebar, keliling;
	
	printf("Masukkan panjang : ");
	scanf("%f", &panjang);
	printf("Masukkan lebar : ");
	scanf("%f", &lebar);
	
	keliling = (2*panjang) + (2*lebar);
	printf("Keliling persegi panjang = %0.2f\n", keliling);
	
	return 0;
}
