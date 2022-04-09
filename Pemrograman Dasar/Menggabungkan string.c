// Bregsi AJ (20081010211)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	char string1[] = " ";
	char string2[] = " ";
	
	printf("Menggabungkan String\n");
	printf("--------------------\n");
	printf("String 1 : ");
	gets(string1);
	printf("String 2 : ");
	gets(string2);
	printf("\nHasil penggabungan = %s\n",strcat(string1,string2));
}
