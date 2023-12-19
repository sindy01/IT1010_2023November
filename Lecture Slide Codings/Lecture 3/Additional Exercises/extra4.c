//Lecture 3 - More Examples on Increment & Decrement Operators

#include <stdio.h>

int main()
{
    int x = 5, y = 10, z;
    x++; 
    ++y;
    z = --x + y;

    printf("The value of z is %d\n", z);
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);

    return 0;
}

