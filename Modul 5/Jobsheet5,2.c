#include <stdio.h>

float hitung_diskon(float total_pembelian, float *total_setelah_diskon)
{
    float diskon;

    if (total_pembelian <= 75000)
    {
        diskon = total_pembelian * 0.05;
    }
    else if (total_pembelian <= 125000)
    {
        diskon = total_pembelian * 0.15;
    }
    else
    {
        diskon = total_pembelian * 0.25 + 5000;
    }

    *total_setelah_diskon = total_pembelian - diskon;
    return diskon;
}

int main()
{
    float total_pembelian, diskon, total_setelah_diskon;

    printf("Selamat datang di TOSERBA!\n");
    printf("Masukkan total pembelian Anda (dalam Rp): ");
    scanf("%f", &total_pembelian);

    diskon = hitung_diskon(total_pembelian, &total_setelah_diskon);

    printf("\nTotal Pembelian: Rp %.2f\n", total_pembelian);
    printf("Diskon: Rp %.2f\n", diskon);
    printf("Total setelah diskon: Rp %.2f\n", total_setelah_diskon);

    return 0;
}
