#include <stdio.h>

// Hàm tìm UCLN b?ng thu?t toán Euclid
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Nh?p hai s? nguyên duong
    do {
        printf("Nhap so nguyen duong thu nhat: ");
        scanf("%d", &num1);
        if (num1 <= 0) {
            printf("Vui long nhap mot so nguyen duong.\n");
        }
    } while (num1 <= 0);

    do {
        printf("Nhap so nguyen duong thu hai: ");
        scanf("%d", &num2);
        if (num2 <= 0) {
            printf("Vui long nhap mot so nguyen duong.\n");
        }
    } while (num2 <= 0);

    // Tìm và in UCLN
    int gcd = findGCD(num1, num2);
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", num1, num2, gcd);

    return 0;
}

