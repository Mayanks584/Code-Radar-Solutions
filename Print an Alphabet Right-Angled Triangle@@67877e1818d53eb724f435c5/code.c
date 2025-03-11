#include <stdio.h>

int main() {
    char n;
    scanf("%c", &n);
    for (int i = n; i >= 1; i--) {  
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);  
        }
        printf("\n");
    }
    return 0;
}
