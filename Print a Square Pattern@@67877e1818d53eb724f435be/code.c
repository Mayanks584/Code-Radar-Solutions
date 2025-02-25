#include <stdio.h>

void main() {
    int a, b;

    scanf("%d%d", &a,&b);

    for (i = 0; i < a; i++) {  
        for (j = 0; j < b; j++) { 
            printf("* ");  
        }
        printf("\n");  
    }
}
