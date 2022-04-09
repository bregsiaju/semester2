#include <stdio.h>
#include <stdlib.h>
main()
{
	int i, pilih;
	do
	{
		printf("===========================\n");
		printf("|           MENU          |\n");
		printf("===========================\n");
		printf("| 1. Teh                  |\n");
		printf("| 2. Jeruk                |\n");
		printf("| 3. Kopi                 |\n");
		printf("| 4. Keluar               |\n");
		printf("===========================\n");
		printf("Pilihan [1..4] : ");
		scanf("%d",&pilih);
		printf("===========================\n");
		
		switch(pilih)
		{
			case 1:
				printf("\nTeh\n");
			break;
			case 2:
				printf("\nJeruk\n");
			break;
			case 3:
				printf("\nKopi\n");
			break;
			case 4:
				printf("\nBye!\n");
			break;
			default:
				printf("Anda salah pilih\n\n");
		}
		system("PAUSE");
		system("cls");
	}while(pilih!=4);
		printf("\n\n");
}
