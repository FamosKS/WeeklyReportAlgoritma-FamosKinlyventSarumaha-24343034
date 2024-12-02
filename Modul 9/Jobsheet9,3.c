#include <stdio.h>

int main()
{
    // Skenario A
    int Lesley = 57082;
    int Layla = Lesley;
    int Balmond = Layla + 1;

    printf("Skenario A:\n");
    printf("a) Nilai Layla: %d\n", Layla);
    printf("b) Nilai Balmond: %d\n", Balmond);

    // Skenario B
    int *LaylaPtr = &Lesley;
    Balmond = *LaylaPtr + 1;

    printf("\nSkenario B:\n");
    printf("a) Nilai Layla: %d\n", *LaylaPtr);
    printf("b) Nilai Balmond: %d\n", Balmond);

    return 0;
}