#include <stdio.h>

/*
Swapping values can be solved in many ways; in my information:
1- using normal addition and subtraction
2- using third parameter to swap values (This will use extra space for memory, but it's very easy)
3- using Bitwise operators XOR specifically
*/
void main()
{
    int n1, n2;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);

    n1 = n1 ^ n2;
    n2 = n1 ^ n2;
    n1 = n1 ^ n2;

    printf("Now, value of num1 is: %d and value of num2: %d", n1, n2);
}