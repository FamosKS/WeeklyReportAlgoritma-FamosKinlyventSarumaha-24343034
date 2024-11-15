#include <stdio.h>
int main()
{
    char Pembeli[50], nama_barang[50];
    int jumlah_barang, total;
    printf("Selamat datang di toko serbaguna");
    printf("\n\n");
    printf("Masukkan namamu: ");
    fgets(Pembeli, sizeof(Pembeli), stdin);
    printf("Masukkan nama barang yaang ingin dibeli: ");
    fgets(nama_barang, sizeof(nama_barang), stdin);
    printf("Jumlah yang akan dibeli: ");
    scanf("%d", &jumlah_barang);
    printf("Harga per satuan: Rp.12.000");
    total = jumlah_barang * 12000;
    printf("\n");
    printf("----Struk Pembelian----");
    printf("\n");
    printf("Pembeli             : %s", Pembeli);
    printf("Barang yang dibeli  : %s", nama_barang);
    printf("Harga per satuan    : Rp.12.000");
    printf("\n");
    printf("Jumlah barang       : %d", jumlah_barang);
    printf("\n");
    printf("Total               : Rp%d\n", total);
    return 0;
}