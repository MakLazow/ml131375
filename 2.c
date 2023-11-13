#include <stdio.h>

int main() {
    int liczba, iloscDodatnich = 0, iloscUjemnych = 0;
    int sumaDodatnich = 0, sumaUjemnych = 0;

    printf("Podaj 10 liczb:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Liczba %d: ", i);
        scanf("%d", &liczba);

        if (liczba > 0) {
            iloscDodatnich++;
            sumaDodatnich += liczba;
        }
        else if (liczba < 0) {
            iloscUjemnych++;
            sumaUjemnych += liczba;
        }
    }

    printf("\nPodsumowanie:\n");
    printf("Liczby dodatnie: \n");
    printf("Iloœæ: %d\n", iloscDodatnich);
    printf("Suma: %d\n\n", sumaDodatnich);
    printf("Liczby ujemne: \n");
    printf("Iloœæ: %d\n", iloscUjemnych);
    printf("Suma: %d\n", sumaUjemnych);

    return 0;
}