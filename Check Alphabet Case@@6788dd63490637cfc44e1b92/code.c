// Your code here...
#include <stdio.h>

int main() {
    char ch;
    
    // Taking character input
    
    scanf("%c", &ch);

    // Checking if the character is uppercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    }
    // Checking if the character is lowercase
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
    }
    // If it's neither, it is not a letter
    else {
        printf("The entered character is not an alphabet.\n");
    }

    return 0;
}
