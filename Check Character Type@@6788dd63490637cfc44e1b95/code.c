#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);
    
    // Convert to lowercase to simplify vowel check
    char lowerCh = tolower(ch);

    if (isalpha(ch)) {  // Check if it's a letter
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } 
    else if (isdigit(ch)) {  // Check if it's a number
        printf("Digit\n");
    } 
    else {  // If not a letter or digit, it's a special character
        printf("Special Character\n");
    }

    return 0;
}
