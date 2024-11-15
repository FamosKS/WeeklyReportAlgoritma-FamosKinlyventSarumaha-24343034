#include <stdio.h>
int main()
{
    float presensi, praktek, UTS, UAS, nilai_akhir;
    printf("Program Menghitung Nilai Akhir");
    printf("\n\n");
    printf("Silahkan memasukkan nilai");
    printf("\n");
    printf("Nilai Presensi: ");
    scanf("%f", &presensi);
    printf("Nilai Praktek: ");
    scanf("%f", &praktek);
    printf("Nilai UTS: ");
    scanf("%f", &UTS);
    printf("Nilai UAS: ");
    scanf("%f", &UAS);
    presensi = presensi * 0.10;
    praktek = praktek * 0.20;
    UTS = UTS * 0.30;
    UAS = UAS * 0.40;
    nilai_akhir = presensi + praktek + UTS + UAS;
    printf("Nilai akhir anda : %2.f\n", nilai_akhir);
    return 0;
}
