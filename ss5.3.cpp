#include <stdio.h>

int main() {
    int n, sum = 0;

    // Y�u c?u ngu?i d�ng nh?p m?t s? nguy�n duong
    do {
        printf("Nhap vao mot so nguyen duong: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("So nhap vao phai la so nguyen duong. Vui long nhap lai.\n");
        }
    } while (n <= 0);

    // T�nh t?ng t? 1 d?n n
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // In k?t qu?
    printf("Tong cac so tu 1 den %d la: %d\n", n, sum);

    return 0;
}

