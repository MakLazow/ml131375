#include <stdio.h>

int main() {
    int liczba, suma = 0, ilosc = 0, maksimum = -9999999;
    float srednia;

    printf("Podaj liczby (wpisz liczbê mniejsz¹ od 0 aby zakoñczyæ): \n");
    do {
        scanf("%d", &liczba);

        if (liczba >= 0) {
            suma += liczba;
            ilosc++;

            if (liczba > maksimum) {
                maksimum = liczba;
            }
        }
    } while (liczba >= 0);

    if (ilosc > 0) {
        srednia = (float)suma / ilosc;

        printf("Suma wprowadzonych liczb: %d\n", suma);
        printf("Œrednia wprowadzonych liczb: %.2f\n", srednia);
        printf("Wartoœæ maksymalna: %d\n", maksimum);
    }
    else {
        printf("Nie wprowadzono ¿adnych liczb wiêkszych lub równych 0.\n");
    }

    return 0;
}