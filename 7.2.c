#include <stdio.h>

int main() {
    int i, j;
    for (i = 0; i < 10; i++) { // P�tla zewn�trzna
        for (j = 0; j < 9 - i; j++) // Dodatkowa p�tla wewn�trzna
            printf(" ");
        for (j = 0; j <= i; j++)
            printf("X");
        printf("\n");
    }

    return 0;
}
