#include <stdio.h>

int perkalian(int a, int b)
{

    if (b == 0)
    {
        return 0;
    }

    return a + perkalian(a, b - 1);
}

void tampilkanPerkalian(int a, int b)
{
    if (b == 0)
    {
        printf("0");
        return;
    }

    printf("%d", a);

    for (int i = 1; i < b; i++)
    {
        printf(" + %d", a);
    }
}

int main()
{
    int a, b;

    printf("Masukkan bilangan bulat positif pertama (a): ");
    scanf("%d", &a);
    printf("Masukkan bilangan bulat positif kedua (b): ");
    scanf("%d", &b);

    if (a < 0 || b < 0)
    {
        printf("Silakan masukkan bilangan bulat positif.\n");
        return 1;
    }

    printf("%d x %d = ", a, b);
    tampilkanPerkalian(a, b);
    printf(" = %d\n", perkalian(a, b));

    return 0;
}