#include <stdio.h>

void main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    printf("You entered: %c \n", c);
    printf("Its ascii code is: %d \n", c); // ASCII is a code set like dictionary contains... like A = 65, B = 66 and so on.
}