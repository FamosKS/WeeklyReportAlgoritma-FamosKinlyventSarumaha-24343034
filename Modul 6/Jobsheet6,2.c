#include <stdio.h>

int main()
{
    int i, j, tinggi;

    tinggi = 5;

    // Mencetak segitiga siku-siku
    for (i = 1; i <= tinggi; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}