#include <stdio.h>
int main()
{
    printf("Penukaran mata uang asing"); /* Judul program*/
    printf("\n");
    float rupiah, dollar; /*Membuat variabel*/
    printf("\n");
    printf("Masukkan Nominal Rupiah : "); /*Memasukkan nominal rupiah*/
    scanf("%f", &rupiah);
    dollar = rupiah / 14250; /*Tahap konversi*/
    printf("\n");
    printf("Hasil penukaran ke dollar = US$ %.2f\n", dollar); /*Hasil program*/
    return 0;
}