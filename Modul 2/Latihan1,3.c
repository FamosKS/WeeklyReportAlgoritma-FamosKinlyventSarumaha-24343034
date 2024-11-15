#include <stdio.h>

int main(void)
{
    printf("Menghitung Luas Segitiga\n");

    float a, t, luas;
    printf("\n");
    printf("Input alas segitiga: ");
    scanf("%f", &a);
    printf("Input tinggi segitiga: ");
    scanf("%f", &t);
    luas = 0.5 * a * t;
    printf("Luas segitiga = %.2f  \n", luas);
    return 0;
}