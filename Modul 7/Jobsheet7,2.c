#include <stdio.h>

int main()
{
    int n;
    printf("Input banyak mahasiswa: ");
    scanf("%d", &n);

    char nama[n][100];

    for (int i = 0; i < n; i++)
    {
        printf("Input nama mahasiswa %d: ", i + 1);
        scanf(" %[^\n]", nama[i]);
    }

    printf("\nNama mahasiswa yang diinput:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Nama mahasiswa ke-%d: %s\n", i + 1, nama[i]);
    }

    return 0;
}