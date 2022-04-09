#include <stdio.h>
#include <stdlib.h>

int pangkat(int x, int y);
main()
{
	int a,b;
	printf("x : ");
	scanf("%i",&a);
	printf("y : ");
	scanf("%i",&b);
	printf("x pangkat y = %i\n\n",pangkat(a,b));
}
int pangkat(int x, int y)
{
	if(y==1)
	{
		return x;
	}
	else
	{
		return(x*pangkat(x,y-1));
	}
}

