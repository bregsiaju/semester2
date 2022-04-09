#include <stdio.h>

int main(){
	
	const float pi = 3.14; //opsional
	int pilihan;
	float sisi, jari, panjang, lebar, Luas; //bisa juga pakek int
	
	// ini tampilan menu
	printf("Silahkan pilih bangun yang akan dihitung");
	printf("\n=======================================\n");
	printf("1. Lingkaran\n");
	printf("2. Bujur Sangkar\n");
	printf("3. Persegi Panjang");
	printf("\n=======================================\n");
	printf("Masukkan pilihan: "); scanf("%d", &pilihan);
	
	
	switch (pilihan){
		case 1: // case lingkaran
			printf("\nMasukkan jari-jari lingkaran: ");scanf("%f", &jari);
			Luas = pi * jari * jari; 
			//pi bisa diganti angka 3.14
			printf("\n\nLuas Lingkaran = %.2f", Luas); break;
			
		case 2: // case persegi
			printf("\nMasukkan sisi bunjur sangkar: ");scanf("%f", &sisi);
			Luas = sisi * sisi;
			printf("\n\nLuas bujur sangkar = %.2f", Luas); break;
			
		case 3: // case persegi panjang
			printf("\nMasukkan panjang persegi panjang: ");scanf("%f", &panjang);
			printf("\nMasukkan lebar persegi panjang: ");scanf("%f", &lebar);
			Luas = panjang * lebar;
			printf("\n\nLuas persegi panjang = %.2f", Luas); break;
			
		default:
			printf("\n\nPilihan anda tidak valid CKUAKKSSSSsssss"); break;
	}
return 0;
}
