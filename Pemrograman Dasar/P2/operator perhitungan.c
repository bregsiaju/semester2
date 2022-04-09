#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
	int x=10;
	int y=100;
	printf("x awal : %i\n\n", x);
	x++;
	printf("x++ di luar printf : %i\n", x);
	printf("x : %i\n\n", x);
	printf("x++ di dalam printf : %i\n", x++);
	printf("x : %i\n\n", x);
	++x;
	printf("++x di luar printf : %i\n", x);
	printf("x : %i\n\n", x);
	printf("++x di dalam printf : %i\n", ++x);
	printf("x : %i\n\n", x);
	y--;
	printf("y-- di luar printf : %i\n", y);
	printf("y : %i\n\n", y);
	printf("y-- di dalam printf : %i\n", y--);
	printf("y : %i\n\n", y);
	--y;
	printf("--y di luar printf : %i\n", y);
	printf("y : %i\n\n", y);
	printf("--y di dalam printf : %i\n", --y);
	printf("y : %i\n\n", y);
	
	system("PAUSE");
	return 0;
}
