#include<stdio.h>
#include<stdlib.h>
int main()
{
	int angka = 50;      
	int *p;			// menunjuk ke variabel angka
	int **p2;		// menunjuk ke pointer p        
	p  = &angka;	// menyimpan alamat variabel angka
	p2 = &p;		// menyimpan alamat p pada p2
	
	printf("Alamat variabel angka adalah %x\n",&angka);      
	printf("Alamat variabel p     adalah %x\n",p);      
	printf("Nilai  variabel *p    adalah %d\n",*p);      
	printf("Alamat variabel p2    adalah %x\n",p2);      
	printf("Nilai  variabel **p2  adalah %d\n",*p);      
	return 0;  
}
