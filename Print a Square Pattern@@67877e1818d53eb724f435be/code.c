#include <stdio.h>

void main() {
    int i, j, a, b;

    scanf("%d%d", &a,&b);

    for (i = 0; i < a; i++) {  // Fixed variable name and condition
        for (j = 0; j < b; j++) {  // Fixed loop syntax
            printf("* ");  // Printing asterisks instead of using %d%d
        }
        printf("\n");  // Moves to the next line after printing a row
    }
}
