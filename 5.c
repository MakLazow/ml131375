#include <stdio.h>

int main() {
    int n;
    printf("Podaj liczb� student�w w grupie: ");
    scanf("%d", &n);

    int suma = 0;
    int i = 1;
    while (i <= n) {
        int punkty;
        printf("Podaj liczb� punkt�w dla studenta %d: ", i);
        scanf("%d", &punkty);
        suma += punkty;
        i++;
    }

    float srednia = (float)suma / n;
    printf("�rednia liczba punkt�w w grupie to: %.2f\n", srednia);

    return 0;
}
