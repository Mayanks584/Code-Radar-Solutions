#include <stdio.h>

void main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  
        // Print spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            printf("  ");  
        }
        // Print numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}
