#include<stdio.h>
#include<stdlib.h>
main() {
	int password;
	int error=0;
	do {
		printf("Masukkan password : ");
		scanf("%i", &password);
		
		if(password==123456) {
			printf("Password yang Anda masukkan benar!\n\n");
		}
		else {
			printf("Mohon maaf password yang Anda masukkan salah!\n\n");
			error++;
		}
		if(error>=3) {
			printf("Anda diblokir! Silakan hubungi admin.\n\n");
			exit(EXIT_SUCCESS);
		}
	}
	while(password!=123456);
}
