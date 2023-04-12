#include <stdio.h>
const int __UNDEFINE = 100000;
char str[100];
int isnum(char c) {
    return c >= '0' && c <= '9';
}
int is_space_or_tab(char c) {
    return c == ' ' || c == '\t';
}
int judge_char(char c) {
    if (isnum(c)) return 1;
    if (c >= 'a' && c <= 'z') return 1;
    if (c >= 'A' && c <= 'Z') return 1;
    if (c == '_') return 1;
    return 0;
}
int judge(const char* str) {
    int i;
    int s, t;
    s = __UNDEFINE;
    t = 0;
    for (i = 0; str[i]; ++i) {
        if (!is_space_or_tab(str[i])) {
            if (s == __UNDEFINE) {
                s = i;
            }
            t = i;
        }
        else {
            return 0;
        }
    }
    if (s > t) {                       // (1)
        return 0;
    }
    if (isnum(str[s])) {               // (2)
        return 0;
    }
    for (i = s; i <= t; ++i) {         
        if (is_space_or_tab(str[i])) { // (3)
            return 0;
        }
        if (!judge_char(str[i])) {     // (4)
            return 0;
        }
    }
    return 1;
}
int main() {
    int t;
    scanf("%d", &t);
    getchar();
    while (t--) {
        gets(str);
        printf("%s\n", judge(str) ? "yes" : "no");
    }
    return 0;
}
