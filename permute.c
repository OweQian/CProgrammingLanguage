#include <stdio.h>

void permute(char *a, int l, int r) {
    int i;
    if (l == r) {
        printf("%s\n", a);
    } else {
        for (i = l; i <= r; ++i) {
            char temp = a[l];
            a[l] = a[i];
            a[i] = temp;
            permute(a, l + 1, r);
            temp = a[l];
            a[l] = a[i];
            a[i] = temp;
        }
    }
}

int main() {
    char a[] = "12345";
    permute(a, 0, 4);
    return 0;
}