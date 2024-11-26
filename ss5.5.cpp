#include <stdio.h>

int main() {
    // In t?ng b?ng c?u chuong t? 1 d?n 9
    for (int n = 1; n <= 9; n++) {
        printf("Bang cuu chuong cua %d:\n", n);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", n, i, n * i);
        }
        printf("\n"); // Dòng tr?ng gi?a các b?ng
    }

    return 0;
}

