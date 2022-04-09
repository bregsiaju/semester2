#include <stdio.h>
#include <stdlib.h>
main()
{
	int pilihan;
	printf("Pilihan warna lampu lalu lintas: \n");
	printf("--------------\n");
	printf("1. Merah\n");
	printf("2. Kuning\n");
	printf("3. Hijau");
	printf("--------------\n");	
	printf("Masukkan pilihan anda[1...3]: ");
	scanf("%i", &pilihan);
	printf("\n");
	
	if(pilihan==1)
	{
		printf("Lampu merah artinya tidak boleh jalan!");
	}
	else if(pilihan==2)
	{
		printf("Lampu kuning artinya siap-siap!");
	}
	else if(pilihan==3)
	{
		printf("Lampu hijau artinya boleh jalan");
	}
	else{
		printf("pilihan yang dimasukkan salah!\n\n");
	}
	system("PAUSE");
}
