#include <stdio.h>

// H�m t�m UCLN b?ng thu?t to�n Euclid
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// H�m t�nh BCNN d?a tr�n UCLN
int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}

int main() {
    int num1, num2;

    // Nh?p hai s? nguy�n duong
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

    // T�m v� in BCNN
    int lcm = findLCM(num1, num2);
    printf("Boi chung nho nhat cua %d va %d la: %d\n", num1, num2, lcm);

    return 0;
}

