#include <stdio.h>
#include <stdlib.h>
main()
{
	int *bil;
	int i,jumlah_bil;
	printf("Masukkan jumlah data : ");
	scanf("%i",&jumlah_bil);
	//penugasan pointer dan alokasi memori
	bil = (int*)malloc(sizeof(int)*jumlah_bil);
	//input data
	printf("\n");
	
	for(i=0;i<jumlah_bil;i++)
	{
		printf("Bilangan ke-%i : ",i+1);
		scanf("%i",(bil+i));
	}
	//output data
	printf("\n");
	for(i=0;i<jumlah_bil;i++)
	{
		printf("Bilangan ke-%i = %i\n",i+1,*(bil+i));
	}
	printf("\n\n");
	//dealokasi memori
	free(bil);
}

