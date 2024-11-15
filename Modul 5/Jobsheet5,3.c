#include <stdio.h>

int main()
{
    int choice;
    float r, s, p, l, t, phi = 3.14;
    float lpkubus, lpbalok, lpbola, lt;

    printf("Selamat datang di perhitungan Luas Permukaan Bangun Ruang\n\n");
    printf("Silakan memilih perhitungan\n");
    printf("1. Menghitung Luas Permukaan Bola\n");
    printf("2. Menghitung Luas Permukaan Kubus\n");
    printf("3. Menghitung Luas Permukaan Balok\n");
    printf("4. Menghitung Luas Permukaan Tabung\n");
    printf("Masukkan pilihan: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Menghitung Luas Permukaan Bola\n");
        printf("Masukkan jari-jari bola: ");
        scanf("%f", &r);
        lpbola = 4 * phi * (r * r);
        printf("Luas permukaan bola = %.2f\n", lpbola);
        break;
    case 2:
        printf("Menghitung Luas Permukaan Kubus\n");
        printf("Masukkan ukuran sisi kubus: ");
        scanf("%f", &s);
        lpkubus = 6 * s * s;
        printf("Luas Permukaan Kubus: %.2f\n", lpkubus);
        break;
    case 3:
        printf("Menghitung Luas Permukaan Balok\n");
        printf("Memasukkan panjang: ");
        scanf("%f", &p);
        printf("Memasukkan lebar: ");
        scanf("%f", &l);
        printf("Memasukkan tinggi: ");
        scanf("%f", &t);
        lpbalok = 2 * (p * l + p * t + l * t);
        printf("Luas Permukaan Balok: %.2f\n", lpbalok);
        break;
    case 4:
        printf("Menghitung Luas Permukaan Tabung\n");
        printf("Memasukkan jari-jari: ");
        scanf("%f", &r);
        printf("Memasukkan tinggi: ");
        scanf("%f", &t);
        lt = 2 * phi * r * (r + t);
        printf("Luas Permukaan Tabung = %.2f\n", lt);
        break;
    default:
        printf("Pilihan tidak valid\n");
    }

    return 0;
}