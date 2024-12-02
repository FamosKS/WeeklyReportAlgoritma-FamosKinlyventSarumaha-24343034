#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts;
    char playAgain;

    // Seed untuk random number generator
    srand(time(NULL));

    do {
        // Komputer memilih nomor secara acak antara 1 dan 20
        number = rand() % 20 + 1;
        attempts = 0;

        printf("Saya telah memilih nomor antara 1 dan 20. Coba tebak!\n");

        do {
            printf("Masukkan tebakan Anda: ");
            scanf("%d", &guess);
            attempts++;

            if (guess < number) {
                printf("Nomor saya lebih besar!\n");
            } else if (guess > number) {
                printf("Nomor saya lebih kecil!\n");
            } else {
                printf("Selamat, Anda benar! Nomor saya adalah %d.\n", number);
                printf("Anda membutuhkan %d percobaan untuk menebak nomor tersebut.\n", attempts);
            }
        } while (guess != number); // Ulangi sampai tebakan benar

        // Menanyakan kepada pengguna apakah ingin bermain lagi
        printf("Apakah Anda ingin bermain lagi? (y/n): ");
        scanf(" %c", &playAgain); // Spasi sebelum %c untuk mengabaikan karakter newline

    } while (playAgain == 'y' || playAgain == 'Y'); // Ulangi jika pengguna memilih 'y'

    printf("Terima kasih telah bermain!\n");
    return 0;
}