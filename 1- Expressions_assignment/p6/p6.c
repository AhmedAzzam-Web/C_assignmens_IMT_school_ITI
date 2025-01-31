#include <stdio.h>

void main()
{
    float length, width, perimeter;
    printf("Enter first number: ");
    scanf("%f",&length);
    printf("Enter second number: ");
    scanf("%f",&width);

    perimeter = 2 * (length + width);
    printf("perimeter: %f", perimeter);
}