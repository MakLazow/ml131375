#include <stdio.h>

int main() {
    int i, j;
    for (i = 0; i < 10; i++) { // Pêtla zewnêtrzna
        for (j = 0; j < i; j++) // Pêtla wewnêtrzna przed gwiazdkami
            printf(" ");
        for (j = 0; j < 10 - i; j++)
            printf("X");
        printf("\n");
    }

    return 0;
}