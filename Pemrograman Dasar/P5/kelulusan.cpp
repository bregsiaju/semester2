// progam menentukan lulus atau tidak by Bregsi AJ
#include<stdio.h>
#include<stdlib.h>
main() {
	int nilai;
	char nama[20];
	long int NPM;
	
	printf("Nama : "); gets(nama);
	printf("NMP : "); scanf("%li", &NPM);
	printf("Nilai : "); scanf("%i", &nilai);
	
	printf("\n\nNama : %s\n", nama);
	printf("NPM  : %li\n", NPM);
	printf("Nilai: %i\n", nilai);
	if(nilai>=91){
		printf("Ket. : Selamat Anda lulus dengan predikat A!\n");
	}
	else if(nilai>=80 && nilai<91){
		printf("Ket. : Selamat Anda lulus dengan predikat B!\n");
	}
	else if(nilai>=75 && nilai<80){
		printf("Ket. : Selamat Anda lulus dengan predikat C!\n");
	}
	else {
		printf("Ket. : Selamat berjuang kembali!");
	}
}
