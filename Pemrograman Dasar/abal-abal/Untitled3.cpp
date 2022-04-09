#include<stdio.h>
#include<stdlib.h>

main() {
	int X, Y;
	X = 5;
	Y = ++X;
	printf("X = %i\nY = %i\n", X,Y);
	
	X = 5;
	Y = X++;
	printf("\nX = %i\nY = %i\n", X,Y);
}
