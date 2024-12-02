#include <stdio.h>
#include <stdlib.h>

void printZodiac(int tanggal, int bulan)
{
    if ((bulan == 1 && tanggal >= 20) || (bulan == 2 && tanggal <= 18))
    {
        printf("Zodiak Anda adalah: Aquarius\n");
    }
    else if ((bulan == 2 && tanggal >= 19) || (bulan == 3 && tanggal <= 20))
    {
        printf("Zodiak Anda adalah: Pisces\n");
    }
    else if ((bulan == 3 && tanggal >= 21) || (bulan == 4 && tanggal <= 19))
    {
        printf("Zodiak Anda adalah: Aries\n");
    }
    else if ((bulan == 4 && tanggal >= 20) || (bulan == 5 && tanggal <= 20))
    {
        printf("Zodiak Anda adalah: Taurus\n");
    }
    else if ((bulan == 5 && tanggal >= 21) || (bulan == 6 && tanggal <= 20))
    {
        printf("Zodiak Anda adalah: Gemini\n");
    }
    else if ((bulan == 6 && tanggal >= 21) || (bulan == 7 && tanggal <= 22))
    {
        printf("Zodiak Anda adalah: Cancer\n");
    }
    else if ((bulan == 7 && tanggal >= 23) || (bulan == 8 && tanggal <= 22))
    {
        printf("Zodiak Anda adalah: Leo\n");
    }
    else if ((bulan == 8 && tanggal >= 23) || (bulan == 9 && tanggal <= 22))
    {
        printf("Zodiak Anda adalah: Virgo\n");
    }
    else if ((bulan == 9 && tanggal >= 23) || (bulan == 10 && tanggal <= 22))
    {
        printf("Zodiak Anda adalah: Libra\n");
    }
    else if ((bulan == 10 && tanggal >= 23) || (bulan == 11 && tanggal <= 21))
    {
        printf("Zodiak Anda adalah: Scorpio\n");
    }
    else if ((bulan == 11 && tanggal >= 22) || (bulan == 12 && tanggal <= 21))
    {
        printf("Zodiak Anda adalah: Sagittarius\n");
    }
    else if ((bulan == 12 && tanggal >= 22) || (bulan == 1 && tanggal <= 19))
    {
        printf("Zodiak Anda adalah: Capricorn\n");
    }
    else
    {
        printf("Tanggal dan bulan tidak valid untuk zodiak.\n");
    }
}

int main()
{
    int tanggal, bulan, tahun;

    printf("Masukkan tanggal lahir (1-31): ");
    scanf("%d", &tanggal);
    printf("Masukkan bulan lahir (1-12): ");
    scanf("%d", &bulan);
    printf("Masukkan tahun lahir: ");
    scanf("%d", &tahun);

    // Input validation
    if (tanggal < 1 || tanggal > 31 || bulan < 1 || bulan > 12)
    {
        printf("Input tidak valid. Pastikan tanggal (1-31) dan bulan (1-12) benar.\n");
        return 1;
    }

    printf("Tanggal Lahir Anda: %d-%d-%d\n", tanggal, bulan, tahun);
    printZodiac(tanggal, bulan);

    return 0;
}