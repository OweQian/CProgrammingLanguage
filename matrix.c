#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[100][100];
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; ++i) {
            for (j = 0; j < n; ++j) {
                scanf("%d", &matrix[i][j]);
            }
        }

        for (i = 0; i < n; ++i) {
            for (j = i; j < n; ++j) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }

        for (i = 0; i < n; ++i) {
            for (j = 0; j < n; ++j) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}