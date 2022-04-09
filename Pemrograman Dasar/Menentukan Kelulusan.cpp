#include <stdio.h>
#include <stdlib.h>
main()
{
	int nilai;
	printf("Program Menentukan Kelulusan by Alviriza\n");
	printf("--------------------------------\n");
	printf("Masukkan Nilai anda :");
	scanf("%i",&nilai);
	if(nilai>=75)
	{
		printf("\nNilai anda adalah %i\n",nilai);
		printf("Selamat, Anda Lulus!\n\n");
	}
	else
	{
		printf("\nNilai anda adalah %i\n",nilai);
		printf("Selamat, Anda Mengulang Lagi Tahun Depan!\n\n");
	}
}

