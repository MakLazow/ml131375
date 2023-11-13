#include <stdio.h>

int main() {
    printf("Ci퉓 liczb: 1, 2, 3, ..., 99, 100\n");
    for (int i = 1; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    printf("Ci퉓 liczb: 100, 99, ..., 2, 1, 0\n");
    for (int i = 100; i >= 0; i--) {
        printf("%d ", i);
    }
    printf("\n\n");

    printf("Ci퉓 liczb: 7, 14, 21, ..., 70, 77\n");
    for (int i = 7; i <= 77; i += 7) {
        printf("%d ", i);
    }
    printf("\n\n");

    printf("Ci퉓 liczb: 20, 18, ..., 2, 0\n");
    for (int i = 20; i >= 0; i -= 2) {
        printf("%d ", i);
    }
    printf("\n\n");

    return 0;
}
