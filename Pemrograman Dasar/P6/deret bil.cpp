#include<stdio.h>
#include<stdlib.h>
main()
{
	int jumlah, loop, deret=3;
	
	printf("Program Deret Bilangan 3\n");
	printf("        by bregsi       \n");
	printf("========================\n\n");
	
	printf("Masukkan jumlah deret : ");
	scanf("%i", &jumlah);
	printf("\n")
	
	for(loop=1;loop<=jumlah;loop++)
	{
		printf(" %i ", deret);
		deret += 3;
	}
}
