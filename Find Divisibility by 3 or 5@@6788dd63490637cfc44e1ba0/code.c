#include <stdio.h>

void main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a % 3 == 0 && b % 3 == 0) {
        printf("Divisible by Both\n");
    }
    else if (a % 5 == 0 && b % 5 == 0) {
        printf("Divisible by Both\n");
    }
    else if (a % 3 == 0 || b % 3 == 0) {
        printf("Divisible by 3\n");
    }
    else {
        printf("Not Divisible\n");
    }
}
