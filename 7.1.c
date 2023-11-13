#include <stdio.h>

int main() {
    int i, j;
    for (i = 9; i >= 0; i--) { // Odwrócona pêtla zewnêtrzna
        for (j = 0; j <= i; j++)
            printf("X");
        printf("\n");
    }

    return 0;
}