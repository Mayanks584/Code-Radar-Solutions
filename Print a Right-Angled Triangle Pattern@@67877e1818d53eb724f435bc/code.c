#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d%d ",'*'); // Added comma in printf
        }
        printf("\n"); // Newline for better formatting
    }
    
    return 0; // Return statement for int main()
}
