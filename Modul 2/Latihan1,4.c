#include <stdio.h>

int main(void)
{
    printf("Menghitung Luas Persegi Panjang");
    printf("\n");
    float p, l, luas;
    printf("Input panjang persegi: ");
    scanf("%f", &p);
    printf("Input lebar persegi panjang: ");
    scanf("%f", &l);
    luas = p * l;
    printf("Luas persegi panjang: %.2f \n", luas);
    return 0;
}