#include <stdio.h>

int main() {
    int i, j;
    for (i = 0; i < 10; i++) { // Pêtla zewnêtrzna
        for (j = 0; j < 9 - i; j++) // Dodatkowa pêtla wewnêtrzna
            printf(" ");
        for (j = 0; j <= i; j++)
            printf("X");
        printf("\n");
    }

    return 0;
}
