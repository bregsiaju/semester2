#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, j, k;
	int A[3][3];
	int B[3][3];
	int C[3][3];
	int jumlah = 0;
	
	// input matriks A
    printf("\nMasukkan nilai matriks A : \n");
    for(i = 0; i < 3; i++) {
      for(j = 0; j < 3; j++) {
        printf("A[%d][%d] : ", i+1, j+1);
		scanf("%d", &A[i][j]);
      }
    }
    // input matriks B
    printf("\nMasukkan nilai matriks B : \n");
    for(i = 0; i < 3; i++) {
      for(j = 0; j < 3; j++) {
        printf("B[%d][%d] : ", i+1, j+1);
		scanf("%d", &B[i][j]);
      }
    }
	// output matriks A
	printf("\nMatriks A = \n");
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("%3d", A[i][j]);
		}
		printf("\n");
	}
	// output matriks B
	printf("\nMatriks B = \n");
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("%3d", B[i][j]);
		}
		printf("\n");
	}
    // operasi perkalian
    for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
        for(k = 0; k < 3; k++) {
          jumlah = jumlah + A[i][k] * B[k][j];
        }
        C[i][j] = jumlah;
        jumlah = 0;
      }
    }
    // proses operasi
    printf("\nMatriks C = \n");
    for(i = 0; i < 3; i++){
      for(j = 0; j < 3; j++){
        printf("%3d", C[i][j]);
      }
      printf("\n");
    }
}
