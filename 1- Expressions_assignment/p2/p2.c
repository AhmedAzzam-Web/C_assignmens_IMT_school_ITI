#include <stdio.h>

void main()
{
    int n1, n2, remainder;
    float division;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);

    division = (float)n1 / n2;
    remainder = n1 % n2;

    printf("Division result: %f \n", division);
    printf("remainder result: %d", remainder);
}