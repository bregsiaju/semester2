#include<stdio.h>
#include<stdlib.h>

main()
{
	int bil_bulat[] = {0,1,2,3,4};
	int *pbil, i;
	
	pbil = bil_bulat;
	for(i=0;i<5;i++)
	{
		printf("Nilai yang ditunjuk [%i] : %i\n", i+1, *(pbil+1));
		printf("Alamat yang ditunju [%i] : 0x%p\n\n", i+1, (pbil+1));
		pbil++;
	}
}
