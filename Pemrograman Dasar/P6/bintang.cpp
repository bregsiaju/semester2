#include<stdio.h>
#include<stdlib.h>
main()
{
	int i, j, k;
	
	printf("Masukkan tinggi : ");
	scanf("%d", &k);
	
	for(i=1;i<=k;i++)
	{
		for(j=i;j<=k;j++){
		printf("* ");
		}

		printf("\n");
	}
	
}
