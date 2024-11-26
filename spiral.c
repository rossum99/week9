#include <stdio.h>
int main() {
    int n, i, j, k = 1;
    printf("Enter index of square here: ");
    scanf("%d", &n);
    int a[n][n];
    for (int l = 0; l < (n + 1) / 2; l++) {
        for (j = l; j < n - l; j++)
            a[l][j] = k++;
        for (i = l + 1; i < n - l; i++)
            a[i][n - l - 1] = k++;
        for (j = n - l - 2; j >= l; j--)
            a[n - l - 1][j] = k++;
        for (i = n - l - 2; i > l; i--)
            a[i][l] = k++;
    }
    printf("Spiral Matrix of size %d:\n", n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
