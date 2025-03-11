#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int m = sqrt(n);  // Find integer square root
    if (m * m == n) { // Check if square of m equals n
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;  // Indicate successful execution
}

