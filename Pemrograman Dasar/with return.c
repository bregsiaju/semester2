#include<stdio.h>  
float rata(float a, float b, float c);  
void main()  
{  
    float a, b, c, hasil;   
    printf("Menghitung Rata-Rata Tiga Angka\n");  
    printf("\nMasukkan tiga angka : ");  
    scanf("%f %f %f", &a, &b, &c);  
    hasil = rata(a, b, c);  
    printf("\nRata-ratanya : %.2f", hasil);  
}  
float rata(float a, float b, float c)  
{  
    return (a+b+c)/3;  
}  
