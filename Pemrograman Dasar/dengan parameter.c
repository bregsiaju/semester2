#include<stdio.h>

int luas(int a, int b)		// a dan b adalah parameter formal
{	
	printf("Luas persegi panjang dengan sisi %d dan %d = %d\n", a, b, a*b);
}

int main()
{
	luas(5, 10);			// 5 dan 10 adalah parameter aktual
	luas(3, 6);
}
