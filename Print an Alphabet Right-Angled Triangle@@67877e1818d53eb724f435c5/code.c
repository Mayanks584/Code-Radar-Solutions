#include <stdio.h>

int main() {
    char n;
    scanf("%c", &n);
    for (int i = n; i >= 'A'; i--) {  
        for (int j = 'A'; j <= i; j++) {
            printf("%d ", j);  
        }
        printf("\n");
    }
    return 0;
}
