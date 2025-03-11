#include <stdio.h>
#include <math.h>

int main() {
    int m;
    scanf("%d", &m);
    
    int n = sqrt(m);  // Find integer square root
    if (n* n == m) { // Check if square of m equals n
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;  // Indicate successful execution
}

