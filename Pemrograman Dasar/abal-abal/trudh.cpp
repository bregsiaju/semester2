#include<stdio.h>
#include<stdlib.h>

#define maks 100
typedef struct
{
	int tanggal;
	int bulan;
	int tahun;
}data_tanggal;
typedef struct
{
	char nama[30];
	char posisi[15];
	data_tanggal tanggal_lahir;
	
}biodata;
biodata SKZ;

main() {
	int i, j;
	printf("Berapa jumlah anggota?");
	scanf("%i", &j);
	printf("\n");
	for(i=0; i<=j; i++)
	{
	// untuk input
	printf("Nama    : "); fflush(stdin); gets(SKZ[i].nama);
	printf("Posisi  : "); fflush(stdin); gets(SKZ[i].posisi);
	printf("TTL\n");
	printf("Tanggal : "); scanf("%i", &SKZ[i].tanggal_lahir.tanggal);
	printf("Bulan   : "); scanf("%i", &SKZ[i].tanggal_lahir.bulan);
	printf("Tahun   : "); scanf("%i", &SKZ[i].tanggal_lahir.tahun);
	}
	for for(i=0; i<=j; i++)
	{
	// untuk output
	printf("\n======================");
	printf("\n= Introduce Our Team =");
	printf("\n======================");
	printf("\n");
	printf("Nama   : %s\n", SKZ.nama);
	printf("Posisi : %s\n", SKZ.posisi);
	printf("TTL    : %i - %i - %i\n",
	SKZ[i].tanggal_lahir.tanggal,
	SKZ[i].tanggal_lahir.bulan, 
	SKZ[i].tanggal_lahir.tahun);
	}
	
	return 0;
}



