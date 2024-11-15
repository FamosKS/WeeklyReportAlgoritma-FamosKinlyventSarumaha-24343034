#include <stdio.h>
int main()
{
    printf("Menghitung Volume dan Luas Permukaan Bola");
    printf("\n\n");
    float diameter, jari2, volume, luas_permukaan;
    printf("Masukkan diameter bola: ");
    scanf("%f", &diameter);
    printf("\n");
    jari2 = diameter / 2;
    volume = (4.0 / 3.0) * 3.14 * jari2 * jari2 * jari2;
    luas_permukaan = 4 * 3.14 * jari2 * jari2;
    printf("Volume bola = %2.f\n", volume);
    printf("Luas permukaan bola = %2.f\n", luas_permukaan);
    return 0;
}