#include <stdio.h>

int main()
{
    int durasi;                    // variabel untuk menyimpan durasi film dalam jam
    int first_hour_tariff = 15000; // tarif jam pertama
    int subsequent_hour_tariff;    // tarif jam berikutnya

    // Input durasi film dari pengguna
    printf("Masukkan durasi film (dalam jam): ");
    scanf("%d", &durasi);

    // Hitung tarif jam berikutnya
    subsequent_hour_tariff = first_hour_tariff * 0.5;

    // Hitung total biaya
    int total_biaya = first_hour_tariff;
    for (int i = 1; i < durasi; i++)
    {
        total_biaya += subsequent_hour_tariff;
    }

    // Tampilkan hasil output
    printf("Total biaya: Rp %d\n", total_biaya);

    return 0;
}