#include <stdio.h>
int sum(int n);

void main(){
    int number, result;

    printf("Masukkan bilangan bulat positif : ");
    scanf("%d", &number);

    result = sum(number);

    printf("Hasil = %d", result);
}

int sum(int num){
    if (num!=0)
        return num + sum(num-1); // fungsi sum() memanggil dirinya sendiri
    else
        return num;
}
