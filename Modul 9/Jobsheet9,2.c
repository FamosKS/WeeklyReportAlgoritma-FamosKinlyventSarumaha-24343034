#include <stdio.h>
#include <string.h>

int main()
{
    char kalimat[100];
    int panjang, i;

    printf("Kalimat Masukan: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    panjang = strlen(kalimat);
    if (kalimat[panjang - 1] == '\n')
    {
        kalimat[panjang - 1] = '\0';
    }

    printf("Kebalikannya: ");
    for (i = panjang - 1; i >= 0; i--)
    {
        printf("%c", kalimat[i]);
    }
    printf("\n");

    return 0;
}