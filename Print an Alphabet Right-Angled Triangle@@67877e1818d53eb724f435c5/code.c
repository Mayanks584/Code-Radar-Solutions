#include <stdio.h>

int main() {
    char n;
    scanf(" %c", &n);  // Added space before %c to handle newline characters
    if (n >= 'a' && n <= 'z') {
        for (char i = n; i >= 'a'; i--) {
            for (char j = 'a'; j <= i; j++) {
                printf("%c ", j);
            }
            printf("\n");
        }
    } else if (n >= 'A' && n <= 'Z') {
        for (char i = n; i >= 'A'; i--) {
            for (char j = 'A'; j <= i; j++) {
                printf("%c ", j);
            }
            printf("\n");
        }
    }
    return 0;
}
