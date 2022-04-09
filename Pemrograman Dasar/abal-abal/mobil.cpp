#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	char nama[20];
	char merk[20];
	char jenis[20];
}identitas;
typedef struct
{
	int nomer;
	int tahun;
	int kapasitas;
	identitas data_nama;
}data_mobil;
data_mobil mobil;
main()
{
	// untuk input
	printf("Masukkan nomer mobil : "); scanf("%i", &mobil.nomer);
	printf("Masukkan nama mobil : "); fflush(stdin); gets(mobil.data_nama.nama);
	printf("Masukkan Merk Mobil : "); fflush(stdin); gets(mobil.data_nama.merk);
	printf("Masukkan tahun pembuatan mobil : "); 
	scanf("%i",&mobil.tahun);
	printf("Masukkan jenis mobil : "); fflush(stdin); gets(mobil.data_nama.jenis);
	printf("Masukkan kapasitas mesin : "); 
	scanf("%i", &mobil.kapasitas);
	printf("\n\n");
	
	//output
	printf("Nomer mobil : %i\n", mobil.nomer);
	printf("Nama mobil : %s\n", mobil.data_nama.nama);
	printf("Merk Mobil : %s\n", mobil.data_nama.merk);
	printf("tahun pembuatan mobil : %i\n", mobil.tahun);
	printf("jenis mobil : %s\n", mobil.data_nama.jenis);
	printf("kapasitas mesin : %i CC\n", mobil.kapasitas); 
	printf("\n\n");
}
