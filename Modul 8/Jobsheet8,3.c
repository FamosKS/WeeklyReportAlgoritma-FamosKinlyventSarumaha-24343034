#include <stdio.h>

float luas(float jariJari)
{
    return 3.14 * jariJari * jariJari;
}

float keliling(float jariJari)
{
    return 2 * 3.14 * jariJari;
}

int main()
{
    float jariJari;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jariJari);

    float luasLingkaran = luas(jariJari);
    float kelilingLingkaran = keliling(jariJari);

    printf("Luas lingkaran dengan jari-jari %.2f adalah: %.2f\n", jariJari, luasLingkaran);
    printf("Keliling lingkaran dengan jari-jari %.2f adalah: %.2f\n", jariJari, kelilingLingkaran);

    return 0;
}