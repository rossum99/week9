#include <stdio.h>
int main() {
    int n, i, j, c, newi, newj;
    printf("Enter index of square: ");
    scanf("%d", &n);
    int a[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            a[i][j] = 0;
        }
    }

 
    i = n / 2;
    j = n - 1;
    a[i][j] = 1;

    for (c = 2; c <= n * n; c++) {

        newi = i - 1;
        newj = j + 1;

        if (newi == -1 && newj == n) {
            newi = 0;
            newj = n - 2;
        } else {
        
            if (newi < 0) 
                newi = n - 1;
            if (newj >= n) 
                newj = 0;
        }

        if (a[newi][newj] != 0) {
            newi = i + 1;
            newj = j;
        }

        i = newi;
        j = newj;
        a[i][j] = c;
    }

    printf("Magic Square of size %d:\n", n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
