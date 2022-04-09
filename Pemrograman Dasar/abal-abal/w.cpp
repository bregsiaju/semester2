#include<stdio.h>
#include<stdlib.h>

main() {
	char a[50];
	printf("Masukkan kata-kata bagus = ");
	scanf("%[^\n]", a);
	printf("== %s ==\n\n\n", a);
	system("PAUSE");
}
