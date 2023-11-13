#include <stdio.h>
#include <stdlib.h> // do generowania losowych liczb

int main() {
    int n;
    printf("Podaj iloœæ liczb do wylosowania: ");
    scanf("%d", &n);

    int liczby[n];
    printf("Wylosowane liczby:\n");
    for (int i = 0; i < n; i++) {
        liczby[i] = rand() % 56 - 10; // wylosowanie liczby z przedzia³u (-10,45)
        printf("%d ", liczby[i]);
    }
    printf("\n");

    int suma = 0;
    for (int i = 0; i < n; i++) {
        if (liczby[i] % 2 == 0) {
            suma += liczby[i];
        }
    }

    printf("Suma liczb parzystych w ci¹gu wynosi: %d\n", suma);

    return 0;
}