#include <stdio.h>

void main()
{
    float n1, n2, result;
    printf("Enter first number: ");
    scanf("%f",&n1);
    printf("Enter second number: ");
    scanf("%f",&n2);

    result = n1 * n2;
    printf("multiplication: %f", result);
}