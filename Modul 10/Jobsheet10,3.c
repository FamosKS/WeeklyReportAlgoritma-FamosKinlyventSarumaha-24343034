#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MAHASISWA 100
#define MAX_NAMA 100
#define MAX_ALAMAT 100

// Struktur untuk menyimpan data mahasiswa
struct Mahasiswa
{
    char npm[10];
    char nama[MAX_NAMA];
    char tgl_lahir[11]; // Format: dd-mm-yyyy
    char alamat[MAX_ALAMAT];
    char hp[15];
};

int main()
{
    struct Mahasiswa mahasiswa[MAX_MAHASISWA];
    int count = 0;
    char lagi;

    do
    {
        // Memasukkan data mahasiswa
        printf("NPM: ");
        scanf("%s", mahasiswa[count].npm);
        printf("NAMA: ");
        getchar(); // Menghapus newline dari buffer
        fgets(mahasiswa[count].nama, MAX_NAMA, stdin);
        mahasiswa[count].nama[strcspn(mahasiswa[count].nama, "\n")] = 0; // Menghapus newline
        printf("TGL LAHIR: ");
        scanf("%s", mahasiswa[count].tgl_lahir);
        printf("ALAMAT: ");
        getchar(); // Menghapus newline dari buffer
        fgets(mahasiswa[count].alamat, MAX_ALAMAT, stdin);
        mahasiswa[count].alamat[strcspn(mahasiswa[count].alamat, "\n")] = 0; // Menghapus newline
        printf("HP: ");
        scanf("%s", mahasiswa[count].hp);

        count++; // Menambah jumlah mahasiswa

        // Menanyakan apakah ingin memasukkan data lagi
        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &lagi); // Spasi sebelum %c untuk mengabaikan newline

    } while (lagi == 'y' || lagi == 'Y');

    // Menampilkan data mahasiswa
    printf("\nData Mahasiswa:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%s %s %s %s %s\n", mahasiswa[i].npm, mahasiswa[i].nama, mahasiswa[i].tgl_lahir, mahasiswa[i].alamat, mahasiswa[i].hp);
    }

    return 0;
}