#include <stdio.h>

int main() {
    int A, B;
    for (A = 0; A < 99; A++) {
        for (B = A + 1; B < 100; B++) {
            printf("%02d %02d", A, B);
            if (A == 98 && B == 99) {
                continue;
            }
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}
