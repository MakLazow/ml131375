#include <stdio.h>

int main() {
    int liczba, suma = 0, ilosc = 0, maksimum = -9999999;
    float srednia;

    printf("Podaj liczby (wpisz liczb� mniejsz� od 0 aby zako�czy�): \n");
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
        printf("�rednia wprowadzonych liczb: %.2f\n", srednia);
        printf("Warto�� maksymalna: %d\n", maksimum);
    }
    else {
        printf("Nie wprowadzono �adnych liczb wi�kszych lub r�wnych 0.\n");
    }

    return 0;
}