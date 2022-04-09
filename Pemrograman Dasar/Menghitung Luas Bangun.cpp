#include <stdio.h>
#include <stdlib.h>
main()
{
	int pilihan, jari, sisi, panjang, lebar;
	float luas;
	printf("Kalkulator Penghitung Luas Bangun Datar By Alviriza\n");
	printf("--------------------------------\n");
	printf("Berikut Ini Adalah Bangun Datar Yang Dapat Dihitung Luasnya :\n");
	printf("1. Lingkaran\n");
	printf("2. Bujur Sangkar\n");
	printf("3. Persegi Panjang\n");
	printf("--------------------------------\n");
	printf("Masukkan Pilihan Bangun Yang Ingin Dihitung Luasnya :");
	scanf("%d",&pilihan);
	switch(pilihan)
	{
		case 1:
		printf("\nKalkulator Luas Lingkaran \n");
		printf("---------------------------\n");
		printf("Masukkan Jari-Jari Lingkaran :");
		scanf("%i",&jari);
		luas = 3.14*jari*jari;
		printf("Luas Lingkaran Adalah %f\n",luas);
		break;
		case 2:
		printf("\nKalkulator Luas Bujur Sangkar \n");
		printf("---------------------------\n");
		printf("Masukkan Sisi Bujur Sangkar :");
		scanf("%i",&sisi);
		luas = sisi*sisi;
		printf("Luas Bujur Sangkar Adalah %f\n",luas);
		break;
		case 3:
		printf("\nKalkulator Luas Persegi Panjang \n");
		printf("---------------------------\n");
		printf("Masukkan Panjang Persegi Panjang :");
		scanf("%i",&panjang);
		printf("Masukkan Lebar Persegi Panjang :");
		scanf("%i",&lebar);
		luas = panjang*lebar;
		printf("Luas Persegi Panjang Adalah %f\n",luas);
		break;
		default:
		printf("Angka Yang Anda Inputkan Tidak Ada Di Menu!\n");
		break;
	}
}
