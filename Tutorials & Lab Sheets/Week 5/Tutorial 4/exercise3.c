//Tutorial 4 Exercise 3

//Practice to write nested if… else statement

#include <stdio.h>

int main() 
{
    float number1, number2, result;
    char operation;

    // Input two numbers and an operator
    printf("Enter first number: ");
    scanf("%f", &number1);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operation);  // We put the space before %c to consume any newline character left in the input buffer

    printf("Enter second number: ");
    scanf("%f", &number2);

    // Perform calculations based on the operator using nested if else statement
    if (operation == '+') 
	{
        result = number1 + number2;
        printf("Result: %.2f\n", result);
    } 
	else if (operation == '-') 
	{
        result = number1 - number2;
        printf("Result: %.2f\n", result);
    } 
	else if (operation == '*') 
	{
        result = number1 * number2;
        printf("Result: %.2f\n", result);
    } 
	else if (operation == '/') 
	{
        result = number1 / number2;
        printf("Result: %.2f\n", result);
       
    } 
	else 
	{
        printf("You've entered an invalid operator.\n");
    }

    return 0;
}

