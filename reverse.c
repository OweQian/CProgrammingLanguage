#include <stdio.h>
#include <string.h>

// int main() {
//     int i, len;
//     char str[1000+1];
//     while (scanf("%s", str) != EOF) {
//         len = strlen(str);
//         for (i = len - 1; i >= 0; --i) {
//             printf("%c", str[i]);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

void swap(char* x, char* y) {
    char tmp = *x;
    *x = *y;
    *y = tmp;
}

int main() {
    int i, len;
    char str[1000 + 1];
    while(scanf("%s", str) != EOF) {
        len = strlen(str);
        for (i = 0; i < len / 2; ++i) {
            swap(&str[i], &str[len - 1 - i]);
        }
        printf("%s\n", str);
    }
    return 0;
}
