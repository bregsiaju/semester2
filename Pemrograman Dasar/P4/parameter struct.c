#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int bil1;
	int bil2;
}data_bilangan;

void tampil_bilangan(data_bilangan bilangan)
{
	printf("Bilangan Pertama : %i\n",bilangan.bil1);
	printf("Bilangan Kedua : %i\n",bilangan.bil2);
}
main()
{
	data_bilangan bilangan;
	printf("Masukkan bilangan pertama :");
	scanf("%i",&bilangan.bil1);
	printf("Masukkan bilangan kedua :");
	scanf("%i",&bilangan.bil2);
	printf("\n");
	tampil_bilangan(bilangan);
	printf("\n");
}

