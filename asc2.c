#include <stdio.h>
#include <string.h>

char specialChar[] = "~!@#$%^";
int isSpecialChar(char c) {
    for (int i = 0; specialChar[i]; ++i) {
        if (specialChar[i] == c) {
            return 1;
        } 
    }
    return 0;
} 

char str[100];
int typ[4];

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
       scanf("%s", &str);
       if (strlen(str) < 8 || strlen(str) > 16) {
            printf("NO\n");
            continue;
       }
       typ[0] = typ [1] = typ[2] = typ[3] = 0;
       for (int i = 0; str[i]; ++i) {
            if (str[i] >= 'a' && str[i] <= 'z') typ[0] = 1;
            if (str[i] >= 'A' && str[i] <= 'Z') typ[1] = 1;
            if (str[i] >= '0' && str[i] <= '9') typ[2] = 1;
            if (isSpecialChar(str[i])) typ[3] = 1;
       }
       if (typ[0] + typ[1] + typ[2] + typ[3] >= 3) {
            printf("YES\n");
       } else {
            printf("NO\n");
       }
    }
    return 0;
}