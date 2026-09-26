#include <stdio.h>

int main() {
    int a[100], b[100], merge[200];
    int n, m, i;

    printf("Enter size of first array: ");
    scanf("%d", &n);

    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &m);

    printf("Enter elements of second array:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n; i++) {
        merge[i] = a[i];
    }

    for (i = 0; i < m; i++) {
        merge[n + i] = b[i];
    }

    printf("Merged array:\n");

    for (i = 0; i < n + m; i++) {
        printf("%d ", merge[i]);
    }

    return 0;
}