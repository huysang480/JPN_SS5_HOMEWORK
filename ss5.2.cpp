#include <stdio.h>

int main() {
    int target = 42; // Khai b�o v� g�n gi� tr? cho bi?n s? nguy�n
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

