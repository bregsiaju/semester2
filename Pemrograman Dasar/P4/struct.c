#include<stdio.h>
#include<stdlib.h>
typedef struct // deklarasi untuk struck
{
	long int nip;
	char nama[30];
	char alamat[50];
}data_dosen;
	data_dosen dosen1, dosen2;
main()
{
	// untuk input
	printf("Data Dosen Pertama : \n");
	printf("------------------\n");
	printf("Nip : "); scanf("%li", &dosen1.nip);
	printf("Nama : "); fflush(stdin); gets(dosen1.nama);
	printf("Alamat : "); fflush(stdin); gets(dosen1.alamat);
	printf("\n\n");
	
	printf("Data Dosen Kedua : \n");
	printf("------------------\n");
	printf("Nip : "); scanf("%li", &dosen2.nip);
	printf("Nama : "); fflush(stdin); gets(dosen2.nama);
	printf("Alamat : "); fflush(stdin); gets(dosen2.alamat);
	printf("\n\n");
	
	//untuk output
	printf("Data Dosen Pertama : \n");
	printf("------------------\n");
	printf("nip : %li\n", dosen1.nip);
	printf("Nama : %s\n", dosen1.nama);
	printf("Alamat : %s\n", dosen1.alamat);
	printf("\n\n");
	
	printf("Data Dosen Kedua : \n");
	printf("------------------\n");
	printf("nip : %li\n", dosen2.nip);
	printf("Nama : %s\n", dosen2.nama);
	printf("Alamat : %s\n", dosen2.alamat);
	printf("\n\n");
}
