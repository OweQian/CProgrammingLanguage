#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = arr[i];
        j = i;
        while (j >= 0 && arr[j - 1] > temp) {
            arr[j] = arr[j - 1];
            j--;
        }
        if (j != i) {
            arr[j] = temp;
        }
    }
}

int main() {
    int n, i;
    while (scanf("%d", &n) != EOF) {
        int arr[n];
        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        insertionSort(arr, n);
        for (i = 0; i < n; i++) {
            printf("%d", arr[i]);
        }
        printf("\n");
    }
    return 0;
}