#include <stdio.h>

// Fungsi untuk menghitung potongan
float potong(float totalPembelian)
{
    if (totalPembelian < 1000000)
    {
        return 0; // Tidak ada diskon
    }
    else if (totalPembelian >= 1000000 && totalPembelian < 3000000)
    {
        return totalPembelian * 0.20; // Diskon 20%
    }
    else
    {
        return totalPembelian * 0.35; // Diskon 35%
    }
}

int main()
{
    float totalPembelian, diskon, totalBayar;

    // Menampilkan judul program
    printf("Program Hitung Potongan\n");

    // Meminta input dari pengguna
    printf("Total Pembelian (Rp.) : ");
    scanf("%f", &totalPembelian);

    // Menghitung diskon
    diskon = potong(totalPembelian);

    // Menghitung total yang harus dibayarkan
    totalBayar = totalPembelian - diskon;

    // Menampilkan hasil
    printf("Besar Diskon : Rp. %.2f\n", diskon);
    printf("Besar Yang Harus Dibayarkan : Rp. %.2f\n", totalBayar);

    return 0;
}