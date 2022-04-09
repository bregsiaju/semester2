#include<stdio.h>
#include<stdlib.h>
main()
{
	int batas, loop;
	
	printf("Program Deret Bilangan 3\n");
	printf("        by bregsi       \n");
	printf("========================\n\n");
	
	printf("Masukkan batas deret : ");
	scanf("%i", &batas);
	printf("\n");
	
	for(loop=3;loop<=batas;loop+=3)
	{
		printf(" %i ", loop);
	}
}
