#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    char *ptr;

    printf("Masukkan kalimat: ");
    fgets(input, 100, stdin);

    input[strcspn(input, "\n")] = '\0'; // Menghapus newline dari fgets

    ptr = input;
    while (*ptr != '\0')
    {
        printf("%s\n", ptr);
        ptr++;
    }
    return 0;
}