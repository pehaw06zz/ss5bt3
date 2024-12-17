#include <stdio.h>

int main() {
    int n, sum = 0;
    do {
        printf("nhap vao mot so nguyen duong: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("so nhap phai la so nguyn duong.\n");
        }
    } while (n <= 0);
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("tong cac so tu 1 den %d la: %d\n", n, sum);

    return 0;
}
