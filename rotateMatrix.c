#include <stdio.h>

void rotateMatrix(int matrix[][100], int n, int r) {
    r = r % 4;
    while (r--) {
        for (int i = 0; i < n / 2; i++) {
            for (int j = i; j < n - i - 1; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[n - j - 1][i];
                matrix[n - j - 1][i] = matrix[n - i - 1][n - j - 1];
                matrix[n - i - 1][n - j - 1] = matrix[j][n - i - 1];
                matrix[j][n - i - 1] = temp;
            }
        }
    }
}

int main() {
    int n, r, i, j;
    int matrix[100][100];
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; ++i) {
            for (j = 0; j < n; ++j) {
                scanf("%d", &matrix[i][j]);
            }
        }

        scanf("%d", &r);
        rotateMatrix(matrix, n, r);
        for (i = 0; i < n; ++i) {
            for (j = 0; j < n; ++j) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}