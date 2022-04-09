#include<stdio.h>

float ubah(){
	float a, hasil;
	printf("input suhu dalam C : ");
	scanf("%f", &a);
	hasil = 9/5*a + 32;
	printf("%.2f Celcius = %.2f Farenheit", a, hasil);
	return hasil;
}

main() {
	ubah();
}
