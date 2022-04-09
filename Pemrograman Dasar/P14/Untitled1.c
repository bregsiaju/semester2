#include<stdio.h>
#include<stdlib.h>

main()
{
	int v;
	int *pv;
	printf("Masukkan nilai v = ");
	scanf("%i", &v);
	printf("\n");
	
	pv = &v;
	printf("Hasil tanpa pointer = \n");
	printf(" Nilai v = %i\n", v);
	printf("Alamat v = 0x%p\n\n", &v);
	printf("Hasil dengan pointer = \n");
	printf("Nilai v = %i\n", pv);
	printf("Alamat v = 0x%p\n\n", &pv);
}
