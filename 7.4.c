#include <stdio.h>

void printTree(int height) {
    int i, j;
    for (i = 0; i < height; i++) { // P�tla zewn�trzna
        for (j = 0; j < height - i - 1; j++) // P�tla wewn�trzna przed gwiazdkami
            printf(" ");
        for (j = 0; j <= i; j++)
            printf("* ");
        printf("\n");
    }
}

int main() {
    int height = 10;

    // Generowanie choinki
    printf("Choinka 1:\n");
    printTree(height);

    return 0;
}