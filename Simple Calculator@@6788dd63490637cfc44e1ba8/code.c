#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;

    // Taking user input
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    scanf("%lf %lf", &num1, &num2);

    // Performing operations using if-else
    if (op == '+') {
        result = num1 + num2;
        printf("Result: %.2lf\n", result);
    } 
    else if (op == '-') {
        result = num1 - num2;
        printf("Result: %.2lf\n", result);
    } 
    else if (op == '*') {
        result = num1 * num2;
        printf("Result: %.2lf\n", result);
    } 
    else if (op == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %.2lf\n", result);
        } else {
            printf("Error! Division by zero is not allowed.\n");
        }
    } 
    else {
        printf("Invalid operator!\n");
    }

    return 0;
}
