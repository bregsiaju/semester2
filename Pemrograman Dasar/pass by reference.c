#include<stdio.h>
void swap(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;
}

int main(){
	int x = 23, y = 15;
	swap(&x, &y);
	printf("x = %d dan y = %d", x, y);
	return 0;
}
