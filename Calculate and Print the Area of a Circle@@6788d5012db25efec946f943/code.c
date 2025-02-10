#include<stdio.h>

int main() {
    float a; // Variable for radius
    printf("Enter the radius: ");
    scanf("%f", &a); // Use %f to read a float

    float b = 3.14 * a * a; // Calculate the area of the circle

    printf("Area: %.4f\n", b); // Print the area up to 4 decimal places
    return 0; // Return 0 to indicate successful execution
}
