#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MAHASISWA 100
#define MAX_NAMA 100
#define MAX_NIM 10
#define MAX_JURUSAN 100
#define MAX_PRODI 100

// Struktur untuk menyimpan data mahasiswa
struct Mahasiswa
{
    char nama[MAX_NAMA];
    char nim[MAX_NIM];
    char jurusan[MAX_JURUSAN];
    char prodi[MAX_PRODI];
};

int main()
{
    struct Mahasiswa mahasiswa[MAX_MAHASISWA];
    int count = 0;
    char lagi;

    // Membuka file untuk menulis
    FILE *file = fopen("datamahasiswa.txt", "w");
    if (file == NULL)
    {
        printf("Error: Tidak dapat membuka file untuk menulis.\n");
        return 1;
    }

    do
    {
        // Memasukkan data mahasiswa
        printf("Masukan data mahasiswa ke-%d\n", count + 1);
        printf("Nama: ");
        getchar(); // Menghapus newline dari buffer
        fgets(mahasiswa[count].nama, MAX_NAMA, stdin);
        mahasiswa[count].nama[strcspn(mahasiswa[count].nama, "\n")] = 0; // Menghapus newline

        printf("NIM: ");
        fgets(mahasiswa[count].nim, MAX_NIM, stdin);
        mahasiswa[count].nim[strcspn(mahasiswa[count].nim, "\n")] = 0; // Menghapus newline

        printf("Jurusan: ");
        fgets(mahasiswa[count].jurusan, MAX_JURUSAN, stdin);
        mahasiswa[count].jurusan[strcspn(mahasiswa[count].jurusan, "\n")] = 0; // Menghapus newline

        printf("Program Studi: ");
        fgets(mahasiswa[count].prodi, MAX_PRODI, stdin);
        mahasiswa[count].prodi[strcspn(mahasiswa[count].prodi, "\n")] = 0; // Menghapus newline

        // Menyimpan data ke dalam file
        fprintf(file, "Mahasiswa ke-%d:\n", count + 1);
        fprintf(file, "Nama: %s\n", mahasiswa[count].nama);
        fprintf(file, "NIM: %s\n", mahasiswa[count].nim);
        fprintf(file, "Jurusan: %s\n", mahasiswa[count].jurusan);
        fprintf(file, "Program Studi: %s\n\n", mahasiswa[count].prodi);

        count++; // Menambah jumlah mahasiswa

        // Menanyakan apakah ingin memasukkan data lagi
        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &lagi); // Spasi sebelum %c untuk mengabaikan newline

    } while (lagi == 'y' || lagi == 'Y');

    // Menutup file
    fclose(file);

    printf("Data mahasiswa telah disimpan ke dalam file datamahasiswa.txt\n");

    return 0;
}