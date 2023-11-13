#include <stdio.h>

int main() {
    int n;
    printf("Podaj iloœæ liczb w ci¹gu: ");
    scanf("%d", &n);

    int liczby[n];
    printf("Podaj %d liczb w ci¹gu:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &liczby[i]);
    }

    int suma = 0;
    for (int i = 0; i < n; i++) {
        if (liczby[i] % 2 == 0) {
            suma += liczby[i];
        }
    }

    printf("Suma liczb parzystych w ci¹gu wynosi: %d\n", suma);

    return 0;
}