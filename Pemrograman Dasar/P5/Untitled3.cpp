#include <stdio.h>
#include <stdlib.h>
main()
{
	int bilangan;
	printf("Masukkan bilangan bulat: ");
	scanf("%i",&bilangan);
	
	if(bilangan>=0) {
		printf("\nBilangan yang dimasukkan adalah %i\n", bilangan);
		printf("bilangan ini adalah bilangan positif\n\n");
	}
	else {
		printf("\Bilangan yang dimasukkan adalah %i\n", bilangan);
		printf("Bilangan ini adalah bilangan negatif\n");
	}
}
