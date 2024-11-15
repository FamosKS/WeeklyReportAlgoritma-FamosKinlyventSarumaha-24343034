#include <stdio.h>
int main()
{
    printf("Konversi Suhu");
    printf("\n\n");
    printf("Masukkan suhu dalam Celcius: ");
    float celcius, kelvin, fahrenhit, reamur;
    scanf("%f", &celcius);
    kelvin = celcius + 273.15;
    fahrenhit = (celcius * 1.8) + 32;
    reamur = celcius * 0.8;
    printf("Suhu dalam Kelvin = %.2f \n", kelvin);
    printf("Suhu dalam Fahrenheit = %.2f \n", fahrenhit);
    printf("Suhu dalam Reamur = %.2f \n", reamur);
    return 0;
}