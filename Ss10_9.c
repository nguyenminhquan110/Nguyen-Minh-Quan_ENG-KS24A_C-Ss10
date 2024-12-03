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
	int min;
	if (n < m) {
	    min = n;
	} else {
	    min = m;
	}
    for (int i = 0; i < min - 1; i++) {
        for (int j = 0; j < min - i - 1; j++) {
            if (arr[j][j] > arr[j + 1][j + 1]) {
                int temp = arr[j][j];
                arr[j][j] = arr[j + 1][j + 1];
                arr[j + 1][j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep theo duong cheo chinh:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

