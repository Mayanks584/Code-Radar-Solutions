#include<stdio.h>
void main() {
    float n;
    printf("Enter the radius: ");
    scanf("%f", &n); // Corrected format specifier to %f
    printf("Area: %.2f\n", 3.14 * n * n); // Displays the area with 2 decimal places
}
