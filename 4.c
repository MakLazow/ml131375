#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n;
    printf("Podaj ilość liczb do wylosowania: ");
    scanf("%d", &n);

    int liczby[n];
    printf("Wylosowane liczby:\n");
    for (int i = 0; i < n; i++) {
        liczby[i] = rand() % 56 - 10; 
        printf("%d ", liczby[i]);
    }
    printf("\n");

    int suma = 0;
    for (int i = 0; i < n; i++) {
        if (liczby[i] % 2 == 0) {
            suma += liczby[i];
        }
    }

    printf("Suma liczb parzystych w ciągu wynosi: %d\n", suma);

    return 0;
}
