#include <stdio.h>

float penjumlahan(float a, float b)
{
    return a + b;
}

float pengurangan(float a, float b)
{
    return a - b;
}

float perkalian(float a, float b)
{
    return a * b;
}

float pembagian(float a, float b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
        return 0;
    }
}

int main()
{
    float a, b;
    int pilihan;

    while (1)
    {

        printf("\nPilih operasi:\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Keluar\n");
        printf("Masukkan pilihan (1-5): ");
        scanf("%d", &pilihan);

        // Memeriksa pilihan
        if (pilihan == 5)
        {
            printf("Terima kasih telah menggunakan program ini.\n");
            return 0;
        }
        else if (pilihan < 1 || pilihan > 5)
        {
            printf("Pilihan tidak valid. Silakan coba lagi.\n");
            continue;
        }

        printf("Masukkan bilangan pertama: ");
        scanf("%f", &a);
        printf("Masukkan bilangan kedua: ");
        scanf("%f", &b);

        switch (pilihan)
        {
        case 1:
            printf("%.2f + %.2f = %.2f\n", a, b, penjumlahan(a, b));
            break;
        case 2:
            printf("%.2f - %.2f = %.2f\n", a, b, pengurangan(a, b));
            break;
        case 3:
            printf("%.2f * %.2f = %.2f\n", a, b, perkalian(a, b));
            break;
        case 4:
            printf("%.2f / %.2f = %.2f\n", a, b, pembagian(a, b));
            break;
        }
    }

    return 0;
}