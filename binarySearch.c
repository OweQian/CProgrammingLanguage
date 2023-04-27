#include <stdio.h>
int nums[10001];

int binarySearch(int n, int *nums, int target) {
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = (low + high) >> 1;
        if (nums[mid] == target) {
            return mid;
        } else if (target > nums[mid]) {
            low = mid + 1;
        } else if (target < nums[mid]) {
            high = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n, target, i;
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; ++i) {
            scanf("%d", &nums[i]);
        }
        scanf("%d", &target);
        printf("%d\n", binarySearch(n, nums, target));
    }
    return 0;
}