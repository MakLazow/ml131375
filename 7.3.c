#include <stdio.h>

int main() {
    int i, j;
    for (i = 0; i < 10; i++) { // P�tla zewn�trzna
        for (j = 0; j < i; j++) // P�tla wewn�trzna przed gwiazdkami
            printf(" ");
        for (j = 0; j < 10 - i; j++)
            printf("X");
        printf("\n");
    }

    return 0;
}