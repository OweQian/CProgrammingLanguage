#include <stdio.h>

int main() {
    int a;
    while (scanf("%d", &a)) {
        switch (a) {
            case 1:
                printf("一");
                break;
            case 10:
                printf("十");
                break;
            case 100:
                printf("百");
                break;
            case 1000:
                printf("千");
                break;
            case 10000:
                printf("万");
                break;            
            default:
                printf("无法识别");
                break;
        }
        printf("\n");
    }
    
    return 0;
}
