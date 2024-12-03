#include<stdio.h>

#include <stdio.h>
int main() {
    int n, m;
    printf("Nhap so dong: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);
    int arr[n][m];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
        printf("------\n");
    }
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n - 1; i++) {
            for (int k = 0; k < n - i - 1; k++) {
                if (arr[k][j] > arr[k + 1][j]) {
                    int temp = arr[k][j];
                    arr[k][j] = arr[k + 1][j];
                    arr[k + 1][j] = temp;
                }
            }
        }
    }
    printf("Mang sau khi sap xep theo tung cot:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
