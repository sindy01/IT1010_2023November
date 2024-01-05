// Lecture 4 Exercise 1 - Slide 5
// using if statement

#include <stdio.h>

int main() 
{
    int num1, num2;

    // Read the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Read the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Compare and display the largest number
    if (num1 > num2) 
	{
        printf("The largest number is: %d\n", num1);
    } 
	if (num2 > num1) 
	{
        printf("The largest number is: %d\n", num2);
    }

    return 0;
}

