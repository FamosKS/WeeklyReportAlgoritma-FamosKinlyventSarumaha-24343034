#include <stdio.h>

int main()
{
    int baris, kolom;

    for (baris = 1; baris <= 5; baris++)
    {
        for (kolom = 1; kolom <= baris; kolom++)
        {
            int angka = kolom * baris;
            printf("%d ", angka);
        }
        printf("\n");
    }

    return 0;
}