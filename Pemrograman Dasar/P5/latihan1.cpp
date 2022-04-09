#include<stdio.h>
#include<stdlib.h>
main()
{
	int pilihan;
	float sisi, jari, panjang, lebar, luas;
	
	printf("PROGRAM MENGHITUNG LUAS BANGUN DATAR BY Bregiee");
	printf("\n           ================            \n");
	
	printf("Pilihan :\n1. Lingkaran\n2. Persegi\n3. Persegi Panjang\n\n");
	printf("Kamu mau menghitung luas apa? ");
	scanf("%i", &pilihan);
	
	switch(pilihan)
	{
		case 1 :
			printf("Masukkan jari-jari = ");
			scanf("%f", &jari);
			luas = 3.14*jari*jari;
			printf("\nLuas lingkaran = %.2f\n", luas);
		break;
		
		case 2 :
			printf("Masukkan sisi = ");
			scanf("%f", &sisi);
			luas = sisi*sisi;
			printf("\nLuas persegi = %.2f\n", luas);
		break;
		
		case 3 :
			printf("Masukkan panjang = ");
			scanf("%f", &panjang);
			printf("Masukkan lebar = ");
			scanf("%f", &lebar);
			luas = panjang*lebar;
			printf("\nLuas persegi panjang = %.2f\n", luas);
		break;
		
		default :
			printf("\nPilihan tidak tersedia. Silakan hitung manual!\n");
		break;
	}
}


