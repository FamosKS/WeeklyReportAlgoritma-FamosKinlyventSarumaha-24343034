#include <stdio.h>
#include <string.h>

int main()
{
    const char *usernameBenar = "admin";
    const char *passwordBenar = "password123";

    char username[50];
    char password[50];

    printf("Masukkan username: ");
    scanf("%s", username);

    printf("Masukkan password: ");
    scanf("%s", password);

    if (strcmp(username, usernameBenar) == 0 && strcmp(password, passwordBenar) == 0)
    {
        printf("Berhasil login\n");
    }
    else
    {
        printf("Password salah\n");
    }

    return 0;
}