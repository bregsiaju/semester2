#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int x, y;
	x = 5;
	y = 8 - x++;
	printf("contoh 1: Nilai x = %d | nilai y = %d\n",x,y);

	x = 5;
	y = 8 - ++x;
	printf("contoh 2: Nilai x = %d | nilai y = %d\n",x,y);
	
	x = 5;
	y = 8 - x--;
	printf("contoh 3: Nilai x = %d | nilai y = %d\n", x,y);
	
	x = 5;
	y = 8 - --x;
	printf("contoh 4: Nilai x = %d | nilai y = %d\n", x,y);
	
	return 0;
}
