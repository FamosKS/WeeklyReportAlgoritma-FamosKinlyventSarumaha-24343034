#include <stdio.h>

int main()
{
    printf("Konversi Waktu\n\n");
    int jam, menit, detik, sisa_detik;
    printf("Masukkan Jumlah waktu dalam detik : ");
    scanf("%d", &detik);
    jam = detik / 3600;
    detik %= 3600;
    menit = detik / 60;
    sisa_detik = detik % 60;
    printf("\n");
    printf("Sisa waktu anda adalah\n\n");
    printf("Jam = %d\n", jam);
    printf("Menit = %d\n", menit);
    printf("Detik = %d\n", sisa_detik);
    return 0;
}