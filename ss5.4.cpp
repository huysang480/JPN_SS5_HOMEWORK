#include <stdio.h>

int main() {
    int n;

    // Yêu c?u ngu?i dùng nh?p s? nguyên duong t? 1 d?n 10
    do {
        printf("Nhap vao mot so nguyen duong tu 1 den 10: ");
        scanf("%d", &n);
        if (n < 1 || n > 10) {
            printf("So nhap vao khong hop le. Vui long nhap lai.\n");
        }
    } while (n < 1 || n > 10);

    // In b?ng c?u chuong
    printf("Bang cuu chuong cua %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

