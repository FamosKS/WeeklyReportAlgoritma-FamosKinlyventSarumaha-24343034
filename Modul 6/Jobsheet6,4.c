#include <stdio.h>

int main()
{
    int menu;
    float saldo = 175000; // Saldo awal
    float setoran, penarikan;

    printf("ATM\n");
    printf("No Rek: 0123\n");
    printf("Nama Akun: Hatori\n");
    printf("Saldo ATM: Rp. %.2f\n", saldo);

    do
    {
        printf("\nMenu:\n");
        printf("1) Cek Saldo\n");
        printf("2) Setoran\n");
        printf("3) Penarikan Tunai\n");
        printf("4) Exit\n");
        printf("Pilih menu (1-4): ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1: // Cek Saldo
            printf("Saldo Anda saat ini: Rp. %.2f\n", saldo);
            break;

        case 2: // Setoran
            printf("Masukkan jumlah setoran: Rp. ");
            scanf("%f", &setoran);
            saldo += setoran;
            printf("Setoran berhasil. Saldo Anda sekarang: Rp. %.2f\n", saldo);
            break;

        case 3: // Penarikan Tunai
            printf("Masukkan jumlah penarikan: Rp. ");
            scanf("%f", &penarikan);
            if (saldo - penarikan < 50000)
            {
                printf("Penarikan gagal. Saldo minimal yang harus disisakan adalah Rp. 50.000.\n");
            }
            else
            {
                saldo -= penarikan;
                printf("Penarikan berhasil. Saldo Anda sekarang: Rp. %.2f\n", saldo);
            }
            break;

        case 4: // Exit
            printf("Terima kasih telah menggunakan ATM.\n");
            break;

        default:
            printf("Pilihan tidak valid. Silakan pilih menu yang benar.\n");
        }
    } while (menu != 4);

    return 0;
}