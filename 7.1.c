#include <stdio.h>

int main() {
    int i, j;
    for (i = 9; i >= 0; i--) { // Odwr�cona p�tla zewn�trzna
        for (j = 0; j <= i; j++)
            printf("X");
        printf("\n");
    }

    return 0;
}