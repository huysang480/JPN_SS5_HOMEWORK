#include <stdio.h>

int main() {
    int target = 42; // Khai báo và gán giá tr? cho bi?n s? nguyên
    int guess;

    printf("Nhap vao mot so: ");
    do {
        scanf("%d", &guess);
        if (guess != target) {
            printf("Sai roi, thu lai: ");
        }
    } while (guess != target);

    printf("Chinh xac! Chuong trinh ket thuc.\n");
    return 0;
}

