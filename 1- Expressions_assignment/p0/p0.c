#include <stdio.h>

void main()
{
    int a, b, c, d;
    float result;
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    printf("Enter value for c: ");
    scanf("%d", &c);
    printf("Enter value for d: ");
    scanf("%d", &d);

    if (c - d != 0)
    {
        result = (float)(a + b) / (float)(c - d);
        printf("result = %f", result);
    } else
    {
        printf("Division by zero is not allowed.\n");
    }
}