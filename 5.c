#include <stdio.h>

int main() {
    int n;
    printf("Podaj liczbê studentów w grupie: ");
    scanf("%d", &n);

    int suma = 0;
    int i = 1;
    while (i <= n) {
        int punkty;
        printf("Podaj liczbê punktów dla studenta %d: ", i);
        scanf("%d", &punkty);
        suma += punkty;
        i++;
    }

    float srednia = (float)suma / n;
    printf("Œrednia liczba punktów w grupie to: %.2f\n", srednia);

    return 0;
}
