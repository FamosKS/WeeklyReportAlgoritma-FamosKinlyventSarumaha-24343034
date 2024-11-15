#include <stdio.h>

int main()
{
    printf("Deret Bilangan Genap dari 0 hingga 50:\n");
    for (int i = 0; i <= 50; i += 2)
    {
        printf("%d ", i);
    }

    printf("\n\nDeret Bilangan Ganjil dari 0 hingga 50:\n");
    for (int i = 1; i < 50; i += 2)
    {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}