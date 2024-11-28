#include <stdio.h>

int main()
{
    int n = 20;
    float nilai[n];
    float total = 0.0;
    float rataRata;

    printf("Masukkan nilai untuk %d mahasiswa:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Nilai mahasiswa %d: ", i + 1);
        scanf("%f", &nilai[i]);
        total += nilai[i];
    }

    rataRata = total / n;

    printf("Rata-rata nilai mahasiswa adalah: %.2f\n", rataRata);

    return 0;
}